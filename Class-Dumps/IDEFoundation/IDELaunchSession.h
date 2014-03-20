//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFileDataType, DVTMapTable, IDEExecutionEnvironment, IDEExecutionTracker, IDELaunchParametersSnapshot, IDELocationSimulator, IDERunDestination, IDESchemeCommand, NSArray, NSError, NSMutableArray, NSMutableSet, NSString;

@interface IDELaunchSession : NSObject
{
    IDEExecutionEnvironment *_executionEnvironment;
    IDEExecutionTracker *_executionTracker;
    NSMutableArray *_debugSessions;
    id <IDEDebugSession> _currentDebugSession;
    id <IDETraceInferiorSession> _currentTraceInferiorSession;
    NSArray *_debuggingAdditions;
    NSMutableArray *_gaugeLocations;
    int _state;
    NSError *_alertError;
    IDELaunchParametersSnapshot *_launchParameters;
    DVTFileDataType *_runnableType;
    int _runnablePID;
    int _simulatorPID;
    BOOL _iconChanged;
    IDERunDestination *_runDestination;
    NSString *_runnableDisplayName;
    IDESchemeCommand *_schemeCommand;
    NSMutableSet *_consoleAdaptors;
    DVTMapTable *_targetConsoleAdaptorToTerminationToken;
    int _targetOutputState;
    IDELocationSimulator *_locationSimulator;
    BOOL _representsAnXPCService;
    int _parentPID;
}

+ (BOOL)automaticallyNotifiesObserversOfTargetOutputState;
+ (void)terminateLaunchSession:(id)arg1 inWorkspace:(id)arg2;
+ (id)createLaunchSessionForDebuggingAddition:(id)arg1 inWorkspace:(id)arg2 launchParameters:(id)arg3 runnableDisplayName:(id)arg4 runDestination:(id)arg5;
+ (id)synthesizeDebuggingAdditionSession:(id)arg1 inWorkspace:(id)arg2 launchParameters:(id)arg3 runnableDisplayName:(id)arg4 runDestination:(id)arg5;
+ (id)launchSessionForReference:(id)arg1;
+ (void)_setLaunchSession:(id)arg1 forReference:(id)arg2;
+ (void)initialize;
@property BOOL representsAnXPCService; // @synthesize representsAnXPCService=_representsAnXPCService;
@property(readonly) IDELocationSimulator *locationSimulator; // @synthesize locationSimulator=_locationSimulator;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(nonatomic) int targetOutputState; // @synthesize targetOutputState=_targetOutputState;
@property(readonly) NSString *runnableDisplayName; // @synthesize runnableDisplayName=_runnableDisplayName;
@property BOOL iconChanged; // @synthesize iconChanged=_iconChanged;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property int parentPID; // @synthesize parentPID=_parentPID;
@property int runnablePID; // @synthesize runnablePID=_runnablePID;
@property(readonly) DVTFileDataType *runnableType; // @synthesize runnableType=_runnableType;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
@property(copy) NSError *alertError; // @synthesize alertError=_alertError;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly) NSArray *debuggingAdditions; // @synthesize debuggingAdditions=_debuggingAdditions;
@property(retain) id <IDETraceInferiorSession> currentTraceInferiorSession; // @synthesize currentTraceInferiorSession=_currentTraceInferiorSession;
@property(retain, nonatomic) id <IDEDebugSession> currentDebugSession; // @synthesize currentDebugSession=_currentDebugSession;
@property(retain) IDEExecutionTracker *executionTracker; // @synthesize executionTracker=_executionTracker;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
- (void).cxx_destruct;
- (void)addNewGaugeLocation:(id)arg1;
- (id)existingGaugeLocationForURL:(id)arg1;
- (id)referenceWhenAlive;
- (BOOL)isAlive;
@property(readonly) BOOL supportsDebugSession;
@property(readonly) BOOL isCurrentlyTracing;
- (void)_willExpire;
- (void)_invalidateExecutionEnvironment;
- (void)_didStart;
- (void)_removeConsoleAdaptorObservations:(id)arg1;
- (void)_handleConsoleAdaptorOutputTerminated:(id)arg1;
- (void)_handleConsoleItemAdded:(id)arg1;
- (void)removeConsoleAdaptor:(id)arg1;
- (void)addConsoleAdaptor:(id)arg1;
@property(readonly) NSMutableSet *kvoConsoleAdaptors;
@property(readonly) int CPUType;
@property(readonly) IDERunDestination *runDestination;
- (id)initWithExecutionEnvironment:(id)arg1 launchParameters:(id)arg2 runnableDisplayName:(id)arg3 runnableType:(id)arg4 runDestination:(id)arg5;

// Remaining properties
@property(copy) NSArray *debugSessions; // @dynamic debugSessions;
@property(copy) NSArray *gaugeLocations; // @dynamic gaugeLocations;
@property(readonly) NSMutableArray *mutableDebugSessions; // @dynamic mutableDebugSessions;
@property(readonly) NSMutableArray *mutableGaugeLocations; // @dynamic mutableGaugeLocations;

@end

