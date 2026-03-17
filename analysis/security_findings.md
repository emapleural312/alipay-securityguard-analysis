# SecurityGuard Security Findings

## Critical Findings

### 1. No Certificate Pinning (MITM Viable)
- `EmptyX509TrustManagerWrapper`: `checkServerTrusted()` is a no-op
- `X509TrustManagerWrapper`: Only validates system CA store
- Every TLS method has `ChangeQuickRedirect` bypass hook
- GM-TLS (SM2/SM4 mutual auth) is optional, controlled by grayscale switch

**Impact**: Install proxy CA → decrypt all traffic. PatchProxy can activate accept-all mode remotely.

### 2. Self-Modifying ELF (Anti-Static Analysis)
- `libsgmainso-6.6.230507.so`: Zero exports, zero imports, corrupted section headers
- Code segment encrypted at rest, decrypted in `JNI_OnLoad`
- Standard r2/IDA analysis sees garbage — need runtime dump

**Bypass**: Frida `Process.enumerateModules()` → `Memory.readByteArray()` after `JNI_OnLoad` completes

### 3. AVMP Bytecode VM (Opaque Signing)
- Signing algorithm runs inside custom LiteVM bytecode interpreter
- VM instance name: "mwua" (Mobile WUA), cipher: "sgcipher"
- Java/Native boundary only passes opaque token
- Algorithm not in standard ARM code — custom bytecode

**Bypass**: Hook `doCommand(70202)` / `doCommand(12504)` to capture input/output pairs → pattern analysis

### 4. PatchProxy Pervasive (Remote Code Modification)
- Every BridgeExtension `permit()` has `ChangeQuickRedirect` hook
- Every TLS validation method has the hook
- Every signing method has the hook
- Server can push patches that override any security check

**Impact**: Vendor can silently modify security behavior without app store review

### 5. SM4 National Cipher (Non-Standard Encryption)
- RPC body encryption uses SM4 (Chinese GB/T 32907-2016)
- Implementation in native layer (not Java Crypto API)
- Key management through SecurityGuard command 10601/10605

### 6. Device Super-Fingerprinting
- Collects: IMEI, OAID, WiFi MAC, MediaDrm ID, audio route, all permissions, app signature, timezone, screen, SIM
- Generates persistent cross-install device ID (UMID/apdid)
- Periodically uploads to server
- Survives app reinstall (persisted in system keystore)

### 7. Inline Hook Framework (APSE/BlueShield)
- Built-in `myhook` engine for runtime function hooking
- Can hook system calls (`mprotect`, `ptrace`)
- Used defensively: detect/block Frida/Xposed/Magisk
- Also used offensively: wrap location/crypto APIs via DexAOP

### 8. Cookie Encryption in Transit
- `X-Ant-Encrypt-Entity` header signals encrypted cookie values
- Server encrypts Set-Cookie values
- Client decrypts via SecurityGuard before storing
- Prevents cookie theft even with TLS decrypted

## Vulnerability Classes

### permit() Returns Null Anti-Pattern
Found in multiple BridgeExtensions:
- `TradePayBridgeExtension.permit()` → null (payment!)
- `H5LocationExtension.permit()` → null (GPS!)
- `WalletUserInfoExtension.permit()` → null (user data!)
- `TitleBarBridgeExtension.permit()` → null (UI spoofing!)
- `ToastBridgeExtension.permit()` → null (UI spoofing!)

All five mean: no permission guard enforced for sensitive JSAPIs.

### Default-Allow Security Checks
- `LocationController.hasLBSPermission()`: returns `true` for non-TinyApp pages
- `SchemeLauncher.verify()`: 3 unconditional bypass paths
- `ee.checkBizParamPermission()`: `ta_tradePayCheck` defaults to "0" (disabled)
- `ib.java:592`: HTTP URLs return IGNORE (bypass domain check)

### Server-Controlled Security Policy
All security configurations fetched via `RVConfigService.getConfigWithProcessCache()`:
- Domain whitelists
- JSAPI permission levels
- Trade payment check enable/disable
- FlowCustoms rules
- Can be changed server-side without app update

## Critical Update: sgmain SO Code NOT Encrypted

### Discovery
`libsgmainso-6.6.230507.so` was previously reported as "self-modifying ELF" requiring runtime dump. **This was incorrect.**

**Actual state:**
- Section headers: **intentionally corrupted** (sizes set to 0x10, addresses zeroed)
- Program headers: **intact and valid** (LOAD0: 2MB r-x code segment)
- Code segment: **NOT encrypted** — valid ARM64 instructions throughout
- STRTAB: **intact** — JNI_OnLoad, RegisterExtForAndroid, LiteVM visible
- Some strings: **encrypted** (especially in sgsecurity), but many readable in sgmain

### Newly Found Strings in sgmain
- `sgcookiecheck` — Cookie security validation
- `uvm_sw2` — UVM (Universal VM) software v2
- `wkcookiesync` — WebKit cookie synchronization  
- `$tIsys_epolptrace_s` — Obfuscated ptrace anti-debug detection
- `LiteVM` — AVMP bytecode VM identifier
- `UVM_LD_LIBRARY_*` — UVM dynamic library loading (PREFIX/SUFFIX/EXTENSION/PATH)
- `__uvm_call_registry_` — UVM native function registration
- `__builtin_uvm_bind_native_callback` — UVM native callback binding
- `[insndebug]` — Debug detection logging
- `hja8796ac83accsgg84` — Hardcoded key/salt (ACCS related)
- `ju38csh37822hf3hc` — Hardcoded key/salt
- `uxd2dkwj294db3/4` — Hardcoded key/salt pair

### Obfuscated Export Names
- `HlupqL3ZAR`, `J2qaFN4xHz`, `KEl52mTtCb`, `pDhsAJkF7h` — randomized function names in .dynstr

### Bypass for Section Header Corruption
Use `r2 -e bin.segments=true` or `readelf -l` (program headers) instead of `readelf -S` (section headers).
The code can be fully analyzed using segment-based loading.

### sgsecurity vs sgmain
| Property | sgmain | sgsecurity |
|----------|--------|------------|
| Code encrypted | **NO** | **NO** (same pattern) |
| Strings encrypted | Partial (STRTAB intact, some .rodata encrypted) | **YES** (nearly all) |
| Section headers | Corrupted | Corrupted |
| Program headers | Valid | Valid |
| Static analysis | **FULLY POSSIBLE** | Limited (strings obfuscated) |
