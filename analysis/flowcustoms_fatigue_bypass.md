# FlowCustoms Fatigue Bypass — Deep Analysis

> Source: SchemeLauncher.java (1500+ lines), FCFatigueHelper.java
> Key method: isSchemeAndFatigueMatch() @ line 1080

## Fatigue Mechanism Overview

The "fatigue" system is a time-based URL scheme verification cooldown:

```
User clicks scheme URL → SchemeLauncher.verify()
  → isBundleIdInFatigueList(bundleId, scheme)
    → initRuleModelList(getFatigueListString(), 0)  [server-pushed rules]
    → For each rule: isSchemeAndFatigueMatch(bundleId, scheme, regexList, fatigueTime)
```

## Critical Code: isSchemeAndFatigueMatch()

```java
// SchemeLauncher.java:1080
public boolean isSchemeAndFatigueMatch(String bundleId, String scheme,
                                        List<String> regexList, long fatigueTime) {
    for (String regex : regexList) {
        String decoded = URLDecoder.decode(regex, "UTF-8");
        if (scheme.matches(decoded)) {
            // Read last verification timestamp from SharedPreferences
            long lastShowTime = SharedPreferences("scheme_bundleId_verify_fatigue")
                .getLong(bundleId + "_" + decoded, 0L);

            // KEY LOGIC: if elapsed time > fatigueTime → ALLOW
            if (System.currentTimeMillis() - lastShowTime > fatigueTime) {
                return true;  // fatigue expired → AUTO-ALLOW
            }
        }
    }
    return false;
}
```

## Bypass Vectors

### Vector 1: Default fatigueTime = -1 (Always Allow)

```java
// SchemeLauncher.java:410
this.fatigueTime = -1L;  // DEFAULT VALUE
```

When `fatigueTime = -1`:
```
System.currentTimeMillis() - lastShowTime > -1
→ Always TRUE (any positive number > -1)
→ ALL matching URLs auto-allowed
```

**Any server-configured rule with fatigueTime unset or set to -1 effectively
disables verification for matching URL patterns.**

### Vector 2: SharedPreferences Manipulation

The fatigue state is stored in SharedPreferences:
```
Name: "scheme_bundleId_verify_fatigue"
Key:  bundleId + "_" + regex
Value: timestamp (long)
```

With root access, an attacker can:
1. Clear all fatigue timestamps → reset all cooldowns
2. Set timestamps to 0 → all fatigue checks pass (time > fatigueTime)
3. Modify the fatigue rule list itself

### Vector 3: allowLaunch() is Opaque

```java
// SchemeLauncher.java:561
public int allowLaunch(android.net.Uri r11) {
    // Method dump skipped, instructions count: 342
    throw new UnsupportedOperationException(
        "Method not decompiled: SchemeLauncher.allowLaunch(android.net.Uri):int");
}
```

The CORE security check (`allowLaunch`) **failed JADX decompilation**
(342 instructions, complex control flow). This means:
- The actual URL validation logic cannot be statically audited
- It may contain intentional obfuscation
- The 3 bypass paths in `verify()` skip `allowLaunch()` entirely

### Vector 4: BUNDLE_DEFAULT_ALL Wildcard

```java
if (ruleModel.bundleIdMap.containsKey(BUNDLE_DEFAULT_ALL)) {
    if (isSchemeAndFatigueMatch(bundleId, scheme, ruleModel.regList, fatigueTime)) {
        return true;  // ANY bundleId matches
    }
}
```

Rules with `BUNDLE_DEFAULT_ALL` key apply to ALL bundle IDs, creating a
universal bypass for matching URL patterns.

### Vector 5: Regex-Based Matching (Overly Broad Patterns)

```java
if (scheme.matches(decoded)) {  // Java regex match
```

If server-pushed regex patterns are too broad (e.g., `.*`, `https://.*`),
they could match legitimate attack URLs.

## Fatigue Configuration Source

```
fatigueListString = getStringFromSp(FATIGUE_BUNDLEID_SCHEME)
```

The fatigue rules come from SharedPreferences key `"fatigue_bundleid_scheme"`,
which is populated by server-pushed configuration. This means:
- The vendor controls which URLs bypass verification
- Server misconfiguration could open bypass paths
- The rules can change without app update

## Behavioral Analytics

When fatigue triggers, the app logs to analytics:
```java
// addBehavorWhenHitFatigue
behavor.setSeedID("a248.b6016.c19574.d83102");
behavor.addExtParam("scheme_url", url);
behavor.addExtParam("bundleId", bundleId);
```

This means EVERY URL that triggers the fatigue bypass is tracked and reported
to the server, including the full scheme URL and source bundle ID.

## Circuit Breaker (FCFatigueHelper)

```java
CONFIG_KEY_ENABLE_STARTAPP_CIRCUIT_BREAKER = "fc_enable_startapp_circuit_breaker"
CONFIG_KEY_CIRCUIT_BREAKER_CONFIG = "fc_circuit_breaker_config"
```

A separate "circuit breaker" mechanism exists in `FCFatigueHelper` for `startApp`
operations. When too many startApp calls occur, the circuit breaker may
trigger — but this is also server-configurable and can be disabled.

## Relationship to CVE-1 (DeepLink Bypass)

The fatigue mechanism adds another dimension to the DeepLink bypass chain:
```
Attacker URL → ds.alipay.com redirect (CVE-6)
  → SchemeLauncher.verify()
    → isUriMatchInnerBundleId() [Bypass 1]
    → isUriMatchNewInnerRegEx() [Bypass 2]
    → isBundleIdInFatigueList() [Bypass 4 — fatigue]
    → isNativeLandingPage() [Bypass 3]
    → allowLaunch() [OPAQUE — cannot audit]
```

The fatigue bypass is the **4th bypass path** not previously documented.
Combined with the 3 known bypasses, there are now **4 confirmed bypass paths**
in SchemeLauncher.verify().
