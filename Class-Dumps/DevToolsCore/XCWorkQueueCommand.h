//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCWorkQueueCommands.h"

@class XCWorkQueue;

@interface XCWorkQueueCommand : NSObject <XCWorkQueueCommands>
{
    XCWorkQueue *_workQueue;
    unsigned long long _workQueueCommandTag;
    unsigned long long _waitCount;
    unsigned long long _estimatedMemoryUse;
    BOOL _rerunCommand;
    BOOL _softError;
}

- (id)instantiatedCommandResultsPostprocessor;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)descriptionForWorkQueueLog;
- (id)subprocessCommandLineForProcessing;
- (void)didDeactivateInWorkQueue:(id)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (void)setSoftError:(BOOL)arg1;
- (BOOL)softError;
- (void)commandInvocationDidEnd:(id)arg1 successfully:(BOOL)arg2;
- (void)commandInvocation:(id)arg1 didEmitBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)commandInvocationWillStart:(id)arg1;
- (id)sharedMemoryName;
- (id)predictiveProcessingValiditySignature;
- (id)predictiveProcessingInputFilePath;
- (id)predictiveProcessingCandidateFilePath;
- (id)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(id)arg2;
- (void)willActivateInWorkQueue:(id)arg1;
- (void)decrementWaitCountsOfDependingNodes;
- (void)incrementWaitCountsOfDependingNodes;
- (void)decrementWaitCount;
- (void)incrementWaitCount;
- (unsigned long long)waitCount;
- (BOOL)isBlockedOnInputOrOutputFileLocks;
- (BOOL)outputFilesHaveBeenUpdated;
- (BOOL)isReadyForProcessing;
- (void)addCommandIdentToBuildStateStoreDependencyList;
- (void)propagateCachedOutputs;
- (BOOL)shouldPropagateCachedOutputs;
- (BOOL)hasCachedOutputs;
- (unsigned long long)estimatedMemoryUse;
- (void)setEstimatedMemoryUse:(unsigned long long)arg1;
- (id)ruleInfo;
- (unsigned long long)phaseNumber;
- (void)rerunCommand;
- (void)setWorkQueueCommandTag:(unsigned long long)arg1;
- (unsigned long long)workQueueCommandTag;
- (void)willBeRemovedFromWorkQueue:(id)arg1;
- (void)wasAddedToWorkQueue:(id)arg1;
- (id)workQueue;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

