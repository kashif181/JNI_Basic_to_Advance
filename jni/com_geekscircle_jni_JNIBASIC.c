#include "com_geekscircle_jni_JNIBASIC.h"
JNIEXPORT void JNICALL Java_com_geekscircle_jni_JNIBASIC_helloWorld(JNIEnv * env, jclass clazz, jint ina, jint inb)
{
	printf("Adding argument from java %d  and %d = %d", ina, inb, ina+inb);
}
