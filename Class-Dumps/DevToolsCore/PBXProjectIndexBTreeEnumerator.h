//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PBXProjectIndexBTree;

@interface PBXProjectIndexBTreeEnumerator : NSObject
{
    PBXProjectIndexBTree *_btree;
    _pbxbtreecursor_23e470bf _cursor;
    NSObject<OS_dispatch_queue> *_treeAccessQueue;
}

- (unsigned int)previousValue;
- (unsigned int)nextValueForKey:(const void *)arg1;
- (unsigned int)nextValue;
- (unsigned int)valueForKey:(const void *)arg1;
- (unsigned int)lastValue;
- (unsigned int)firstValue;
- (id)initWithBTree:(id)arg1;

@end

