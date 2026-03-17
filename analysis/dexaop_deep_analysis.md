# DexAOP Deep Analysis — Method-Level Interception Map

> Total: 976 invoker files, 180 stubs, 208 API categories
> This document details the EXACT methods intercepted per category.

## Top Intercepted APIs by Method Count

| API | Methods | Concern Level |
|-----|---------|--------------|
| **TelephonyManager** | 54 | CRITICAL — IMEI, SIM, cell, signal |
| **Context** | 43 | HIGH — getSystemService, startActivity, SharedPrefs |
| **LocationManager** | 42 | CRITICAL — ALL GPS methods |
| **BluetoothAdapter** | 26 | HIGH — device scanning, bonding |
| **Activity** | 26 | MEDIUM — lifecycle monitoring |
| **Camera** (legacy) | 24 | CRITICAL — photo, video, face detect |
| **Window.Callback** | 23 | MEDIUM — UI event interception |
| **BluetoothDevice** | 21 | HIGH — device enumeration |
| **WifiManager** | 20 | HIGH — SSID, scan, network state |
| **BluetoothGATT** | 20 | HIGH — BLE characteristics |
| **TelecomManager** | 16 | HIGH — call management |
| **Cipher** | 15 | CRITICAL — ALL crypto operations |
| **SensorManager** | 14 | HIGH — accelerometer, gyro, proximity |
| **AccountManager** | 12 | HIGH — account enumeration, tokens |
| **ContentResolver** | 12 | HIGH — database queries (contacts, SMS) |
| **MediaRecorder** | 10 | CRITICAL — audio/video recording |

## CRITICAL: Complete Camera Interception (24+9 methods)

Every Camera API call is intercepted:
```
open() × 2 overloads         — Camera initialization
takePicture() × 2             — Photo capture
startPreview() / stopPreview() — Video preview
startFaceDetection()          — FACE DETECTION
stopFaceDetection()           — Face detection stop
setPreviewCallback()          — Preview frame access
onPreviewFrame() [stub]       — RAW FRAME DATA INTERCEPT
setPreviewDisplay()           — Preview surface
setPreviewTexture()           — Preview texture
setPreviewCallbackWithBuffer() — Buffered frame access
getParameters()               — Camera configuration
setDisplayOrientation()       — Rotation
enableShutterSound()          — Shutter mute detection
getNumberOfCameras()          — Camera enumeration
lock() / unlock()             — Camera lock state
reconnect() / release()       — Camera lifecycle

Camera2 API:
openCamera() × 2              — Camera2 initialization
createCaptureRequest()        — Capture configuration
getId()                       — Camera identification
close()                       — Camera2 close
onOpened() [stub]             — Camera ready callback
onClosed() [stub]             — Camera closed callback
```

**Privacy impact**: The app knows WHEN the camera is opened, WHAT it sees (preview frames),
and WHEN photos are taken, including face detection events.

## CRITICAL: Runtime.exec Interception (6 overloads + loadLibrary)

```
Runtime.exec() × 6 overloads  — ALL shell command execution intercepted
Runtime.loadLibrary()          — Native library loading monitored
Runtime.load()                 — Direct native loading monitored
Process.myPid()                — Process ID access
Process.sendSignal()           — Process signaling
ActivityManager.getRunningAppProcesses() — Process enumeration
```

**Security impact**: The app monitors ALL `Runtime.exec()` calls — it can see any shell
command executed within its process, including by third-party SDKs.

## CRITICAL: Cipher/Crypto Interception (34 methods)

```
Cipher.doFinal() × 7 overloads   — ALL encryption/decryption output
Cipher.update() × 5 overloads    — ALL intermediate crypto data
Cipher.updateAAD() × 3 overloads — Authenticated encryption metadata
Signature.sign() × 2             — ALL digital signatures
Signature.verify() × 2           — ALL signature verification
Signature.update() × 4           — ALL signature input data
MAC.doFinal() × 3                — ALL MAC output
MAC.update() × 4                 — ALL MAC input data
FingerprintManager.CryptoObject.getCipher()    — Biometric crypto
FingerprintManager.CryptoObject.getSignature() — Biometric signatures
FingerprintManager.CryptoObject.getMac()       — Biometric MAC
WifiInfo.getMacAddress()          — WiFi MAC address
```

**Security impact**: The app can observe/intercept ALL cryptographic operations
within its process. This includes encryption keys, plaintext, ciphertext,
signatures, and MACs. Any third-party SDK's crypto is transparent to Alipay.

## CRITICAL: LocationManager (42 methods)

All location-related methods intercepted, including:
- `requestLocationUpdates()` (all overloads)
- `getLastKnownLocation()`
- `getBestProvider()`
- `addProximityAlert()` / `removeProximityAlert()`
- `getCurrentLocation()` (Android 11+)
- `isLocationEnabled()` / `isProviderEnabled()`
- `registerGnssStatusCallback()`

## HIGH: TelephonyManager (54 methods)

Comprehensive telephony monitoring:
- IMEI, MEID, serial number access
- SIM info (ICCID, IMSI, operator)
- Cell location, neighboring cells
- Phone state, call state
- Signal strength, network type
- Data state, roaming state
- Voicemail, MMS, SMS capabilities

## HIGH: NFC (16 methods)

```
IsoDep.transceive()              — ISO-DEP APDU exchange
NfcF.transceive()                — FeliCa command exchange
NfcV.transceive()                — NFC-V command exchange
Ndef.writeNdefMessage()          — NDEF write
NfcAdapter.enableForegroundDispatch()  — NFC priority
NfcAdapter.disableForegroundDispatch() — NFC release
NfcAdapter.disableReaderMode()   — Reader mode
HostApduService.sendResponseApdu() — HCE APDU response
IsoDep.get() / NfcF.get() / Ndef.get() — Tech initialization
IsoDep.getHistoricalBytes()      — Card historical data
IsoDep.setTimeout() / getTimeout() — Communication timing
NfcF.getSystemCode()             — FeliCa system code
NfcF.getManufacturer()           — FeliCa manufacturer
```

**Payment security impact**: NFC transaction APDUs (ISO-DEP transceive) are intercepted.
This means contactless payment data can be observed by the interception layer.

## Power Module — Resource Usage Surveillance

The DexAOP `power` module goes beyond API interception:
```
CPU: CpuUsageCollector, CpuBusyMonitor, CpuUsageAnalyser
Network: NetworkUsageCollector (API 23+), HostNetworkUsage
Battery: BatteryMonitor, BatteryHelper, BatteryInfo
Sensors: SensorEventInterceptor, SensorRegisterInterceptor
WakeLock: WakelockAcquireInterceptor, WakelockReleaseInterceptor
Alarm: AlarmSetExact/Repeating/InexactRepeating interceptors
Screen: ScreenUtils
```

## Beyond Payment Security Scope

The following interceptions have NO reasonable justification for a payment app:

| Interception | Justification for payment? | Actual purpose |
|-------------|--------------------------|----------------|
| Camera face detection | NO | User behavior profiling |
| All Cipher operations | NO | Third-party SDK crypto monitoring |
| NFC APDU transceive | MAYBE (own payments) | Cross-app NFC monitoring |
| Runtime.exec() | NO | Shell command surveillance |
| Contacts read/write | NO | Social graph mapping |
| Bluetooth scanning | NO | Physical proximity tracking |
| Sensor events | NO | Motion/orientation profiling |
| WiFi MAC address | NO | Device tracking |
| SharedPreferences.getAll() | NO | Cross-SDK data access |
| BitmapFactory (11 methods) | NO | Image processing monitoring |
