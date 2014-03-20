//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTObservingToken, DVTStackBacktrace, IDEContainer, IDEContainerQuery, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEFileReferenceContainerObserver : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_observedTypesConformanceByDataType;
    CDUnknownBlockType _skipReferencePredicateBlock;
    CDUnknownBlockType _updateHandlerBlock;
    CDUnknownBlockType _cleanUpBlock;
    NSMutableDictionary *_incrementalResults;
    NSMutableDictionary *_compositeResults;
    DVTObservingToken *_matchesKVOToken;
    IDEContainerQuery *_containerQuery;
    NSMutableSet *_incrementalRemovals;
    IDEContainer *_observedContainer;
    NSMutableSet *_observationBlocks;
    NSDictionary *_currentFilePaths;
    NSSet *_currentFileReferences;
    struct dispatch_queue_s *_ioQueue;
    NSString *_identifier;
    NSSet *_observedTypes;
}

+ (void)initialize;
+ (void)unregisterObserver:(id)arg1;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 skipFileReferencePredicate:(CDUnknownBlockType)arg5;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 cleanUpBlock:(CDUnknownBlockType)arg5 skipFileReferencePredicate:(CDUnknownBlockType)arg6;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property(readonly) IDEContainer *observedContainer; // @synthesize observedContainer=_observedContainer;
- (void).cxx_destruct;
- (void)processPendingResults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)processResultForPath:(id)arg1 withLastKnownFileType:(id)arg2 updateType:(long long)arg3;
- (void)postResults;
- (void)postResultsRetrospectiveResultsToObserverBlock:(CDUnknownBlockType)arg1;
- (void)setResult:(id)arg1 forPath:(id)arg2;
- (void)matchedContainerItemsDidChange:(id)arg1;
- (void)invalidateProcessing;
- (void)invalidatePosting;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (id)description;
- (void)primitiveInvalidate;
- (id)initWithContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 cleanUpBlock:(CDUnknownBlockType)arg5 skipFileReferencePredicate:(CDUnknownBlockType)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

