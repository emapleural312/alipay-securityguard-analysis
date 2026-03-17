# Alipay SecurityGuard SDK — Complete Security Analysis

> **Disclaimer**: This research is conducted for educational and security research purposes only. The author assumes no liability for any direct or indirect damages arising from the use of information in this repository. All trademarks are property of their respective owners. Findings were reported to the vendor via responsible disclosure.

## Executive Summary

A comprehensive reverse engineering analysis of the SecurityGuard SDK embedded in Alipay (v10.8.30.8000), revealing the complete internal architecture of the security framework protecting one of the world's largest mobile payment applications (1B+ users).

**Key achievements:**
- Mapped all ~80 native commands through the single JNI entry point
- Captured AVMP bytecode VM signatures via custom C gadget
- Reversed 3 XOR-based string encryption variants
- Documented 22 hidden behavior monitoring events
- Identified 29-point device super-fingerprinting
- Confirmed absence of certificate pinning
- Analyzed PatchProxy remote code modification capability

## CVE References

| CVE | Vulnerability | CWE | CVSS |
|-----|--------------|-----|------|
| Pending (MITRE #2005801) | DeepLink URL Scheme Access Control Bypass | CWE-939 | 9.1 |
| Pending | ds.alipay.com Open Redirect Whitelist Bypass | CWE-601+CWE-939 | 9.3 |
| Pending | iOS tradePay Unauthorized Payment Invocation | CWE-940 | 8.6 |
| Pending | End-to-End Data Exfiltration Chain | CWE-200 | 8.6 |
| Pending | UI Spoofing via showToast/setTitle | CWE-451 | 8.1 |
| Pending | iOS Silent GPS Location Exfiltration | CWE-359 | 7.4 |
| Pending | No Certificate Pinning + Remote Degradation | CWE-295 | 7.4 |
| Pending | AVMP Signature Capture-Replay | CWE-294 | 7.7 |

## Architecture

```
SecurityGuard SDK
├── sgmain — Core plugin, single JNI entry: doCommandNative(int, Object...)
│   ├── ~80 command IDs routing to 12+ security interfaces
│   ├── AVMP/LiteVM bytecode virtual machine for request signing
│   ├── SM4 (Chinese national cipher) for RPC encryption
│   ├── Static key management via SharedPreferences
│   └── Self-protecting ELF with corrupted section headers
├── sgsecurity — Device security body
│   ├── 29-item device fingerprinting (IMEI, OAID, WiFi MAC, MediaDrm...)
│   ├── UMID persistent cross-install device ID
│   └── Encrypted strings (nearly all obfuscated)
├── sgmiddletier — Middle tier
│   ├── AVMP VM instance management (create/invoke/destroy)
│   ├── WUA device proof generation
│   └── OTP generation
├── APSE/BlueShield — Anti-tampering
│   ├── myhook inline hook engine
│   ├── ptrace anti-debug
│   ├── /proc/maps scanning (Frida/Xposed detection)
│   └── mprotect memory protection
└── Network Layer
    ├── EmptyX509TrustManagerWrapper — NO certificate pinning
    ├── PatchProxy/ChangeQuickRedirect on ALL security methods
    ├── SM4 content encryption (via SecurityGuard commands)
    └── AVMP signature tokens (x-sign HTTP header)
```

## Key Findings

### 1. AVMP Signature Bypass (C Gadget)

The AVMP bytecode VM — Alipay's last line of defense for request authentication — can be invoked programmatically via a 132-line C gadget operating at the JNI level:

```c
// Create VM instance
jobject vmIdObj = (*env)->CallObjectMethod(env, router, doCmd, 70201, args);
// Execute signing
jobject result = (*env)->CallObjectMethod(env, router, doCmd, 70202, outerArgs);
```

The gadget bypasses Frida's JS-JNI serialization limitation by passing `byte[].class` directly as a JNI object. Full source: [`tools/sg_avmp_gadget.c`](tools/sg_avmp_gadget.c)

### 2. No Certificate Pinning

`EmptyX509TrustManagerWrapper.checkServerTrusted()` is an empty method. The production `X509TrustManagerWrapper` only validates against system CA store. PatchProxy can remotely degrade to accept-all behavior.

### 3. Behavior Monitoring (22 Events)

SecurityGuard silently monitors: screen on/off, app foreground/background, airplane mode, time changes, screenshots, screen recording, Bluetooth connections, phone calls, headphone state, clipboard access, network changes, and all Activity lifecycle events.

### 4. DexAOP Audio API Interception (14 Points)

All `AudioRecord` and `MediaRecorder` API calls are intercepted at bytecode level via DexAOP, monitoring when any app component accesses the microphone.

### 5. permit() = null Anti-Pattern

Multiple sensitive JSBridge extensions return `null` from `permit()`, which in the Ariver framework means **no security check is performed**:
- `TradePayBridgeExtension` — payment operations
- `H5LocationExtension` — GPS access
- `WalletUserInfoExtension` — user data
- `TitleBarBridgeExtension` / `ToastBridgeExtension` — UI spoofing

### 6. PatchProxy Remote Code Modification

Every security-critical method contains a `ChangeQuickRedirect` field that allows the vendor to remotely modify method behavior via hot-patching — without app store review or user consent.

## Verification

All findings underwent **3-LLM cross-verification** (Claude Opus 4.6 + Sonnet 4.6 + Gemini 2.5 Pro):
- **21/23** claims verified TRUE against source code
- **2/23** SUSPECT (signing output byte count lacks preserved raw evidence)
- **0/23** FALSE

## Responsible Disclosure Timeline

| Date | Event |
|------|-------|
| 2026-02-16 | Security analysis begins |
| 2026-03-07 | 17 vulnerabilities reported to vendor (Ant Group) |
| 2026-03-10 | Vendor response: "normal functionality" |
| 2026-03-11 | Public disclosure at innora.ai/zfb/ |
| 2026-03-11 | Vendor's law firm files takedown complaint (4 hours later) |
| 2026-03-12 | 6 CVEs submitted to MITRE (Ticket #2005801) |
| 2026-03-12 | 189 notifications sent to global regulators |
| 2026-03-15 | 4 WeChat articles force-deleted via legal pressure |
| 2026-03-17 | SecurityGuard SDK reverse engineering completed |
| 2026-03-17 | 2 additional CVEs submitted (cert validation + AVMP replay) |

## Vendor Suppression Pattern

1. **Verbal denial** — "normal functionality"
2. **Legal threats** — Beijing Geyun Law Firm takedown complaints
3. **Technical countermeasures** — Server-side PoC blocking (API returns mock data)
4. **Platform censorship** — 4 WeChat articles deleted citing "Cybersecurity Law"

## Global Regulatory Response

38+ institutions across 22 countries responded, including:
- **MITRE**: 8 CVEs under review (Ticket #2005801)
- **Apple Product Security**: iOS investigation (Case OE01052449093014)
- **Google Play**: Policy violation review (#9-7515000040640)
- **Packet Storm Security**: Advisory #217089 published
- **CSSF Luxembourg**: Whistleblowing case CSSFWB-2026-080
- **HKMA Hong Kong**: Complaint CE20260313175412
- **FCA UK**: Whistleblowing team acknowledged

## Related Resources

- **Full vulnerability report**: [innora.ai/zfb/](https://innora.ai/zfb/)
- **Censorship documentation**: [innora.ai/zfb/article_censorship.html](https://innora.ai/zfb/article_censorship.html)
- **Packet Storm Advisory**: [#217089](https://packetstormsecurity.com/files/id/217089)
- **Independent reproduction**: [cxxsheng (GitHub)](https://github.com/nickcxxsheng) confirmed PoC

## Reproduction

```bash
# 1. Obtain APK (v10.8.30.8000 from APKPure)
# 2. Extract SecurityGuard modules
unzip Alipay.apk "lib/arm64-v8a/libsg*.so" -d sg_unpacked/
unzip Alipay.apk "lib/arm64-v8a/libAPSE*" -d sg_unpacked/

# 3. Decompile Java layer
jadx --show-bad-code -d sg_decompiled/ sg_unpacked/modules/sgmain/classes.dex

# 4. Analyze native code (segment-based loading for corrupted headers)
r2 -e bin.segments=true sg_unpacked/native_libs/libsgmainso-6.6.230507.so

# 5. Dynamic analysis (requires rooted device + Frida/stnel)
# See tools/sg_avmp_gadget.c for AVMP signature capture
```

## License

GPLv3 — See [LICENSE](LICENSE) for details.

## Author

**Jiqiang Feng** — Innora AI Security Research
- Email: feng@innora.ai
- Web: [innora.ai](https://innora.ai)

---

*This research demonstrates that security through obscurity is not security. The complete SecurityGuard architecture was reversed through standard static analysis techniques, proving that client-side security controls alone cannot protect a payment application.*
