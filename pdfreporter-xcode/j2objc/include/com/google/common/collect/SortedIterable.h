//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/SortedIterable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectSortedIterable_RESTRICT
#define ComGoogleCommonCollectSortedIterable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedIterable_RESTRICT
#if !defined (_ComGoogleCommonCollectSortedIterable_) && (ComGoogleCommonCollectSortedIterable_INCLUDE_ALL || ComGoogleCommonCollectSortedIterable_INCLUDE)
#define _ComGoogleCommonCollectSortedIterable_

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

#define JavaLangIterable_RESTRICT 1
#define JavaLangIterable_INCLUDE 1
#include "java/lang/Iterable.h"


@protocol ComGoogleCommonCollectSortedIterable < JavaLangIterable, NSObject, JavaObject >
- (id<JavaUtilComparator>)comparator;

- (id<JavaUtilIterator>)iterator;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedIterable)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedIterable)
