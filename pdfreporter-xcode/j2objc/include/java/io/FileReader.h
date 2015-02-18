//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileReader.java
//

#ifndef _JavaIoFileReader_H_
#define _JavaIoFileReader_H_

@class JavaIoFile;
@class JavaIoFileDescriptor;

#include "J2ObjC_header.h"
#include "java/io/InputStreamReader.h"

@interface JavaIoFileReader : JavaIoInputStreamReader {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (instancetype)initWithNSString:(NSString *)filename;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileReader)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileReader)

#endif // _JavaIoFileReader_H_