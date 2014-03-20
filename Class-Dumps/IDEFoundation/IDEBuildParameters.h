//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class IDEOverridingBuildProperties, IDERunDestination, IDESchemeCommand<IDEPrimitiveSchemeCommand>, IDEWorkspaceArenaSnapshot, NSString;

@interface IDEBuildParameters : NSObject <NSCopying, NSMutableCopying>
{
    IDEWorkspaceArenaSnapshot *_workspaceArenaSnapshot;
    NSString *_buildAction;
    IDESchemeCommand<IDEPrimitiveSchemeCommand> *_schemeCommand;
    NSString *_configurationName;
    IDERunDestination *_activeRunDestination;
    NSString *_activeArchitecture;
    IDEOverridingBuildProperties *_overridingProperties;
    NSString *_stateKey;
    unsigned long long _hash;
}

@property(readonly, copy) IDEOverridingBuildProperties *overridingProperties; // @synthesize overridingProperties=_overridingProperties;
@property(readonly, copy) NSString *activeArchitecture; // @synthesize activeArchitecture=_activeArchitecture;
@property(readonly) IDERunDestination *activeRunDestination; // @synthesize activeRunDestination=_activeRunDestination;
@property(readonly, copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly, copy) NSString *buildAction; // @synthesize buildAction=_buildAction;
@property(readonly, copy) IDEWorkspaceArenaSnapshot *workspaceArenaSnapshot; // @synthesize workspaceArenaSnapshot=_workspaceArenaSnapshot;
- (void).cxx_destruct;
- (id)dvt_detailedDebugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_componentPropertyNames;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyUsingTargetBuildParametersClass:(Class)arg1;
- (id)init;

@end

