//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTModelTree.h"

@class IDESourceControlExtension, IDESourceControlManager, IDESourceControlTreeGroup, NSString;

@interface IDESourceControlTree : DVTModelTree
{
    IDESourceControlManager *_sourceControlManager;
    IDESourceControlExtension *_sourceControlExtension;
    NSString *_location;
    NSString *_name;
    int _reachabilityFlags;
    unsigned long long _state;
    long long _reachable;
    BOOL _disallowLoadingChildren;
    BOOL _isObservingReachability;
    NSString *_identifier;
    NSString *_cachedFirstRevision;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingConnected;
+ (id)treeLoadingModelObjectGraph;
@property(copy) NSString *cachedFirstRevision; // @synthesize cachedFirstRevision=_cachedFirstRevision;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL isObservingReachability; // @synthesize isObservingReachability=_isObservingReachability;
@property long long reachable; // @synthesize reachable=_reachable;
@property BOOL disallowLoadingChildren; // @synthesize disallowLoadingChildren=_disallowLoadingChildren;
@property unsigned long long state; // @synthesize state=_state;
@property int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(copy) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) IDESourceControlExtension *sourceControlExtension; // @synthesize sourceControlExtension=_sourceControlExtension;
@property(readonly) IDESourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
- (void).cxx_destruct;
- (id)copyRepository;
- (id)description;
- (BOOL)containsItemAtLocation:(id)arg1;
- (void)endObservingReachability;
- (void)startObservingReachability;
- (id)firstRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)subclass_createRootNode;
- (void)primitiveInvalidate;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 sourceControlExtension:(id)arg2 sourceControlManager:(id)arg3;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

// Remaining properties
@property(readonly) IDESourceControlTreeGroup *rootGroup; // @dynamic rootGroup;

@end

