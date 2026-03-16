# SecurityGuard Bypass Techniques & Countermeasures

## 1. Self-Modifying ELF Bypass (libsgmainso)

### Problem
`libsgmainso-6.6.230507.so` has no exports, no imports, corrupted section headers.
Code segment is encrypted at rest and decrypted during `JNI_OnLoad`.

### Bypass Approach
```bash
# Frida script to dump decrypted SO after JNI_OnLoad
frida -U -f <package> -l dump_sg.js

# dump_sg.js:
Java.perform(function() {
    var modules = Process.enumerateModules();
    modules.forEach(function(m) {
        if (m.name.indexOf("sgmainso") !== -1) {
            console.log("Found: " + m.name + " at " + m.base + " size: " + m.size);
            // Wait for JNI_OnLoad to complete (code decryption)
            setTimeout(function() {
                var buf = Memory.readByteArray(m.base, m.size);
                var f = new File("/data/local/tmp/sgmain_dumped.so", "wb");
                f.write(buf);
                f.close();
                console.log("Dumped " + m.size + " bytes");
            }, 3000);
        }
    });
});
```

### Alternative (No Frida)
- Use `/proc/<pid>/maps` to find loaded SO base address
- Read `/proc/<pid>/mem` at that offset after app fully initialized
- Requires root access

---

## 2. AVMP Bytecode VM Bypass

### Problem
Signing algorithm runs inside LiteVM bytecode interpreter.
The AVMP bytecode is opaque — not ARM, not Java, custom instruction set.

### Bypass: Hook Input/Output
```javascript
// Hook doCommand(70202) — invokeAVMP
Java.perform(function() {
    var JNICLibrary = Java.use("com.taobao.wireless.security.adapter.JNICLibrary");
    JNICLibrary.doCommandNative.implementation = function(cmdId) {
        var args = Array.prototype.slice.call(arguments, 1);
        if (cmdId === 70202 || cmdId === 12504) {
            console.log("[AVMP] Command: " + cmdId);
            console.log("[AVMP] Input: " + JSON.stringify(args));
        }
        var result = this.doCommandNative.apply(this, arguments);
        if (cmdId === 70202 || cmdId === 12504) {
            console.log("[AVMP] Output: " + result);
        }
        return result;
    };
});
```

### Bypass: Replay Captured Tokens
Once input→output pairs are captured, build a lookup table.
The signing input is deterministic: `utdid & uid & MD5(body) & timestamp & ...`

### Bypass: Reimplement from Captured Pairs
With enough captured pairs, use differential analysis to identify the HMAC/hash algorithm.
Known: Output format is Base64-like, 128-256 bits.

---

## 3. Certificate Pinning Bypass (Already Absent)

### Current State
**No pinning exists.** `EmptyX509TrustManagerWrapper` accepts all certs.
`X509TrustManagerWrapper` only validates against system CA store.

### MITM Setup
```bash
# 1. Install proxy CA on device
adb push proxy-ca.crt /sdcard/
# Settings → Security → Install certificate

# 2. Start mitmproxy
mitmproxy -p 8080 --mode transparent

# 3. Route device traffic through proxy
adb shell settings put global http_proxy <host>:8080
```

### PatchProxy Consideration
If vendor activates `ChangeQuickRedirect` to add pinning:
```javascript
// Force-clear the PatchProxy bypass
Java.perform(function() {
    var cls = Java.use("com.***pay.mobile.common.transport.ssl.X509TrustManagerWrapper");
    var field = cls.class.getDeclaredField("f68249"); // ChangeQuickRedirect
    field.setAccessible(true);
    field.set(null, null); // Disable any hot-patch
});
```

---

## 4. Anti-Tampering (APSE/BlueShield) Bypass

### Detection Methods (from libAPSE analysis)
1. **myhook inline hooks** — patches function prologues
2. **mprotect** — monitors memory page permissions
3. **ptrace** — self-ptrace to block debugger attach
4. **/proc/self/maps scanning** — detects injected libraries (Frida, Xposed)
5. **d4checkup** — device integrity checking
6. **MalDetect JNI callback** — reports detected threats

### Bypass: Delayed Injection
```bash
# Start app normally, wait for APSE init to complete, THEN inject
frida -U --no-pause -p <pid> -l script.js
# Use --no-pause to avoid ptrace detection
```

### Bypass: Rename Frida Libraries
```bash
# APSE scans for "frida", "xposed", "magisk" in /proc/maps
# Rename frida-agent to avoid string detection
cp frida-agent-arm64.so libhelper-arm64.so
```

### Bypass: Memory Scan Evasion
```javascript
// Patch /proc/self/maps reading to hide injected modules
Interceptor.attach(Module.findExportByName("libc.so", "fopen"), {
    onEnter: function(args) {
        var path = Memory.readUtf8String(args[0]);
        if (path && path.indexOf("/proc/") !== -1 && path.indexOf("/maps") !== -1) {
            this.isMaps = true;
        }
    },
    onLeave: function(retval) {
        if (this.isMaps) {
            // Return modified maps without Frida entries
        }
    }
});
```

---

## 5. SharedPreferences Key Extraction

### Problem
`StaticKeyEncryptComponent` stores encrypted keys in `SharedPreferences("StaticKey")`.
Keys are Base64-encoded encrypted blobs.

### Extraction
```bash
# On rooted device:
adb shell cat /data/data/<package>/shared_prefs/StaticKey.xml

# Or via backup:
adb backup -f backup.ab <package>
java -jar abe.jar unpack backup.ab backup.tar
tar xf backup.tar
```

### Decryption Attempt
Keys are encrypted via `doCommand(10605, [704, keyName, rawKey])`.
The encryption key is derived from device-specific data (UMID + appKey).
Without the device's UMID, offline decryption is not feasible.

---

## 6. UCB Module Extraction

### UCB Format
SecurityGuard modules are stored as modified ZIP/JAR files.
The `.ucb.so` files are tiny stubs (80-96 bytes) that point to the real module.

### Extraction Process
```bash
# 1. Find SG module ZIPs in APK assets
unzip -l app.apk | grep -E "libsg|SecurityGuard"

# 2. Extract and unzip
unzip app.apk "assets/libsgmain.zip" -d /tmp/
unzip /tmp/assets/libsgmain.zip -d /tmp/sgmain/

# 3. Decompile the inner classes.dex
jadx -d /tmp/sgmain_java --show-bad-code /tmp/sgmain/classes.dex

# 4. The inner .so is the real native library
ls /tmp/sgmain/lib/arm64-v8a/  # libsgmainso-6.6.230507.so
```

### Config in Fake JPG
`PkgValidUtils.genPkgWithCfgJpg()` hides config in `res/drawable/abc_wb_textfield_exf.jpg`.
```bash
# Extract the hidden config
unzip sgmain.zip "res/drawable/abc_wb_textfield_exf.jpg" -d /tmp/
cat /tmp/res/drawable/abc_wb_textfield_exf.jpg  # It's actually JSON/text, not an image
```

---

## 7. Behavior Monitoring Evasion

### Monitored Events (22 types)
SecurityGuard registers BroadcastReceivers for:
- Screen on/off, foreground/background
- Screenshot/screen recording detection
- Bluetooth state changes
- Phone state, headset plug
- Clipboard changes, network changes
- All Activity lifecycle events

### Remote Kill Switch
Monitoring is controlled by Orange config key `securityguard_orange_namespace/132`.
Value `"1"` = enabled, `"0"` = disabled.

### Evasion
```javascript
// Block broadcast registration
Java.perform(function() {
    var Context = Java.use("android.content.Context");
    Context.registerReceiver.overload('android.content.BroadcastReceiver',
        'android.content.IntentFilter').implementation = function(receiver, filter) {
        var className = receiver.$className;
        if (className.indexOf("security") !== -1 || className.indexOf("C0016") !== -1) {
            console.log("[BLOCKED] SG BroadcastReceiver: " + className);
            return null;
        }
        return this.registerReceiver(receiver, filter);
    };
});
```

---

## 8. View Tree Hash Detection Bypass

### What It Does
`LifeCycle.isViewChanged()` computes a hash of all View tree elements.
Detects if UI was modified (overlay attacks, accessibility injection).

### AccessibilityDelegate Injection
SG injects `AccessibilityDelegate` into all clickable views (Button, EditText).
Reports `performAccessibilityAction` events to native via `doCommand(20112)`.

### Bypass
```javascript
// Prevent AccessibilityDelegate injection
Java.perform(function() {
    var View = Java.use("android.view.View");
    View.setAccessibilityDelegate.implementation = function(delegate) {
        if (delegate && delegate.$className.indexOf("LifeCycle") !== -1) {
            console.log("[BLOCKED] SG AccessibilityDelegate injection");
            return;
        }
        this.setAccessibilityDelegate(delegate);
    };
});
```

---

## 9. Dynamic Proxy Interception Bypass

### What It Does
`InvocationHandlerAdapter` creates Java dynamic proxies.
ALL method calls are forwarded to native via `doCommand(20113)`.
Native layer can inspect and modify return values.

### Bypass
```javascript
// Hook doCommand(20113) to see what's being intercepted
Java.perform(function() {
    var JNICLibrary = Java.use("com.taobao.wireless.security.adapter.JNICLibrary");
    var orig = JNICLibrary.doCommandNative;
    JNICLibrary.doCommandNative.implementation = function(cmdId) {
        if (cmdId === 20113) {
            var args = Array.prototype.slice.call(arguments, 1);
            console.log("[PROXY] Method intercepted: " + args[0][2]); // Method object
            // Return original result without native inspection
        }
        return orig.apply(this, arguments);
    };
});
```

---

## 10. Complete doCommandNative Hooking

### Master Hook
Intercept ALL SecurityGuard native commands:
```javascript
Java.perform(function() {
    var JNICLibrary = Java.use("com.taobao.wireless.security.adapter.JNICLibrary");
    JNICLibrary.doCommandNative.implementation = function(cmdId) {
        var args = Array.prototype.slice.call(arguments);
        var ts = new Date().toISOString();
        console.log("[SG " + ts + "] CMD:" + cmdId + " args_count:" + (args.length-1));

        var result = this.doCommandNative.apply(this, arguments);

        // Log specific interesting commands
        var interesting = {
            10101: "INIT", 10401: "SIGN", 10601: "ENCRYPT",
            10605: "KEY_ENCRYPT", 12504: "AVMP_EXEC",
            22302: "GET_TOKEN", 60401: "SAFE_TOKEN",
            70202: "AVMP_INVOKE", 70504: "RISK_REPORT"
        };
        if (interesting[cmdId]) {
            console.log("  [" + interesting[cmdId] + "] Result: " + result);
        }
        return result;
    };
});
```

This single hook captures the entire SecurityGuard operation flow.
