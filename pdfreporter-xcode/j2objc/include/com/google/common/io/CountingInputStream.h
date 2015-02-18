//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/io/CountingInputStream.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoCountingInputStream_RESTRICT
#define ComGoogleCommonIoCountingInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCountingInputStream_RESTRICT
#if !defined (_ComGoogleCommonIoCountingInputStream_) && (ComGoogleCommonIoCountingInputStream_INCLUDE_ALL || ComGoogleCommonIoCountingInputStream_INCLUDE)
#define _ComGoogleCommonIoCountingInputStream_

@class IOSByteArray;
@class JavaIoInputStream;

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"


@interface ComGoogleCommonIoCountingInputStream : JavaIoFilterInputStream {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jlong)getCount;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)n;

- (void)markWithInt:(jint)readlimit;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCountingInputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCountingInputStream)