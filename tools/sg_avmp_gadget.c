/*
 * sg_avmp_gadget.c — SecurityGuard AVMP Sign Gadget for stnel
 * Compiles to .so, loaded into target process via stnel
 * Calls invokeAVMP directly at JNI level, bypassing JS serialization
 *
 * Build: $NDK/toolchains/llvm/prebuilt/darwin-x86_64/bin/aarch64-linux-android34-clang \
 *        -shared -fPIC -o sg_avmp_gadget.so sg_avmp_gadget.c
 */

#include <jni.h>
#include <android/log.h>
#include <string.h>
#include <stdlib.h>

#define LOG_TAG "SG_GADGET"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

// Entry point called from stnel via CModule or NativeFunction
__attribute__((visibility("default")))
const char* avmp_sign(JNIEnv* env, const char* sign_input) {
    static char result_b64[4096];
    result_b64[0] = '\0';
    
    LOGI("avmp_sign called with input: %.50s...", sign_input);
    
    // 1. Find SecurityGuardMiddleTierPlugin class
    jclass midPluginCls = (*env)->FindClass(env, "com/alibaba/wireless/security/middletierplugin/SecurityGuardMiddleTierPlugin");
    if (!midPluginCls) {
        LOGE("MiddleTierPlugin class not found");
        // Try with custom classloader
        // For now return error
        strcpy(result_b64, "ERROR:ClassNotFound");
        return result_b64;
    }
    
    // 2. Get AVMP component
    // ... (would need proper classloader handling)
    
    LOGI("avmp_sign: class found, continuing...");
    strcpy(result_b64, "GADGET_LOADED_OK");
    return result_b64;
}

// Alternative: use the doCommandNative JNI function directly
__attribute__((visibility("default")))
jlong create_avmp_vm(JNIEnv* env, jobject router, jstring mwua, jstring sgcipher) {
    // Call router.doCommand(70201, new Object[]{"mwua", "sgcipher"})
    jclass routerCls = (*env)->GetObjectClass(env, router);
    jmethodID doCmd = (*env)->GetMethodID(env, routerCls, "doCommand", "(I[Ljava/lang/Object;)Ljava/lang/Object;");
    
    if (!doCmd) {
        LOGE("doCommand method not found");
        return -1;
    }
    
    // Create Object[] args
    jclass objCls = (*env)->FindClass(env, "java/lang/Object");
    jobjectArray args = (*env)->NewObjectArray(env, 2, objCls, NULL);
    (*env)->SetObjectArrayElement(env, args, 0, mwua);
    (*env)->SetObjectArrayElement(env, args, 1, sgcipher);
    
    // Call doCommand(70201, args)
    jobject vmIdObj = (*env)->CallObjectMethod(env, router, doCmd, 70201, args);
    
    if (!vmIdObj) {
        LOGE("VM creation returned null");
        return -1;
    }
    
    // Extract Long value
    jclass longCls = (*env)->FindClass(env, "java/lang/Long");
    jmethodID longVal = (*env)->GetMethodID(env, longCls, "longValue", "()J");
    jlong vmId = (*env)->CallLongMethod(env, vmIdObj, longVal);
    
    LOGI("VM created, ID: %lld", vmId);
    return vmId;
}

__attribute__((visibility("default")))
jobject invoke_avmp_sign(JNIEnv* env, jobject router, jlong vmId, jbyteArray inputData) {
    jclass routerCls = (*env)->GetObjectClass(env, router);
    jmethodID doCmd = (*env)->GetMethodID(env, routerCls, "doCommand", "(I[Ljava/lang/Object;)Ljava/lang/Object;");
    
    // Build args for doCommand(70202, [vmId, "sign", byte[].class, innerArgs])
    jclass objCls = (*env)->FindClass(env, "java/lang/Object");
    
    // Create Long vmId
    jclass longCls = (*env)->FindClass(env, "java/lang/Long");
    jmethodID longValueOf = (*env)->GetStaticMethodID(env, longCls, "valueOf", "(J)Ljava/lang/Long;");
    jobject vmIdLong = (*env)->CallStaticObjectMethod(env, longCls, longValueOf, vmId);
    
    // Get byte[].class
    jclass byteArrayCls = (*env)->FindClass(env, "[B");
    
    // Create inner args
    jclass intCls = (*env)->FindClass(env, "java/lang/Integer");
    jmethodID intValueOf = (*env)->GetStaticMethodID(env, intCls, "valueOf", "(I)Ljava/lang/Integer;");
    
    jint inputLen = (*env)->GetArrayLength(env, inputData);
    jobject zero = (*env)->CallStaticObjectMethod(env, intCls, intValueOf, 0);
    jobject lenObj = (*env)->CallStaticObjectMethod(env, intCls, intValueOf, inputLen);
    jstring empty = (*env)->NewStringUTF(env, "");
    
    jobjectArray innerArgs = (*env)->NewObjectArray(env, 6, objCls, NULL);
    (*env)->SetObjectArrayElement(env, innerArgs, 0, zero);
    (*env)->SetObjectArrayElement(env, innerArgs, 1, inputData);
    (*env)->SetObjectArrayElement(env, innerArgs, 2, lenObj);
    (*env)->SetObjectArrayElement(env, innerArgs, 3, empty);
    // innerArgs[4] and [5] are null (already initialized)
    
    // Create outer args: [vmIdLong, "sign", byte[].class, innerArgs]
    jstring signStr = (*env)->NewStringUTF(env, "sign");
    jobjectArray outerArgs = (*env)->NewObjectArray(env, 4, objCls, NULL);
    (*env)->SetObjectArrayElement(env, outerArgs, 0, vmIdLong);
    (*env)->SetObjectArrayElement(env, outerArgs, 1, signStr);
    (*env)->SetObjectArrayElement(env, outerArgs, 2, byteArrayCls); // THIS IS THE KEY: Class as Object
    (*env)->SetObjectArrayElement(env, outerArgs, 3, innerArgs);
    
    LOGI("Calling doCommand(70202)...");
    jobject result = (*env)->CallObjectMethod(env, router, doCmd, 70202, outerArgs);
    
    if ((*env)->ExceptionCheck(env)) {
        (*env)->ExceptionDescribe(env);
        (*env)->ExceptionClear(env);
        LOGE("Exception in doCommand(70202)");
        return NULL;
    }
    
    LOGI("Sign result: %p", result);
    return result;
}
