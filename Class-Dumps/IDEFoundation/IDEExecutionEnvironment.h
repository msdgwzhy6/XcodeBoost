//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTMapTable, DVTStackBacktrace, IDEActivityLogSection, IDEBreakpointManager, IDEBuildOperation, IDEExecutionTracker, IDELaunchSession, IDELogStore, IDEWorkspaceArena, NSArray, NSCountedSet, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSSet;

@interface IDEExecutionEnvironment : NSObject <DVTInvalidation>
{
    IDEWorkspaceArena *_workspaceArena;
    id <IDEClientTracking> _clientTracker;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_executionTrackers;
    NSMutableArray *_executionTrackersForDisplay;
    IDEExecutionTracker *_currentExecutionTracker;
    NSMutableSet *_pendingBuildOperations;
    NSCountedSet *_activeBuildLogs;
    IDEBuildOperation *_currentBuildOperation;
    int _buildState;
    int _lastBuildResult;
    NSMutableArray *_launchSessions;
    NSMapTable *_launchSessionRunnablePIDObservationTokens;
    IDELaunchSession *_selectedLaunchSession;
    IDELaunchSession *_currentLaunchSession;
    IDEBreakpointManager *_breakpointManager;
    DVTMapTable *_productNamesToBuildableProductsMapping;
    IDELogStore *_logStore;
    id <IDEPreBuildSavingDelegate> _preBuildSavingDelegate;
    BOOL _handlingLaunchSessionStateChange;
    BOOL _settingLaunchSessionForTabChange;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentLaunchSession;
+ (id)keyPathsForValuesAffectingLatestBuildLog;
+ (id)keyPathsForValuesAffectingLogRecords;
+ (BOOL)automaticallyNotifiesObserversForCurrentExecutionTracker;
+ (void)initialize;
@property(retain) id <IDEPreBuildSavingDelegate> preBuildSavingDelegate; // @synthesize preBuildSavingDelegate=_preBuildSavingDelegate;
@property(retain) id <IDEClientTracking> clientTracker; // @synthesize clientTracker=_clientTracker;
@property(copy) DVTMapTable *productNamesToBuildableProductsMapping; // @synthesize productNamesToBuildableProductsMapping=_productNamesToBuildableProductsMapping;
@property(readonly) int lastBuildResult; // @synthesize lastBuildResult=_lastBuildResult;
@property(readonly) int buildState; // @synthesize buildState=_buildState;
@property(readonly) NSSet *pendingBuildOperations; // @synthesize pendingBuildOperations=_pendingBuildOperations;
@property(retain) IDEBuildOperation *currentBuildOperation; // @synthesize currentBuildOperation=_currentBuildOperation;
@property(retain) IDEWorkspaceArena *workspaceArena; // @synthesize workspaceArena=_workspaceArena;
@property(retain) IDEBreakpointManager *breakpointManager; // @synthesize breakpointManager=_breakpointManager;
@property(retain, nonatomic) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
@property(retain, nonatomic) IDELaunchSession *selectedLaunchSession; // @synthesize selectedLaunchSession=_selectedLaunchSession;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) IDEExecutionTracker *currentExecutionTracker; // @synthesize currentExecutionTracker=_currentExecutionTracker;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_addMissingErrorForFailedBuildToRecorder:(id)arg1 buildLog:(id)arg2;
- (void)_handleLaunchSession:(id)arg1 stateChange:(id)arg2;
- (void)_detectNameConflict:(char *)arg1 sameScheme:(char *)arg2 forLaunchSession:(id)arg3 add:(BOOL)arg4;
- (void)_detectNameConflict:(char *)arg1 sameScheme:(char *)arg2 forLaunchSession:(id)arg3 otherLaunchSession:(id)arg4;
- (void)_setStatusForExecutionTrackerInLaunchSession:(id)arg1 nameConflict:(BOOL)arg2 sameScheme:(BOOL)arg3;
- (void)_noteLaunchSessionTargetOutputStateChanged:(id)arg1;
- (void)_addSyntheticLaunchSessionForDebuggingAdditionRun:(id)arg1;
- (void)_setSelectedLaunchSessionForTabChange:(id)arg1;
@property(readonly) IDEActivityLogSection *latestBuildLog;
@property(readonly) NSArray *logRecords;
- (void)updateLogsFromOperation:(id)arg1;
- (id)executeOperation:(id)arg1 withCommandName:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceArena:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) NSArray *executionTrackers; // @dynamic executionTrackers;
@property(readonly) NSArray *executionTrackersForDisplay; // @dynamic executionTrackersForDisplay;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *launchSessions; // @dynamic launchSessions;
@property(readonly, copy) NSMutableArray *mutableExecutionTrackers; // @dynamic mutableExecutionTrackers;
@property(readonly, copy) NSMutableArray *mutableExecutionTrackersForDisplay; // @dynamic mutableExecutionTrackersForDisplay;
@property(readonly, copy) NSMutableArray *mutableLaunchSessions; // @dynamic mutableLaunchSessions;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

