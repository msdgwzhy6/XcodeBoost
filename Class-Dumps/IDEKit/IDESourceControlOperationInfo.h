//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDESourceControlWorkingTree, IDEWorkspace, NSArray, NSOperationQueue;

@interface IDESourceControlOperationInfo : NSObject <DVTInvalidation>
{
    NSOperationQueue *_queue;
    IDESourceControlWorkingTree *_workingTree;
    IDEWorkspace *_workspace;
    NSArray *_itemsToOperateOn;
}

+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (void)initialize;
@property(retain) NSArray *itemsToOperateOn; // @synthesize itemsToOperateOn=_itemsToOperateOn;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
- (void).cxx_destruct;
- (id)calculateContainersForItem:(id)arg1;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

