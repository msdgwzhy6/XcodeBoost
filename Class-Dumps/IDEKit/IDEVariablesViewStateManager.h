//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEWorkspace, NSMutableDictionary;

@interface IDEVariablesViewStateManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_contextNamesToContextStates;
    BOOL _hasUnhandledArchiveData;
}

+ (void)initialize;
+ (id)_dataSpecifier;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_writeStateToDisk;
- (void)_readStateFromDisk;
- (void)addContextStates:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)contextStateForContextName:(id)arg1;
- (void)removePersistentString:(id)arg1 fromContextName:(id)arg2;
- (id)persistentStringsForContextName:(id)arg1;
- (void)addPersistentString:(id)arg1 forContextName:(id)arg2;
- (BOOL)shouldNodeBeExpanded:(id)arg1 forContextName:(id)arg2;
- (void)nodeExpandedStateChanged:(id)arg1 forContextName:(id)arg2;
- (id)_contextStateForContextNameCreatingIfNecessary:(id)arg1;
- (id)_contextStateForContextName:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

