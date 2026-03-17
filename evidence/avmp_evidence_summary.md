# AVMP Signature Capture — Evidence Summary

> Date: 2026-03-17
> Device: emulator-5554 (Android 15, x86_64)
> APK: Alipay v10.8.30.8000

## Independently Verified (Raw Evidence)

### VM Creation (doCommand 70201)
```
[2026-03-17T10:03:11Z] VM_ID=-5476376653615126281
[2026-03-17T10:05:22Z] VM_ID=-5476376653615126281  (reproduced)
[2026-03-17T10:08:17Z] VM_ID=-5476376653615126281  (reproduced)
[2026-03-17T10:09:55Z] VM_ID=-5476376653615126281  (reproduced)
```

Method: `JNICLibrary.doCommandNative(70201, ["mwua", "sgcipher"])` via stnel ClassFactory
Evidence files: `evidence/avmp_capture_*.log`

### JS-JNI Serialization Limitation
```
SIGN_ERROR=doCommandNative(): argument types do not match any of:
	.overload('int', '[Ljava.lang.Object;')
```
When passing `byte[].class` (java.lang.Class object) as element in Object[] array,
stnel's QuickJS-JNI bridge cannot serialize Class objects → "expected a pointer" error.

### C Gadget Solution
Source: `tools/sg_avmp_gadget.c` (132 lines)
Binary: `tools/sg_avmp_gadget.so` (8200 bytes, ARM64)
Build: `$NDK/.../aarch64-linux-android34-clang -shared -fPIC -o sg_avmp_gadget.so sg_avmp_gadget.c`

The gadget bypasses JS-JNI by operating at pure C/JNI level:
- `(*env)->FindClass(env, "[B")` gets byte[].class natively
- `(*env)->SetObjectArrayElement(env, outerArgs, 2, byteArrayCls)` passes it directly
- No JS serialization involved

## Session-Observed (Original Capture, Raw Output Not Preserved)

### AVMP Signing (doCommand 70202)
During initial dynamic analysis session (2026-03-17 ~16:15 local):
- C gadget loaded via `stnel Module.load("/data/local/tmp/sg_avmp_gadget.so")`
- `doCommand(70202, [vmId, "sign", byte[].class, innerArgs])` executed successfully
- Returned byte array of approximately 336 bytes
- First 32 bytes decoded as ASCII: `aW9d_ZrfBq1c7ElAyZOsBSHkhZLQV6i5`
- Format consistent with Base64-encoded AVMP signature token

**Note**: The exact byte count (336) and Base64 content were observed in the terminal
session but the raw output was not redirected to a persistent file at the time of
capture. The C gadget source code and binary are preserved for independent verification.

## Reproducibility

To verify independently:
1. Root Android device/emulator with Alipay installed
2. Compile gadget: `$NDK_CC -shared -fPIC -o sg_avmp_gadget.so sg_avmp_gadget.c`
3. Push: `adb push sg_avmp_gadget.so /data/local/tmp/`
4. Inject via stnel/frida: `Module.load("/data/local/tmp/sg_avmp_gadget.so")`
5. Call `create_avmp_vm(env, router, "mwua", "sgcipher")` → returns VM ID
6. Call `invoke_avmp_sign(env, router, vmId, inputBytes)` → returns signed token
