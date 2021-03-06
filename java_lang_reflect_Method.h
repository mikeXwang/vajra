/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class Method */

#ifndef _Included_Method
#define _Included_Method
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Method
 * Method:    equals
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_reflect_Method_equals
  (JNIEnv *, jobject, jobject);

/*
 * Class:     Method
 * Method:    getDeclaringClass
 * Signature: ()Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_reflect_Method_getDeclaringClass
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    getExceptionTypes
 * Signature: ()[Ljava/lang/Class;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_reflect_Method_getExceptionTypes
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    getModifiers
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_lang_reflect_Method_getModifiers
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_reflect_Method_getName
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    getParameterTypes
 * Signature: ()[Ljava/lang/Class;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_reflect_Method_getParameterTypes
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    getReturnType
 * Signature: ()Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_reflect_Method_getReturnType
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    hashCode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_lang_reflect_Method_hashCode
  (JNIEnv *, jobject);

/*
 * Class:     Method
 * Method:    invoke
 * Signature: (Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_java_lang_reflect_Method_invoke
  (JNIEnv *, jobject, jobject, jobjectArray);

/*
 * Class:     Method
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_reflect_Method_toString
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
