#!/bin/bash
# verify.sh — Automated verification of Alipay SecurityGuard findings
# Runs inside Docker or standalone with: jadx, rg (ripgrep), unzip
#
# Usage:
#   ./verify.sh /path/to/Alipay.apk
#   docker run -v /path/to/Alipay.apk:/apk/Alipay.apk alipay-verify
#
# Exit codes: 0 = all critical checks pass, 1 = verification failure

set -uo pipefail
# Note: NOT using set -e because bash arithmetic (( 0++ )) returns exit 1

APK="${1:?Usage: $0 <apk_path>}"
EXPECTED_SHA="2eebd18eb78b2bdcc737c568a8057345255b9660dbf6f5af83743644effcaad2"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SIG_FILE="${SCRIPT_DIR}/signatures.txt"
WORK=$(mktemp -d /tmp/alipay_verify_XXXXXX)
PASS=0
FAIL=0
WARN=0

mkdir -p "$WORK"

# Colors (if terminal supports)
RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'; NC='\033[0m'
BOLD='\033[1m'

log_pass() { echo -e "${GREEN}[PASS]${NC} $1"; PASS=$((PASS+1)); }
log_fail() { echo -e "${RED}[FAIL]${NC} $1"; FAIL=$((FAIL+1)); }
log_warn() { echo -e "${YELLOW}[WARN]${NC} $1"; WARN=$((WARN+1)); }
log_info() { echo -e "${BOLD}[INFO]${NC} $1"; }

echo "================================================================"
echo "  Alipay SecurityGuard — Independent Verification Tool v1.0"
echo "================================================================"
echo ""

# ── Phase 0: APK Integrity ──────────────────────────────────────────
log_info "Phase 0: APK Integrity Check"

if [ ! -f "$APK" ]; then
    log_fail "APK not found: $APK"
    exit 1
fi

APK_SHA=$(sha256sum "$APK" 2>/dev/null | cut -d' ' -f1 || shasum -a 256 "$APK" | cut -d' ' -f1)
if [ "$APK_SHA" = "$EXPECTED_SHA" ]; then
    log_pass "SHA-256 matches expected: ${APK_SHA:0:16}..."
else
    log_warn "SHA-256 mismatch (different APK version?)"
    log_info "  Expected: ${EXPECTED_SHA:0:32}..."
    log_info "  Got:      ${APK_SHA:0:32}..."
    log_info "  Continuing anyway — some signatures may not match."
fi
echo ""

# ── Phase 1: Quick extraction (no full decompile) ───────────────────
log_info "Phase 1: Extracting DEX files and resources"

# Extract DEX files only (fast, ~30 seconds)
unzip -qo "$APK" "*.dex" -d "$WORK/dex/" 2>/dev/null || true
unzip -qo "$APK" "lib/arm64-v8a/*.so" -d "$WORK/libs/" 2>/dev/null || true
unzip -qo "$APK" "assets/*.jar" "assets/*.dex" -d "$WORK/assets/" 2>/dev/null || true

DEX_COUNT=$(find "$WORK/dex/" -name "*.dex" 2>/dev/null | wc -l | tr -d ' ')
SO_COUNT=$(find "$WORK/libs/" -name "*.so" 2>/dev/null | wc -l | tr -d ' ')
log_info "  Found ${DEX_COUNT} DEX files, ${SO_COUNT} native libraries"
echo ""

# ── Phase 2: Decompile with jadx ────────────────────────────────────
log_info "Phase 2: Decompiling with jadx (this takes 5-10 minutes for 210MB APK)"
log_info "  Using JADX_OPTS=${JADX_OPTS:-default}"

DECOMP="$WORK/sources"
if command -v jadx &>/dev/null; then
    jadx --show-bad-code --no-res -d "$DECOMP" "$APK" 2>"$WORK/jadx.log" || {
        log_warn "jadx exited with errors (partial decompilation — this is normal for obfuscated APKs)"
        log_info "  See $WORK/jadx.log for details"
    }
else
    log_fail "jadx not found. Install: brew install jadx / apt install jadx"
    exit 1
fi

JAVA_COUNT=$(find "$DECOMP" -name "*.java" 2>/dev/null | wc -l | tr -d ' ')
log_info "  Decompiled ${JAVA_COUNT} Java files"
echo ""

# ── Phase 3: Signature Verification ─────────────────────────────────
log_info "Phase 3: Running signature checks against decompiled source"
echo ""

if [ ! -f "$SIG_FILE" ]; then
    log_warn "signatures.txt not found, using built-in checks"
    SIG_FILE=""
fi

verify_pattern() {
    local category="$1"
    local pattern="$2"
    local desc="$3"
    local min_count="${4:-1}"

    local count
    count=$(rg -c "$pattern" "$DECOMP" 2>/dev/null | awk -F: '{s+=$NF} END {print s+0}')

    if [ "$count" -ge "$min_count" ]; then
        log_pass "[${category}] ${desc} — found ${count} matches (expected ≥${min_count})"
    elif [ "$count" -gt 0 ]; then
        log_warn "[${category}] ${desc} — found ${count} (expected ≥${min_count})"
    else
        log_fail "[${category}] ${desc} — NOT FOUND"
    fi
}

if [ -n "$SIG_FILE" ] && [ -f "$SIG_FILE" ]; then
    while IFS='|' read -r cat pat desc min; do
        # Skip comments and empty lines
        [[ "$cat" =~ ^#.*$ ]] && continue
        [[ -z "$cat" ]] && continue
        verify_pattern "$cat" "$pat" "$desc" "$min"
    done < "$SIG_FILE"
else
    # Built-in critical checks if signatures.txt missing
    verify_pattern "PATCHPROXY" "public static ChangeQuickRedirect" "PatchProxy hook points" 80000
    verify_pattern "DYNCODE" "DexClassLoader" "Dynamic DEX loading" 5
    verify_pattern "DYNCODE" 'loadLibrary\("athena"\)' "Athena native hook" 1
    verify_pattern "TELEMETRY" "mdap\.alipay\.com" "Telemetry endpoint" 2
    verify_pattern "CRYPTO" "java\.util\.Random\(\)" "Non-crypto PRNG" 10
    verify_pattern "CRYPTO" "EmptyX509TrustManager" "Certificate bypass" 1
    verify_pattern "FINGERPRINT" '"imei"' "IMEI collection" 3
fi

echo ""

# ── Phase 4: Native Library Quick Check ──────────────────────────────
log_info "Phase 4: Native library string scan"

if [ -d "$WORK/libs" ]; then
    for so in "$WORK/libs/lib/arm64-v8a/"*.so; do
        [ -f "$so" ] || continue
        soname=$(basename "$so")
        if strings "$so" 2>/dev/null | rg -q "hookMethod|deCompileMethod"; then
            log_pass "[NATIVE] ${soname} — contains hook/decompile exports"
        fi
        if strings "$so" 2>/dev/null | rg -q "doCommandNative"; then
            log_pass "[NATIVE] ${soname} — contains SecurityGuard JNI entry"
        fi
    done
else
    log_warn "No native libraries extracted"
fi

echo ""

# ── Summary ──────────────────────────────────────────────────────────
echo "================================================================"
echo "  Verification Summary"
echo "================================================================"
echo -e "  ${GREEN}PASS: ${PASS}${NC}"
echo -e "  ${RED}FAIL: ${FAIL}${NC}"
echo -e "  ${YELLOW}WARN: ${WARN}${NC}"
echo ""

if [ "$FAIL" -eq 0 ]; then
    echo -e "${GREEN}${BOLD}All critical signatures verified.${NC}"
    echo "The decompiled source confirms the documented behaviors."
else
    echo -e "${RED}${BOLD}${FAIL} check(s) failed.${NC}"
    echo "This may indicate a different APK version or incomplete decompilation."
fi

echo ""
echo "Decompiled sources preserved at: $DECOMP"
echo "You can manually inspect with: rg 'PATTERN' $DECOMP"
echo ""

# Cleanup: keep sources for manual inspection
exit "$FAIL"
