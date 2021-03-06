//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/DelayQueue.java
//

#ifndef _JavaUtilConcurrentDelayQueue_H_
#define _JavaUtilConcurrentDelayQueue_H_

@class IOSObjectArray;
@class JavaLangThread;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilPriorityQueue;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentDelayed;
@protocol JavaUtilConcurrentLocksCondition;

#include "J2ObjC_header.h"
#include "java/util/AbstractQueue.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/BlockingQueue.h"

@interface JavaUtilConcurrentDelayQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue > {
}

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)addWithId:(id<JavaUtilConcurrentDelayed>)e;

- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e;

- (void)putWithId:(id<JavaUtilConcurrentDelayed>)e;

- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)poll;

- (id)take;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)peek;

- (jint)size;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (void)clear;

- (jint)remainingCapacity;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (jboolean)removeWithId:(id)o;

- (void)removeEQWithId:(id)o;

- (id<JavaUtilIterator>)iterator;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayQueue)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayQueue)

@interface JavaUtilConcurrentDelayQueue_Itr : NSObject < JavaUtilIterator > {
 @public
  IOSObjectArray *array_;
  jint cursor_;
  jint lastRet_;
}

- (instancetype)initWithJavaUtilConcurrentDelayQueue:(JavaUtilConcurrentDelayQueue *)outer$
                                   withNSObjectArray:(IOSObjectArray *)array;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayQueue_Itr)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentDelayQueue_Itr, array_, IOSObjectArray *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayQueue_Itr)

#endif // _JavaUtilConcurrentDelayQueue_H_
