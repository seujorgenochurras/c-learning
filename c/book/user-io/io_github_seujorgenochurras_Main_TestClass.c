//#include "..\..\java-c-implementation\src\main\java\io\github\seujorgenochurras\io_github_seujorgenochurras_Main_TestClass.h"

#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_io_github_seujorgenochurras_Main_00024TestClass_getASCIITableValues(JNIEnv *, jobject, jobject, jobject) {
    for (int i = 46; i < 200; i++) {
        putchar(i);
    }
}

JNIEXPORT void JNICALL Java_io_github_seujorgenochurras_Main_00024TestClass_printYes(JNIEnv *, jobject) {
    puts("Yes");
}

