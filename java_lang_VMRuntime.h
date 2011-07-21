/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class VMRuntime */

#ifndef _Included_VMRuntime
#define _Included_VMRuntime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     VMRuntime
 * Method:    availableProcessors
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_lang_VMRuntime_availableProcessors
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    freeMemory
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_java_lang_VMRuntime_freeMemory
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    totalMemory
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_java_lang_VMRuntime_totalMemory
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    maxMemory
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_java_lang_VMRuntime_maxMemory
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    gc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_gc
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    runFinalization
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_runFinalization
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    runFinalizationForExit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_runFinalizationForExit
  (JNIEnv *, jclass);

/*
 * Class:     VMRuntime
 * Method:    traceInstructions
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_traceInstructions
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     VMRuntime
 * Method:    traceMethodCalls
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_traceMethodCalls
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     VMRuntime
 * Method:    runFinalizersOnExit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_runFinalizersOnExit
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     VMRuntime
 * Method:    exit
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_exit
  (JNIEnv *, jclass, jint);

/*
 * Class:     VMRuntime
 * Method:    nativeLoad
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_java_lang_VMRuntime_nativeLoad
  (JNIEnv *, jclass, jstring);

/*
 * Class:     VMRuntime
 * Method:    nativeGetLibname
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_VMRuntime_nativeGetLibname
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     VMRuntime
 * Method:    insertSystemProperties
 * Signature: (Ljava/util/Properties;)V
 */
JNIEXPORT void JNICALL Java_java_lang_VMRuntime_insertSystemProperties
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
