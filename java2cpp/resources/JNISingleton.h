//
// Created by Sergii Vystoropskyi on 2/26/18.
//

#ifndef JNI_JNISINGLETON_H
#define JNI_JNISINGLETON_H

#include <memory>
#include <jni.h>

namespace JNIWrappers {

class JNISingleton {
public:
    static JNIEnv* env();

protected:
    static void initJVM();

protected:
    static JavaVM* jvm_;
    static JNIEnv* env_;

};

}

#endif //JNI_JNISINGLETON_H
