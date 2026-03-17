# FlowCustoms — Client-Side Risk Control System Analysis

> Package: com.alipay.mobile.flowcustoms (212 Java files)
> Role: Client-side URL scheme verification, network risk checking, rule engine

## Architecture

```
FlowCustoms
├── launcher/          — URL scheme verification (SchemeLauncher)
│   └── SchemeLauncher.java (1500+ lines, 3 bypass paths)
├── engine/           — Rule engine
│   └── rule/         — FCRuleCenter, FCRuleMatchType, FCRuleUtils
├── net/              — Network risk checking (HTTP 419/420 interception)
│   ├── FCNetChecker   — Network request risk assessment
│   ├── FCNetCheckResult — intercept/interrupt/resCode/hitRuleId
│   └── subscriber/    — RPC event subscribers
├── page/content/     — Page content checking (PCCheckEngine)
├── jumpin/           — Incoming scheme processing
│   ├── OuterSchemeVerify — External URL verification
│   └── interactor/    — Scheme verification interactors
├── jumpout/          — Outgoing activity checking
│   └── StartActivityCheckModule — Activity launch risk check
├── util/
│   ├── fatigue/      — Rate limiting ("fatigue" control)
│   ├── config/       — FCConfigCenter (server-pushed configuration)
│   └── FCBlueShieldHelper — SecurityGuard integration
└── biz/              — Business logic
```

## Key Security Components

### 1. SchemeLauncher — URL Scheme Verification

The primary defense against malicious DeepLink URLs. Our earlier analysis identified
**3 bypass paths** in the `verify()` method (line 1429):

```
Path 1: isUriMatchInnerBundleId() → Direct allow (whitelist)
Path 2: isUriMatchNewInnerRegEx() → Direct allow (regex whitelist)
Path 3: isNativeLandingPage() + outOfControlSwitch → Post-check override
```

Additional findings:
- `mIsAllowScheme` = 0 (deny), 1 (allow) — binary decision
- `allowLaunch(Uri)` is the actual security check — but JADX failed to decompile it
  ("Method not decompiled: SchemeLauncher.allowLaunch(android.net.Uri):int")
- **Fatigue control**: Scheme verification has time-based rate limiting
  (`fatigueTime`, `isSchemeAndFatigueMatch`) — same URL shown recently is auto-allowed

### 2. FCNetChecker — Network Risk Assessment

Evaluates HTTP requests against risk rules:
```java
FCNetCheckResult {
    boolean intercept;   // Block the request
    boolean interrupt;   // Interrupt flow
    String resCode;      // Response code (419/420)
    String hitRuleId;    // Which rule triggered
}
```

HTTP 419/420 = Server-side risk detection triggered. Client handles via SecurityGuard
command 70504 (risk control result report).

### 3. FCRuleCenter — Rule Engine

Server-pushed rules evaluated client-side:
- `AppFetchRuleResp` — Rules fetched from server
- `ClientRule` — Individual rule definitions
- `ClientFeature` / `ClientFeatureConfig` — Feature flags for risk scenarios
- `Scene` / `SceneConfig` / `SceneResult` — Scene-based rule matching
- Rules stored in SharedPreferences, evaluated by `FCRuleMatchType`

### 4. FCBlueShieldHelper — SecurityGuard Integration

FlowCustoms uses SecurityGuard's BlueShield for:
- Device integrity verification before rule evaluation
- Encrypted rule storage
- Risk signal collection

### 5. Fatigue Control (Rate Limiting)

```
FCFatigueModel — Stores last-shown timestamps
FCFatigueHelper — Manages fatigue state
SchemeLauncher uses: fatigue_bundleid_scheme, scheme_bundleId_verify_fatigue
```

If a scheme URL was shown/verified recently, subsequent verifications may be
auto-approved (fatigue bypass). This is a **timing-based bypass vector**.

## Security Findings

### Finding 1: allowLaunch() Decompilation Failure
`SchemeLauncher.allowLaunch(Uri)` — the core security check — FAILED jadx decompilation
(line 561: "Method not decompiled"). This suggests complex control flow (possibly
intentional obfuscation). The actual security logic is hidden.

### Finding 2: Fatigue-Based Bypass
If a URL scheme was recently verified, the fatigue mechanism may auto-allow it
without re-checking. An attacker could:
1. First trigger a legitimate scheme verification
2. Quickly follow with a malicious scheme that matches the same fatigue key
3. The second verification may be auto-approved

### Finding 3: Client-Side Rule Engine
All risk rules are evaluated **client-side**. With root access + Frida, rules can be:
- Dumped from SharedPreferences
- Modified in memory
- Bypassed by hooking FCRuleCenter

### Finding 4: outOfControlSwitch
`getOutofControlSwitchFromSp()` — A SharedPreferences flag that, when set,
bypasses scheme verification for "native landing pages". The flag name
"outOfControl" suggests it's an emergency bypass mechanism.

### Finding 5: PatchProxy in Risk Control
`FCConfigCenter` has PatchProxy fields — the vendor can remotely modify risk
control behavior via hot-patching, consistent with the pattern found across
all security components.

## Relationship to Previous CVEs

- **CVE-1 (DeepLink bypass)**: FlowCustoms is the defense layer being bypassed
- **CVE-6 (Whitelist bypass)**: `ds.alipay.com` redirect bypasses FlowCustoms verification
- **SchemeLauncher.verify()**: Contains the 3 bypass paths documented in CVE-1
