//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/SCMModel.h>

#import "SCMSandboxProtocol.h"

@class NSString, SCMRepository;

@interface SCMSandbox : SCMModel <SCMSandboxProtocol>
{
    SCMRepository *_repository;
    NSString *_repositoryName;
    NSString *_repositoryOffsetPath;
    long long _ownerCount;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
@property long long ownerCount; // @synthesize ownerCount=_ownerCount;
@property(copy) NSString *repositoryOffsetPath; // @synthesize repositoryOffsetPath=_repositoryOffsetPath;
@property(copy) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain) SCMRepository *repository; // @synthesize repository=_repository;
- (id)description;
- (void)moveOperation;
- (void)copyOperation;
- (void)deleteOperation;
- (void)clearTagsOperation;
- (void)editOperation;
- (void)mkdirOperation;
- (void)unlockOperation;
- (void)lockOperation;
- (void)resolvedOperation;
- (void)revertOperation;
- (void)commitOperation;
- (void)addOperation;
- (void)updateOperation;
- (void)statusOperation;
- (void)handleFinishedRequest:(id)arg1;
- (void)applyTreeUpdates:(id)arg1;
- (id)requestResolveForEntries:(id)arg1;
- (id)requestResolveForPaths:(id)arg1;
- (id)requesClearTagsForEntries:(id)arg1;
- (id)requestClearTagsForPaths:(id)arg1;
- (id)requestRevertForEntries:(id)arg1;
- (id)requestRevertForPaths:(id)arg1;
- (id)requestEditForEntries:(id)arg1;
- (id)requestEditForPaths:(id)arg1;
- (id)requestDeleteForEntries:(id)arg1;
- (id)requestDeleteForPaths:(id)arg1;
- (id)requestCommitForEntries:(id)arg1 withMessage:(id)arg2;
- (id)requestCommitForPaths:(id)arg1 withMessage:(id)arg2;
- (id)requestAddForEntries:(id)arg1;
- (id)requestAddForPaths:(id)arg1;
- (id)requestUpdateForEntries:(id)arg1 revision:(id)arg2;
- (id)requestUpdateForPaths:(id)arg1 revision:(id)arg2;
- (id)requestStatusForEntry:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3;
- (id)requestStatusForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3;
- (id)modifiedEntries;
- (id)updateAll;
- (id)refreshAll;
- (id)createRequestWithSelector:(SEL)arg1;
- (BOOL)canUnlockEntries:(id)arg1;
- (BOOL)canLockEntries:(id)arg1;
- (BOOL)canResolveEntries:(id)arg1;
- (BOOL)canUpdateEntries:(id)arg1 revision:(id)arg2;
- (BOOL)canRevertEntries:(id)arg1;
- (BOOL)canEditEntries:(id)arg1;
- (BOOL)canDiffEntries:(id)arg1 revision:(id)arg2;
- (BOOL)canDeleteEntries:(id)arg1;
- (BOOL)canCompareEntries:(id)arg1 revision:(id)arg2;
- (BOOL)canCommitEntries:(id)arg1;
- (BOOL)canAnnotateEntries:(id)arg1 revision:(id)arg2;
- (BOOL)canAddEntries:(id)arg1;
- (BOOL)allModified:(id)arg1;
- (BOOL)allVersioned:(id)arg1;
- (id)directoryEntryForSandboxEntry:(id)arg1;
- (id)repositoryPathForSandboxEntry:(id)arg1;
- (Class)requestClass;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (Class)sandboxEntryClass;
- (id)initWithName:(id)arg1 repositoryName:(id)arg2 path:(id)arg3;

@end

