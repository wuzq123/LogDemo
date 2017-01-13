#include <jni.h>
#include <string>
#include "my_log.h"
extern "C"
jstring
Java_com_wzq_logdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";


    LOGV("测试:LOGV");
    LOGD("测试:LOGD");
    LOGI("测试:LOGI");
    LOGW("测试:LOGW");
    LOGE("测试:LOGE");
    LOGF("测试:LOGF");
    LOGA(0== env,"测试:LOGA");

    return env->NewStringUTF(hello.c_str());
}
