# sgmain.so Function Identification

## Top 20 Functions — Identity Analysis

| Address | Size | Signature | Identified As |
|---------|------|-----------|--------------|
| 0x001ff46c | 29696B | `byte*(byte*,byte*,long*)` | **JSON/Protobuf Parser** (recursive, data structure builder) |
| 0x00218d78 | 22760B | `undef1*(undef1*,long,ulong*)` | **Data Serializer** (similar recursive pattern) |
| 0x0020efe8 | 18996B | `char*(char*,char*,long*)` | **String Processor** (text manipulation) |
| 0x0021fafc | 15232B | `undef1*(undef1*,undef1*,long*)` | **Data Transformer** |
| 0x00207620 | 8992B | `byte*(byte*,byte*,long*,undef1*)` | **4-param processor** (with extra context) |
| 0x00214144 | 5932B | `byte*(byte*,byte*,ulong*)` | **Binary Processor** |
| 0x0020b264 | 5572B | `byte*(byte*,byte*,long*)` | **Data Processor** |
| 0x0020dbc4 | 4688B | `byte*(byte*,byte*,ulong*)` | **Binary Handler** |
| 0x001589f4 | 4276B | `void(long*,ulong*,uint,long)` | **Command Handler** (uint param=commandId?) |
| 0x001fe3d8 | 3900B | `byte*(byte*,byte*,long*)` | **Data Processor** |
| 0x00155860 | 3888B | `undef4(ulong,long)` | **JNI Bridge** (2 params: JNIEnv*, object?) |
| 0x0020c958 | 3872B | `char*(char*,char*,long*)` | **String Handler** |
| 0x0020a444 | 3396B | `char*(char*,char*,long*)` | **String Handler** |
| 0x0024dae4 | 2792B | `int(long,void*,ulong*,long,ulong,long,ulong,long,ulong)` | **ZIP Unpacker** (0x2014b50 EOCD magic) |
| 0x00150718 | 2732B | `long(long)` | **Plugin Loader** (reads configs, calls child funcs) |
| 0x00152ea0 | 2684B | `int(long,undef8*)` | **Config Reader** |
| 0x00160124 | 2548B | `void(uint,undef4*)` | **Possible Command Dispatcher** (uint=cmdId) |
| 0x00216b68 | 2492B | `char*(char*,char*,long*)` | **String Handler** |
| 0x001ae428 | 2340B | `undef4(long*)` | **String Decryptor Hub** (166 decrypt calls) |
| 0x002175cc | 2276B | `byte*(byte*,byte*,byte*,long*)` | **4-input processor** |

## Key Identified Functions

### FUN_0024dae4 — ZIP Unpacker
- 9 parameters
- Checks for ZIP EOCD marker `0x2014b50`
- Reads file entries (name, compressed/uncompressed size)
- Uses vtable-based I/O: `param_1+8` (read), `param_1+0x30` (seek), `param_1+0x38` (stream)
- Extracts timestamps: year/month/day/hour/minute/second from DOS format
- **Purpose**: Extracts classes.dex and .so from SecurityGuard ZIP modules

### FUN_001ae428 — String Decryptor Hub
- Calls 3 decrypt functions (J2qaFN4xHz, HlupqL3ZAR, pDhsAJkF7h)
- 166 encrypted strings in this function alone
- Lazy decryption with one-time flags (DAT_* & 1)
- **Purpose**: Initializes all string constants for a major subsystem

### FUN_001589f4 — Possible Command Entry
- `void(long*, ulong*, uint, long)` — uint param could be command ID
- References vtable at param_4+8
- Calls child functions through function pointers
- **Purpose**: May be doCommandNative or its inner dispatcher

### FUN_00160124 — Command Dispatcher Candidate
- `void(uint, undef4*)` — uint first param = command ID pattern
- Small (2548B) but significant
- **Purpose**: Likely routes commands to specific handlers

## Decryption Functions (Fully Reversed)

| Name | Address (thunk) | Address (impl) | Algorithm |
|------|----------------|-----------------|-----------|
| J2qaFN4xHz | 0x12b250 | 0x13e030 | `(src[i] ^ xorByte) - key[i%keyLen]` |
| HlupqL3ZAR | 0x12b680 | 0x13dee8 | `key[i%keyLen] ^ src[i] - xorByte` |
| pDhsAJkF7h | 0x12bcc0 | 0x13df8c | `(key[i%keyLen] ^ src[i]) + xorByte` |
| KEl52mTtCb | — | 0x13e0d4 | BRK instruction scanner (anti-debug) |

## Anti-Debug: KEl52mTtCb
Scans code for `0xd4200000` (BRK #0x0). Returns 1 if software breakpoint found.
This detects debugger breakpoints set in code.
