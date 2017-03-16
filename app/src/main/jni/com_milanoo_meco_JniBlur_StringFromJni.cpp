//
// Created by Soli on 2017/3/16.
//
#include "com_milanoo_meco_JniBlur_StringFromJni.h"

/**
 *
 */
JNIEXPORT jstring JNICALL Java_com_milanoo_meco_JniBlur_StringFromJni_getStringFromJni
        (JNIEnv *env, jobject obg) {
    return (*env).NewStringUTF("this is from jni native String!!!!!!!");
}