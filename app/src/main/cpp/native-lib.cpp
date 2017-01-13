#include <jni.h>
#include <string>
#include "my_log.h"
extern "C"
jstring
Java_com_wzq_logdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";


    MY_LOG_VERBOSE("测试:MY_LOG_VERBOSE");
    MY_LOG_DEBUG("测试:MY_LOG_DEBUG");
    MY_LOG_INFO("测试:MY_LOG_INFO");
    MY_LOG_WARNING("测试:MY_LOG_WARNING");
    MY_LOG_ERROR("测试:MY_LOG_ERROR");
    MY_LOG_FATAL("测试:MY_LOG_FATAL");
    MY_LOG_ASSERT(0!= env,"测试:MY_LOG_ASSERT");

    return env->NewStringUTF(hello.c_str());
}
