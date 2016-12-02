#include "com_geekscircle_jni_JNIBASIC.h"
JNIEXPORT void JNICALL Java_com_geekscircle_jni_JNIBASIC_helloWorld(JNIEnv * env, jclass clazz)
{
	printf("Hello World From Native Code");
}
