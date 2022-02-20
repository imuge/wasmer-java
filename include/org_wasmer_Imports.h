/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_wasmer_Imports */

#ifndef _Included_org_wasmer_Imports
#define _Included_org_wasmer_Imports
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_wasmer_Imports
 * Method:    nativeImportsInstantiate
 * Signature: (Ljava/util/List;J)J
 */
JNIEXPORT jlong JNICALL Java_org_wasmer_Imports_nativeImportsInstantiate
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_wasmer_Imports
 * Method:    nativeImportsChain
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_wasmer_Imports_nativeImportsChain
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_wasmer_Imports
 * Method:    nativeImportsWasi
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_wasmer_Imports_nativeImportsWasi
  (JNIEnv *, jclass);

/*
 * Class:     org_wasmer_Imports
 * Method:    nativeDrop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_wasmer_Imports_nativeDrop
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
