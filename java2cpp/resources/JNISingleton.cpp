//
// Created by Sergii Vystoropskyi on 2/26/18.
//

#include "JNISingleton.h"

#include <stdexcept>

using namespace JNIWrappers;

JavaVM* JNISingleton::jvm_ = nullptr;
JNIEnv* JNISingleton::env_ = nullptr;

JNIEnv* JNISingleton::env() {
    if (nullptr == env_)
    {
        initJVM();
    }
    return env_;
}

void JNISingleton::initJVM()
{
    JavaVMInitArgs vm_args;
    JavaVMOption options;
    options.optionString = "-Djava.class.path=.";
    vm_args.version = JNI_VERSION_1_8;
    vm_args.nOptions = 1;
    vm_args.options = &options;
    vm_args.ignoreUnrecognized = false;

    jint rc = JNI_CreateJavaVM(&jvm_, (void**)&env_, &vm_args);
    if(rc != JNI_OK) {
        throw std::runtime_error("JVM failed to start");
    }
}