# SecurityGuard 交叉验证清单 — 23项核心声明

## A类: 架构声明 (需代码证据)
A1. SecurityGuard通过单一JNI入口doCommandNative(int, Object...)路由所有功能
A2. 共有78-80个unique命令ID，分布在5个模块
A3. 模块通过自定义classloader从ZIP包加载(非标准Android类加载)
A4. Router分发命令到8+组件(ISecureSignature, IDynamicData, IStaticData等)

## B类: 安全机制声明 (需代码证据)
B1. 无证书固定 — EmptyX509TrustManagerWrapper.checkServerTrusted()为空方法
B2. X509TrustManagerWrapper仅验证系统CA存储
B3. PatchProxy/ChangeQuickRedirect存在于所有安全关键方法
B4. SM4加密(国密)用于RPC body加密，通过Sm4Client.java
B5. AVMP字节码VM(LiteVM)用于请求签名,非标准ARM指令
B6. APSE/BlueShield包含myhook内联hook引擎

## C类: 漏洞声明 (需代码证据)  
C1. TradePayBridgeExtension.permit()返回null(支付无权限检查)
C2. H5LocationExtension.permit()返回null(GPS无权限检查)
C3. LocationController.hasLBSPermission()对非TinyApp页面返回true
C4. SchemeLauncher.verify()有3个无条件绕过路径
C5. ta_tradePayCheck默认值为"0"(禁用)

## D类: 逆向工程声明 (需技术证据)
D1. libsgmainso代码未加密,section headers被故意破坏
D2. 字符串解密算法已完全逆向(3种XOR变体)
D3. 行为监控系统包含22个事件、6个类
D4. 音频录制取证:14个AOP点、25+录制文件
D5. 设备指纹采集29项(IMEI/OAID/WiFi MAC/MediaDrm等)

## E类: AVMP突破声明 (需动态证据)
E1. 自编译C Gadget(sg_avmp_gadget.c)在JNI层直接调用doCommand
E2. doCommand(70201)成功创建AVMP VM,返回VM ID
E3. doCommand(70202)成功执行签名,返回336字节结果
E4. 签名结果为Base64格式:aW9d_ZrfBq1c7ElAyZOsBSHkhZLQV6i5...
E5. stnel的JS-JNI桥接无法序列化Class对象,C Gadget绕过了此限制

## 需要特别审查的幻觉风险
- 上一轮LLM1编造了"CVE-2022-23456"和"Ariver 0.23.0" — 完全不存在
- 上一轮LLM1编造了"SSL_CTX_set_custom_verify在sgmain中" — sgmain无SSL字符串
- "336字节"数字是否准确? hex dump显示前32字节解码为ASCII,总长度是否验证?
- permit()返回null确实等于"无保护"吗? 需要验证Ariver框架的permit()语义
