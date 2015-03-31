/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class eu_unicredit_sophia_SophiaInterface */

#ifndef _Included_eu_unicredit_sophia_SophiaInterface
#define _Included_eu_unicredit_sophia_SophiaInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    allocate_mem
 * Signature: (J)Leu/unicredit/sophia/MemoryArea;
 */
JNIEXPORT jobject JNICALL Java_eu_unicredit_sophia_SophiaInterface_allocate_1mem
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    get_mem
 * Signature: (JJ)Leu/unicredit/sophia/MemoryArea;
 */
JNIEXPORT jobject JNICALL Java_eu_unicredit_sophia_SophiaInterface_get_1mem
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    get_mem_capacity
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_get_1mem_1capacity
  (JNIEnv *, jobject, jobject);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    get_mem_address
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_get_1mem_1address
  (JNIEnv *, jobject, jobject);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    free_mem
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_eu_unicredit_sophia_SophiaInterface_free_1mem
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_env
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1env
  (JNIEnv *, jobject);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_ctl
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1ctl
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_object
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1object
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_open
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1open
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_destroy
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1destroy
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_error
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1error
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_set
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1set
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_delete
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1delete
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_get
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1get
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_drop
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1drop
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_commit
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1commit
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_begin
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1begin
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_prepare
 * Signature: ([J)I
 */
JNIEXPORT jint JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1prepare
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_type
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1type
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     eu_unicredit_sophia_SophiaInterface
 * Method:    sp_cursor
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_eu_unicredit_sophia_SophiaInterface_sp_1cursor
  (JNIEnv *, jobject, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
