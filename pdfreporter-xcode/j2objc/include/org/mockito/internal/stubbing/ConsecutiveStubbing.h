//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/ConsecutiveStubbing.java
//

#ifndef _OrgMockitoInternalStubbingConsecutiveStubbing_H_
#define _OrgMockitoInternalStubbingConsecutiveStubbing_H_

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;

#include "J2ObjC_header.h"
#include "org/mockito/internal/stubbing/BaseStubbing.h"

@interface OrgMockitoInternalStubbingConsecutiveStubbing : OrgMockitoInternalStubbingBaseStubbing {
}

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)getMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingConsecutiveStubbing)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingConsecutiveStubbing)

#endif // _OrgMockitoInternalStubbingConsecutiveStubbing_H_
