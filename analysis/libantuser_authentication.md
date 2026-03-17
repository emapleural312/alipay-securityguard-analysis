# libantuser.so — Authentication & Session Management Analysis

> Binary: 1.8MB ARM64 | Exports: 359 functions | Imports: 191
> Role: Core user authentication, session management, and encrypted credential storage

## Function Categories

| Category | Count | Key Functions |
|----------|-------|---------------|
| Events/Monitoring | 76 | notifyEvent, notifyConfigChange, remoteLog |
| RPC/Network | 46 | rpc_execute, rpc_request_set_*, sync_context |
| Storage/Repository | 37 | repo_put/get/copy, encrypted_base64 |
| Crypto | 18 | crypto_repo_make/clear/delete, encrypted_base64 |
| Login/Auth | 9 | login_token_copy, is_login_state, login_id_get |
| JNI Bridges | 8 | AntUserApp_*, AntUserEvent_*, AntUserLog_* |
| Value/Type System | ~165 | antuser_value_* (generic data manipulation) |

## Authentication Architecture

### Login Modes Identified
```
directlogin              — Direct login (bypass normal flow?)
faceid                   — Face ID biometric authentication
BiologyLoginService      — Biometric login service
biologyAvailableType     — Biometric type selection
biologyUnLockFail        — Biometric unlock failure
carrierLoginId           — Carrier (SIM-based) login
carrierLoginToken        — Carrier authentication token
carrierSkyGateRoute      — Carrier routing via SkyGate
verifyOverseaMobile      — Overseas phone verification
ALU_OVERSEA_CARRIER_ENABLE — Overseas carrier toggle
antuser_huawei_login_disabled — Huawei-specific login disable
CFG_ALU_BIOLOGY_LOGIN_ROLLBACK — Biometric login rollback config
```

### Session Management
```
currentSessionId         — JNI: get active session ID
createSessionId          — Create new session
kAntUserSessionStateVersionKey — Session state versioning
appSession_behavior_rb   — Session behavior (ring buffer?)
UC-SESSION-20251229-01   — Session protocol version (dated Dec 2025)
session_rpc_forward_config — RPC session forwarding
invalid session intent   — Session validation error
appSession, disabled     — Session disable capability
```

### Token Architecture
```
login_token              — Primary login token
registerToken            — Registration token
umidTokenBS              — UMID token for BlueShield
AlipayLoginUmidTokenGetFromSG — UMID token from SecurityGuard
carrierLoginToken        — Carrier-specific token
withcarriertoken         — Carrier token attachment
```

## Encrypted Storage (BlueShield Integration)

libantuser integrates with SecurityGuard's BlueShield for credential encryption:

```
antuser_repo_put_encrypted_base64     — Store encrypted data
antuser_repo_is_encrypted_base64      — Check encryption status
antuser_repo_copy_encrypted_base64    — Read encrypted data
antuser_crypto_repo_make              — Create encrypted repository
antuser_crypto_repo_make_location     — Location-specific encryption
antuser_crypto_repo_make_default      — Default encrypted repo
antuser_crypto_repo_clear             — Clear encrypted data
antuser_crypto_repo_delete            — Delete encrypted repo

Decryption via BlueShield:
staticDecryptByBS                     — Static decrypt via BlueShield
dynamicDecryptByBS                    — Dynamic decrypt via BlueShield
staticDecryptBase64ByBS               — Base64 static decrypt
dynamicDecryptBase64StringByBS        — Base64 dynamic decrypt
staticEncryptBase64ByBS               — Base64 static encrypt
staticEncryptBase64StringByBS         — String static encrypt
```

## RPC Facades (Server Endpoints)

| Facade | Purpose |
|--------|---------|
| `UnifyLoginRecommendFacade` | Login method recommendation |
| `RsaKeyFacade` | RSA key exchange |
| `MobileRegFacade` | Mobile device registration |
| `AuthService` | Authentication service |
| `UnifyCustomMdapFacade` | Custom MDAP (Mobile Data Analysis Platform) |
| `SkyGateFacade` | SkyGate unified routing |
| `RpcService` | Base RPC service |

## Security Findings

### 1. BlueShield-Dependent Encryption
All credential encryption routes through SecurityGuard's BlueShield. If BlueShield is
compromised (we've demonstrated AVMP bypass), the encrypted credentials are at risk.

### 2. UMID Token Cross-Reference
`AlipayLoginUmidTokenGetFromSG` — Login tokens are bound to SecurityGuard's UMID
(Unique Mobile ID). Our SecurityGuard analysis shows UMID is a 29-item device
fingerprint — meaning login tokens are device-bound but extractable.

### 3. Direct Login Capability
The `directlogin` string suggests a bypass path for normal authentication flow.
If this can be triggered externally (e.g., via DeepLink), it could enable
authentication bypass.

### 4. Session Disable Feature
`appSession, disabled` — Sessions can be remotely disabled, potentially as a
response to detected anomalies. This confirms vendor has remote session kill capability.

### 5. MD5 Still in Use
`antuser_platform_utils_gen_md5` — MD5 is used for hashing (deprecated, collision-prone).
Not suitable for security-critical operations.

### 6. Carrier Login — SIM-Based Auth
Carrier login allows SIM-based authentication, which is vulnerable to SIM swapping
attacks. The overseas carrier toggle (`ALU_OVERSEA_CARRIER_ENABLE`) suggests this
is configurable by region.
