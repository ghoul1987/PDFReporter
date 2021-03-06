//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ForwardingNavigableSet.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectForwardingNavigableSet_RESTRICT
#define ComGoogleCommonCollectForwardingNavigableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingNavigableSet_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingNavigableSet_) && (ComGoogleCommonCollectForwardingNavigableSet_INCLUDE_ALL || ComGoogleCommonCollectForwardingNavigableSet_INCLUDE)
#define _ComGoogleCommonCollectForwardingNavigableSet_

@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectForwardingSortedSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSortedSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSortedSet.h"

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "java/util/NavigableSet.h"


@interface ComGoogleCommonCollectForwardingNavigableSet : ComGoogleCommonCollectForwardingSortedSet < JavaUtilNavigableSet > {
}

- (instancetype)init;

- (id<JavaUtilNavigableSet>)delegate;

- (id)lowerWithId:(id)e;

- (id)standardLowerWithId:(id)e;

- (id)floorWithId:(id)e;

- (id)standardFloorWithId:(id)e;

- (id)ceilingWithId:(id)e;

- (id)standardCeilingWithId:(id)e;

- (id)higherWithId:(id)e;

- (id)standardHigherWithId:(id)e;

- (id)pollFirst;

- (id)standardPollFirst;

- (id)pollLast;

- (id)standardPollLast;

- (id)standardFirst;

- (id)standardLast;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)standardSubSetWithId:(id)fromElement
                                     withBoolean:(jboolean)fromInclusive
                                          withId:(id)toElement
                                     withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedSet>)standardSubSetWithId:(id)fromElement
                                       withId:(id)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilSortedSet>)standardHeadSetWithId:(id)toElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilSortedSet>)standardTailSetWithId:(id)fromElement;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet)
#if !defined (_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_) && (ComGoogleCommonCollectForwardingNavigableSet_INCLUDE_ALL || ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_INCLUDE)
#define _ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_

@class ComGoogleCommonCollectForwardingNavigableSet;

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_DescendingSet_INCLUDE 1
#include "com/google/common/collect/Sets.h"


@interface ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet : ComGoogleCommonCollectSets_DescendingSet {
}

- (instancetype)initWithComGoogleCommonCollectForwardingNavigableSet:(ComGoogleCommonCollectForwardingNavigableSet *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)
