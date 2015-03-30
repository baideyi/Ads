#include "com_ndk_test_JniClient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cpu-features.h>

#ifdef __cplusplus   
extern "C"  
{   
#endif  
/*
 * Class:     com_ndk_test_JniClient
 * Method:    AddStr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ndk_test_JniClient_AddStr
  (JNIEnv *env, jclass arg, jstring instringA, jstring instringB)
{
	char buf[200] ={0};
	char ibuf[20] = {0};
	strcat(buf, "Hello from JNI !  Compiled with ABI .");
	strcat(buf, "Hello from ");
	uint32_t af = android_getCpuIdArm();
	af = sprintf(ibuf,"%i",af);
	strcat(buf, ibuf);
    jstring str = (*env)->NewStringUTF(env, buf);
    return str;
}

/*
* Class:     com_ndk_test_JniClient
* Method:    AddInt
* Signature: (II)I
*/
JNIEXPORT jint JNICALL Java_com_ndk_test_JniClient_AddInt
  (JNIEnv *env, jclass arg, jint a, jint b)
{
    return a + b;
}

#ifdef __cplusplus   
}   
#endif
