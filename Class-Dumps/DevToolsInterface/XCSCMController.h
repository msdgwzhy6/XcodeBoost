//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBXTrackableTask.h"
#import "XCNetworkHostObserver.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PBXProjectDocument;

@interface XCSCMController : NSObject <PBXTrackableTask, XCNetworkHostObserver>
{
    PBXProjectDocument *_projectDocument;
    NSMutableDictionary *_dictionaryOfRefs;
    NSMutableSet *_removedRefs;
    NSMutableArray *_conflictedReferences;
    NSString *_statusDisplayString;
    NSTimer *_refreshTimer;
    BOOL _operationInProgress;
    BOOL _registeredWithTaskManager;
    BOOL _errorSheetShowing;
    BOOL _checkProjectOnDisk;
}

+ (id)taskBadge;
+ (BOOL)scmAuthenticateIfUIRequiredReturnToSelector:(SEL)arg1 selectedItems:(id)arg2 project:(id)arg3 window:(id)arg4 delegate:(id)arg5;
+ (void)initialize;
- (id)taskBadge;
- (id)taskDescriptionString;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (BOOL)taskCanAutoStopOnProjectClose;
- (BOOL)taskCanBeStoppedManually;
- (BOOL)taskRequiresIntervention;
- (BOOL)taskStopRunning;
- (int)taskProgressType;
- (float)taskPercentComplete;
- (void)disconnect;
- (void)_addNotificationObservers;
- (void)_registerForSCMHosts;
- (void)_conflictSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_closeProjectDocument:(id)arg1;
- (void)_resolveConflicts:(id)arg1;
- (void)_postConflictNotification;
- (void)_reportedError:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_showConnectError:(id)arg1;
- (void)_reportError:(id)arg1 inSheet:(BOOL)arg2;
- (id)statusImage;
- (void)scmCompareDidEnd:(id)arg1;
- (id)_fileDocumentUsingName:(id)arg1 fromPath:(id)arg2 referenceFileDocument:(id)arg3 isRTF:(BOOL)arg4;
- (void)_populateFileDocument:(id)arg1 path:(id)arg2 referenceFileDocument:(id)arg3 isRTF:(BOOL)arg4;
- (void)scmAnnotateDidEnd:(id)arg1;
- (void)scmDiffDidEnd:(id)arg1;
- (void)_turnOffFoldingForDocument:(id)arg1;
- (void)goOnline:(BOOL)arg1;
- (void)networkHostOnlineStatusChanged:(BOOL)arg1;
- (void)_scmRepositoryStateChanged:(id)arg1;
- (void)_scmRequestHadProgress:(id)arg1;
- (void)_scmStateDidChange:(id)arg1;
- (void)referenceWasDeleted:(id)arg1;
- (id)references;
- (void)_configurationChanged:(id)arg1;
- (void)performProjectWideStatus;
- (void)_performProjectWideStatusIfNeeded;
- (void)_invalidateRefreshTimer;
- (void)_initiateProjectStatus;
- (id)window;
- (id)logString;
- (id)sourceControlManager;
- (id)project;
- (id)projectDocument;
- (void)dealloc;
- (id)initWithProjectDocument:(id)arg1;

@end

