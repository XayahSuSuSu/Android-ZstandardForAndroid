#include <jni.h>
#include <string>
#include <android/log.h>
#include "zstd.h"

#define LOG_TAG "Zstandard"
#define LOG_D(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jstring JNICALL
Java_com_xayah_zstandard_native_Zstandard_version(
        JNIEnv *env,
        jobject) {

    LOG_D("version: %s", ZSTD_VERSION_STRING);
    return env->NewStringUTF(ZSTD_VERSION_STRING);
}
