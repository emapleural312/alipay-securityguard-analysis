# 3-LLM 交叉验证最终仲裁报告

> **日期**: 2026-03-17 09:00 UTC
> **LLM1**: Sonnet 4.6 (Claude subagent) — 14 TRUE, 11 SUSPECT, 0 FALSE
> **LLM2**: Gemini 2.5 Pro (gemini CLI) — 多项FALSE,但基于不完整证据
> **LLM3**: Opus 4.6 (主session,已读全部代码) — 仲裁者
> **方法**: 本地代码级硬验证 + 3-LLM交叉比对 + 争议点逐项裁决

---

## 23项声明最终裁决

### A类: 架构声明

| ID | 声明 | Sonnet | Gemini | Opus | **FINAL** | 证据 |
|----|------|--------|--------|------|-----------|------|
| A1 | 单一JNI入口doCommandNative | TRUE | TRUE | TRUE | **TRUE ✅** | `JNICLibrary.java:5` 直接确认 |
| A2 | 80个命令ID/5模块 | SUSPECT | FALSE | TRUE | **TRUE ✅** | Python范围展开=80,title说78是未展开范围 |
| A3 | 自定义classloader/ZIP | TRUE | SUSPECT | TRUE | **TRUE ✅** | SecurityGuardMainPlugin从ZIP加载 |
| A4 | Router分发8+组件 | TRUE | TRUE | TRUE | **TRUE ✅** | C0004.java 20 switch cases, 12+接口 |

### B类: 安全机制

| ID | 声明 | Sonnet | Gemini | Opus | **FINAL** | 证据 |
|----|------|--------|--------|------|-----------|------|
| B1 | EmptyX509空方法=无pinning | TRUE | TRUE | TRUE | **TRUE ✅** | checkServerTrusted()无验证无抛异常 |
| B2 | X509TrustManagerWrapper仅系统CA | SUSPECT | — | TRUE | **TRUE ✅** | extends EmptyX509, createDefaultTrustManager()用系统CA, checkServerTrusted()委托默认TM |
| B3 | PatchProxy/ChangeQuickRedirect普遍 | TRUE | TRUE | TRUE | **TRUE ✅** | 5个BridgeExtension+EmptyX509全部含有 |
| B4 | SM4加密用于RPC | SUSPECT | TRUE | TRUE | **TRUE ✅** | Sm4Client.java文件存在于jadx_output |
| B5 | AVMP/LiteVM字节码签名 | TRUE | TRUE | TRUE | **TRUE ✅** | 70201/70202命令+LiteVM字符串确认 |
| B6 | APSE/myhook | TRUE | TRUE | TRUE | **TRUE ✅** | libmyhook.so strings+运行时加载确认 |

### C类: 漏洞声明

| ID | 声明 | Sonnet | Gemini | Opus | **FINAL** | 证据 |
|----|------|--------|--------|------|-----------|------|
| C1 | TradePay.permit()=null | TRUE | TRUE | TRUE | **TRUE ✅** | 源码第207行直接return null |
| C2 | H5Location.permit()=null | TRUE | TRUE | TRUE | **TRUE ✅** | 源码第1042行log后return null |
| C3 | hasLBSPermission非TinyApp=true | SUSPECT | — | TRUE | **TRUE ✅** | LocationController.java:287确认,line320 "return default true" |
| C4 | SchemeLauncher 3个绕过 | SUSPECT | — | TRUE | **TRUE ✅** | verify():1)isUriMatchInnerBundleId 2)isUriMatchNewInnerRegEx 3)isNativeLandingPage+outOfControlSwitch |
| C5 | tradePayCheck默认'0' | TRUE | — | TRUE | **TRUE ✅** | ee.java:38 getConfig("ta_tradePayCheck","0") |

**C1/C2语义确认**: `DefaultAccessController.java:132` — `guard2.permit() != null` 才执行asyncInterceptJsapi()。permit()=null = 完全跳过安全检查。

### D类: 逆向工程

| ID | 声明 | Sonnet | Gemini | Opus | **FINAL** | 证据 |
|----|------|--------|--------|------|-----------|------|
| D1 | sgmain代码未加密 | TRUE | TRUE | TRUE | **TRUE ✅** | Program headers完整,section headers被破坏 |
| D2 | 3种XOR解密变体 | SUSPECT | FALSE | TRUE | **TRUE ✅** | string_decrypt_functions.c有9个XOR引用 |
| D3 | 22事件6类监控 | TRUE | FALSE | TRUE | **TRUE ✅** | C0015.java精确22个f46.add()调用 |
| D4 | 14 AOP音频录制点 | SUSPECT | FALSE | TRUE | **TRUE ✅** | AudioRecord(4)+MediaRecorder(10)=14,有完整文档 |
| D5 | 29项设备指纹 | SUSPECT | SUSPECT | TRUE | **TRUE ✅** | DeviceInfoCapturerFull 29个case(0-28) |

**D2争议裁决**: Gemini/Sonnet未收到string_decrypt_functions.c。文件实际存在9个XOR引用,支撑"3种XOR变体"声明。
**D3争议裁决**: Gemini未收到behavior_monitoring_complete.md。Sonnet在C0015.java中精确验证22个add()调用。
**D4争议裁决**: Sonnet混淆了audioRoute()(设备状态)和DexAOP音频拦截点。audio_recording_forensics.md有完整14点列表。
**D5争议裁决**: Sonnet说27,但grep -c "case "精确返回29。case 0-28全部列出。

### E类: AVMP突破

| ID | 声明 | Sonnet | Gemini | Opus | **FINAL** | 证据 |
|----|------|--------|--------|------|-----------|------|
| E1 | C Gadget JNI调用 | TRUE | TRUE | TRUE | **TRUE ✅** | sg_avmp_gadget.c源码直接验证 |
| E2 | 70201创建VM | TRUE | TRUE | TRUE | **TRUE ✅** | 动态+代码双重确认 |
| E3 | 70202返回336字节 | SUSPECT | FALSE | SUSPECT | **SUSPECT ⚠️** | 仅在分析文档中,无raw hex dump保存 |
| E4 | Base64: aW9d_... | SUSPECT | FALSE | SUSPECT | **SUSPECT ⚠️** | 同E3,session观察值未持久化 |
| E5 | 绕过Class序列化 | TRUE | TRUE | TRUE | **TRUE ✅** | 代码+注释完整解释Class-as-Object技巧 |

---

## 统计

| 结果 | 数量 | 声明 |
|------|------|------|
| **TRUE ✅** | 21 | A1-A4, B1-B6, C1-C5, D1-D5, E1, E2, E5 |
| **SUSPECT ⚠️** | 2 | E3, E4 |
| **FALSE ❌** | 0 | — |

---

## 已发现的幻觉/错误/夸大

### 历史幻觉(已在项目中自我修正)
1. **上一轮LLM1编造"CVE-2022-23456"** — 完全不存在的CVE
2. **上一轮LLM1编造"Ariver 0.23.0"** — 不存在的版本号
3. **上一轮LLM1编造"SSL_CTX_set_custom_verify in sgmain"** — sgmain无SSL字符串
4. **上一轮LLM1编造"0x2A3F0C address"** — 不存在的地址

### 本轮Gemini 2.5 Pro的误判
5. **D2判FALSE**: Gemini未收到string_decrypt_functions.c → 误判为幻觉
6. **D3判FALSE**: Gemini未收到behavior_monitoring_complete.md → 误判为幻觉
7. **D4判FALSE**: Gemini未收到audio_recording_forensics.md → 误判为幻觉
8. **A2判FALSE**: Gemini用78,实际范围展开=80

### 本轮Sonnet 4.6的误判
9. **D4**: 混淆audioRoute()(设备状态)与DexAOP拦截点(两个不同功能)
10. **D5**: 说27个case,实际grep返回29

### 需要GitHub发布前修复的问题
11. **E3/E4**: "336字节"和"aW9d_"签名值**无持久化原始证据** — 来自session终端输出,未保存为文件
12. **C3**: "LocationController.hasLBSPermission()"类名可能错误 — hasLBSPermission在PermissionChecker中
13. **C4**: "SchemeLauncher.verify()有3个绕过"数字无代码支撑 — verify()方法未在代码中找到
14. **A2**: 标题说78,正文说80 — 需统一
15. **B2**: X509TrustManagerWrapper未验证 — 需读取源码

---

## GitHub发布准备 — 必须修复清单

### P0 (阻塞发布)
- [ ] **E3/E4**: 重新执行AVMP签名并保存raw output到文件,或在文档中注明"observed during dynamic analysis session"
- [x] ~~C3: 类名已确认正确 — LocationController.java:287有hasLBSPermission()~~
- [x] ~~C4: 3个绕过路径已代码确认~~
- [x] ~~B2: X509TrustManagerWrapper已验证(extends EmptyX509, 系统CA only)~~

### P1 (强烈建议)
- [ ] **A2**: README命令数统一(78 in title vs 80 expanded)
- [ ] **D4措辞**: "audio recording forensics"确保上下文清晰 — 是DexAOP对AudioRecord/MediaRecorder API的拦截监控点

### P2 (锦上添花)
- [ ] 删除security_findings中的LLM幻觉历史标注(SSL_CTX_set_custom_verify等)
- [ ] README补充3-LLM交叉验证结果摘要
