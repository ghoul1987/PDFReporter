//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../pdfreporter-test-portable/src/test/ch/digireport/jasper/providers/AndroidTestProvider.java
//
//  Created by kendra on 10/1/13.
//

#ifndef _TestChDigireportJasperProvidersAndroidTestProvider_H_
#define _TestChDigireportJasperProvidersAndroidTestProvider_H_

#import "JreEmulation.h"
#include "test/ch/digireport/jasper/providers/TestProviderInterface.h"

@interface TestChDigireportJasperProvidersAndroidTestProvider : NSObject < TestChDigireportJasperProvidersTestProviderInterface > {
}

- (NSString *)inputPathWithNSString:(NSString *)input;
- (NSString *)outputPathWithNSString:(NSString *)input;
- (NSString *)databasePath;
- (id)init;
@end

#endif // _TestChDigireportJasperProvidersAndroidTestProvider_H_
