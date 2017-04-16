//
// Created by Soli on 2017/3/16.
//
#include "com_milanoo_meco_JniBlur_StringFromJni.h"
#include <android/log.h>

#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, "ProjectName", __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG , "ProjectName", __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO  , "ProjectName", __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN  , "ProjectName", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR  , "ProjectName", __VA_ARGS__)

/**
 *http://blog.csdn.net/pkigavin/article/details/8583537
 *  如何在ANDROID JNI 的C++中打Log
 */
JNIEXPORT jstring JNICALL Java_com_milanoo_meco_JniBlur_StringFromJni_getStringFromJni
        (JNIEnv *env, jobject obg) {
    LOGE("我在jni中打印的日志");
    return (*env).NewStringUTF("this is from jni native String!!!!!!!");
}