//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBMutableCollection.h"
#import "IBOrderedCollection.h"

@protocol IBMutableOrderedCollection <IBOrderedCollection, IBMutableCollection>
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparisonSelector:(SEL)arg2;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparator:(long long (^)(id, id))arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
@end

