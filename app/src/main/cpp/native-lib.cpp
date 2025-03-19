#include <jni.h>
#include <string>
#include <zip.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_cpp_1project_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    std::string message = "libzip library version: " + std::string(zip_libzip_version());
    return env->NewStringUTF(message.c_str());
}