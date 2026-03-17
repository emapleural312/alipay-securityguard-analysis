# DexAOP Bytecode-Level Interception Map

> Source: com.alipay.dexaop (1606 Java files)
> Invokers: 976 | Stubs: 180 | Unique API categories: 208
> Analysis: Static decompilation of Alipay v10.8.30.8000

## Overview

DexAOP is a bytecode-level Aspect-Oriented Programming framework embedded in Alipay
that intercepts Android API calls at the class level. Unlike SecurityGuard (which
operates at the native JNI level), DexAOP modifies Java bytecode to insert
interception proxies around system API calls.

## Interception Statistics

| Category | APIs Intercepted | Privacy Impact |
|----------|-----------------|----------------|
| **Bluetooth** | 17 | HIGH — device proximity, peripherals |
| **Telephony** | 17 | HIGH — call state, SIM info, IMEI |
| **Network/HTTP** | 15 | HIGH — all network traffic |
| **Contacts** | 12 | CRITICAL — full address book |
| **Sensors** | 10 | HIGH — biometric, accelerometer, gyro |
| **Audio/Recording** | 9 | CRITICAL — microphone access |
| **Storage/Files** | 8 | HIGH — file system access |
| **WiFi** | 5 | HIGH — SSID, BSSID, scan results |
| **Camera** | 5 | CRITICAL — photo/video capture |
| **Clipboard** | 4 | HIGH — paste data |
| **Location/GPS** | 3 | CRITICAL — geographic tracking |
| **NFC** | 6 | MEDIUM — contactless payments |
| **Crypto** | 3 | HIGH — cipher, signature, MAC |
| **WebView** | 2 | MEDIUM — cookies, settings |
| **Other** | 92 | Various |
| **TOTAL** | **208** | |

## Critical Privacy Interceptions

### 1. Camera (5 interception points)
```
ANDROID_HARDWARE_CAMERA                    — Legacy camera API
ANDROID_HARDWARE_CAMERA_PREVIEWCALLBACK    — Camera preview frames
ANDROID_HARDWARE_CAMERA2_CAMERADEVICE      — Camera2 API device
ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK — Camera state
ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER     — Camera enumeration
```

### 2. Audio/Recording (9 interception points)
```
ANDROID_MEDIA_AUDIORECORD                  — Raw audio recording
ANDROID_MEDIA_AUDIORECORD_BUILDER          — Audio recorder creation
ANDROID_MEDIA_MEDIARECORDER                — Media recording
ANDROID_MEDIA_AUDIOMANAGER                 — Audio routing/volume
ANDROID_MEDIA_RINGTONE                     — Ringtone playback
ANDROID_MEDIA_RINGTONEMANAGER              — Ringtone management
ANDROID_MEDIA_IMAGEREADER_ONIMAGEAVAILABLELISTENER — Image capture
ANDROID_NET_SIP_SIPAUDIOCALL              — VoIP audio
```

### 3. Contacts (12 interception points)
```
ANDROID_PROVIDER_CONTACTS_CONTACTMETHODS
ANDROID_PROVIDER_CONTACTS_PEOPLE
ANDROID_PROVIDER_CONTACTS_PHONES
ANDROID_PROVIDER_CONTACTS_SETTINGS
ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS
ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY
ANDROID_PROVIDER_CONTACTSCONTRACT_GROUPS
ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS
ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE
ANDROID_PROVIDER_CONTACTSCONTRACT_QUICKCONTACT
ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS
ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCSTATE
```

### 4. Bluetooth (17 interception points)
Covers BLE, GATT, A2DP, Headset, Health, HearingAid, HID, Audio, Scanner,
Advertiser — comprehensive Bluetooth device tracking.

### 5. Telephony (17 interception points)
Covers call state, SIM info, IMS, cell location, barring info, forwarding,
message waiting, emergency numbers, SMS management.

### 6. Biometric/Fingerprint (6 interception points)
```
ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT
ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONCALLBACK
ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER
ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_AUTHENTICATIONCALLBACK
ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_AUTHENTICATIONRESULT
ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT
```

### 7. Cryptographic Operations (3 interception points)
```
JAVA_SECURITY_SIGNATURE                    — Digital signatures
JAVAX_CRYPTO_CIPHER                        — Encryption/decryption
JAVAX_CRYPTO_MAC                           — Message authentication
```

### 8. NFC (6 interception points)
```
ANDROID_NFC_CARDEMULATION_HOSTAPDUSERVICE  — HCE card emulation
ANDROID_NFC_NFCADAPTER                     — NFC adapter
ANDROID_NFC_TECH_ISODEP                    — ISO-DEP (contactless cards)
ANDROID_NFC_TECH_NDEF                      — NDEF messages
ANDROID_NFC_TECH_NFCF                      — NFC-F (FeliCa)
ANDROID_NFC_TECH_NFCV                      — NFC-V (ISO 15693)
```

## Architecture

```
App Code → DexAOP Proxy Stub → Interceptor Chain → Original API
                                    ↓
                              Power Collector
                                    ↓
                              Report/Monitor
```

- **Invokers** (976): Generated proxy code that replaces original method calls
- **Stubs** (180): Callback/listener proxies (e.g., `OnClickListener_onClick_stub`)
- **Power module**: Centralized interception policy and data collection
- **Monitor chain**: Multi-stage interceptor pipeline with priority ordering

## Security & Privacy Implications

1. **Total API surveillance**: 208 API categories intercepted = comprehensive monitoring of
   all device capabilities (camera, mic, location, contacts, bluetooth, NFC, crypto)

2. **Bytecode-level means invisible**: Interceptions happen at compile time — no runtime
   hooks to detect, no library injection required

3. **Beyond payment security scope**: Intercepting camera preview frames, ringtone managers,
   NFC card emulation, and contact sync state goes far beyond what's needed for payment fraud prevention

4. **Crypto interception risk**: Intercepting `Cipher`, `Signature`, and `MAC` operations
   means the app can observe/modify ANY cryptographic operation within its process

5. **Combined with SecurityGuard**: DexAOP (208 Java APIs) + SecurityGuard (80 native commands)
   + Behavior Monitor (22 events) = comprehensive multi-layer surveillance architecture
