Subject: Re: [MITRE Ticket #2005801] CVE-9: Insecure Security Configuration Transport + Opt-In Verification Design Flaw

---

Dear MITRE CVE Team,

This email serves two purposes regarding Ticket #2005801:

1. **Correction** to our previous CVE-1 supplemental submission (B2 "Global Kill Switch" description)
2. **New CVE-9 request** for an architectural design flaw distinct from the client-side bypasses in CVE-1

---

## Correction: B2 Is Not a Boolean Kill Switch

In our previous supplemental email, we described bypass B2 as a "Global Kill Switch" where `SchemeNeedVerify=false` disables all URL verification. **Deeper analysis reveals a more nuanced and more severe mechanism.**

Further reverse engineering reveals that `SchemeNeedVerify` is not a boolean flag but a **pipe-separated list of URL scheme prefixes** that opt-in to verification. The actual security model is:

- Schemes **in** the list → verification is performed
- Schemes **not in** the list → **verification is silently skipped**

This is an **opt-in** (allowlist) model rather than the secure **opt-out** (denylist) model. The security implication is more severe than a simple kill switch: any URL scheme not explicitly enumerated in the server-pushed configuration **automatically bypasses all FlowCustoms protections**.

---

## CVE-9 Request: Insecure Transport of Security-Critical Configuration (CWE-284 + CWE-16)

**Product:** Alipay Android (com.eg.android.AlipayGphone)
**Version:** 10.8.30.8000 (confirmed)
**Component:** FlowCustoms URL verification system + ConfigService configuration transport

### Description

Alipay's client-side URL scheme verification system (`SchemeLauncher`) depends entirely on server-pushed configuration to define its security policies. This configuration is transported via an RPC channel (`MobileSyncDataService`) that lacks certificate pinning (CVE-7), and the verification model uses an insecure opt-in design where unlisted schemes bypass all checks.

This vulnerability is **architecturally distinct** from CVE-1 (which describes specific client-side code bypass paths). CVE-9 describes a **systemic design flaw** in how security policy is defined, transported, and enforced.

### Vulnerability Details

**1. Opt-In Verification Model (CWE-284: Improper Access Control)**

The `isNeedVerify()` method determines whether a URL scheme requires verification:

```java
// SchemeLauncher.java:1064
public boolean isNeedVerify(String str) {
    if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(mSchemePref)) {
        String[] split = str.split("|");  // pipe-separated prefix list
        for (String s : split) {
            if (mSchemePref.equals(s)) {
                return true;  // scheme IS in verification list
            }
        }
    }
    return false;  // NOT in list → NO VERIFICATION
}
```

`mSchemePref` is populated from `SharedPreferences("SchemeVerifyReg")`, key `"SchemeNeedVerify"`. Only schemes matching a prefix in this list undergo verification. All other schemes are **silently allowed without any security check**.

A secure implementation would use an opt-out model: verify all schemes by default, with an explicit allowlist for known-safe schemes.

**2. Unprotected Configuration Transport (CWE-16: Configuration)**

All 8 FlowCustoms security configurations are fetched via a single RPC endpoint during app initialization:

```java
// AlipayApplication.java:899-949
ConfigService configService = findServiceByInterface(ConfigService.class);
configService.getConfig("SchemeNeedVerify");         // verification prefix list
configService.getConfig("SchemeVerifyRegList");       // regex whitelist (old)
configService.getConfig("SchemeVerifyNewRegList");    // regex whitelist (new)
configService.getConfig("SchemePeriodTime");          // verification period
configService.getConfig("bl_bundleid_scheme");        // blacklist
configService.getConfig("fatigue_bundleid_scheme");   // fatigue rules
configService.getConfig("SchemeVerifyRegBlackList");   // regex blacklist
configService.getConfig("SchemeVerifyRegNewBlackList");// new regex blacklist
```

`ConfigService` is implemented by `ConfigServiceImpl`, which uses `MobileSyncDataService` (Protobuf RPC) to fetch configuration from the server. This RPC call traverses the same HTTPS transport layer that lacks certificate pinning (CVE-7).

Values are stored locally via:
```java
// AlipayApplication.java:1067
public void E(String str, String str2) {
    SharedPreferences sp = getSharedPreferences("SchemeVerifyReg", 0);
    sp.edit().putString(str, str2).apply();
}
```

### Attack Chain

```
CVE-7 (No certificate pinning)
  → Attacker intercepts MobileSyncDataService RPC via MITM
    → Modifies "SchemeNeedVerify" response to empty string ""
      → App stores "" in SharedPreferences("SchemeVerifyReg")
        → isNeedVerify() returns false for ALL schemes
          → allowLaunch() skips verification entirely
            → CVE-1/CVE-6 DeepLink attacks succeed without restriction
```

This creates a **cascade vulnerability**: CVE-7 enables CVE-9, which disables the defense layer against CVE-1 and CVE-6.

### Four Independent Attack Vectors

| # | Vector | Prerequisites | Impact |
|---|--------|--------------|--------|
| 1 | **MITM Configuration Injection** | Network position + CVE-7 | All URL verification disabled for target device |
| 2 | **Root/ADB SP Modification** | Root access or ADB | Persistent bypass until next config sync |
| 3 | First-Launch Race Condition | Fresh install or cache clear | Temporary bypass during initialization (limited window) |
| 4 | **Incomplete Prefix List** | Knowledge of verification list | Targeted bypass for unlisted scheme prefixes |

### Why This Is Distinct from CVE-1

| Aspect | CVE-1 | CVE-9 (This Request) |
|--------|-------|---------------------|
| **Layer** | Client-side code | Architecture + configuration transport |
| **Root cause** | Code-level bypass paths | Opt-in design + unprotected config channel |
| **Fix required** | Patch specific methods | Redesign verification model + add config integrity |
| **Attacker capability** | Craft specific URLs | Disable entire verification system |
| **CWE** | CWE-939 | CWE-284 + CWE-16 |

### CVSS 3.1 Assessment

**Vector:** AV:N/AC:L/PR:N/UI:N/S:C/C:N/I:H/A:N
**Score:** 8.6 (High)

- AV:N — Network-based MITM attack
- AC:L — Low complexity: CVE-7 (no certificate pinning) eliminates the primary MITM barrier
- PR:N — No privileges required
- UI:N — No user interaction required
- S:C — Scope changed: config layer compromise disables client-side verification
- I:H — Complete bypass of URL scheme verification


### Evidence

1. `AlipayApplication.java:899-949` — All 8 configs fetched via single RPC
2. `AlipayApplication.java:1067` — `E()` method stores to SharedPreferences
3. `SchemeLauncher.java:1064` — `isNeedVerify()` opt-in logic
4. `SchemeLauncher.java:67` — `SCHEME_VERIFY_HEAD_LIST = "SchemeNeedVerify"`
5. `ConfigServiceImpl.java` — imports `MobileSyncDataService` (Protobuf RPC)
6. Smali reconstruction of `allowLaunch()` — 704 lines confirming verification skip path

---

## Researcher Information

- **Name:** Jiqiang Feng
- **Organization:** Innora AI Security Research
- **Email:** feng@innora.ai

Best regards,
Jiqiang Feng
Innora AI Security Research
