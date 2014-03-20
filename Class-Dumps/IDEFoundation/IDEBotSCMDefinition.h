//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEBotWorkingTreeDefinition, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IDEBotSCMDefinition : NSObject
{
    NSMutableArray *_workingTreeDefinitions;
    NSMutableArray *_observingTokens;
    BOOL _infoIsComplete;
    IDEBotWorkingTreeDefinition *_workingTreeDefinitionForWorkspaceOrProject;
    NSString *_relativePathToWorkspaceOrProject;
}

+ (id)_botSCMDefinitionCreationLogAspect;
@property(readonly, nonatomic) BOOL infoIsComplete; // @synthesize infoIsComplete=_infoIsComplete;
@property(readonly, nonatomic) NSString *relativePathToWorkspaceOrProject; // @synthesize relativePathToWorkspaceOrProject=_relativePathToWorkspaceOrProject;
@property(readonly, nonatomic) IDEBotWorkingTreeDefinition *workingTreeDefinitionForWorkspaceOrProject; // @synthesize workingTreeDefinitionForWorkspaceOrProject=_workingTreeDefinitionForWorkspaceOrProject;
@property(readonly, nonatomic) NSArray *workingTreeDefinitions; // @synthesize workingTreeDefinitions=_workingTreeDefinitions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSameWorkspaceOrProjectAsSCMDefinition:(id)arg1;
- (id)scmInfoDictionary;
- (id)workingTreeDefinitionsForPropertyList;
@property(readonly, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithServer:(id)arg1 botExtendedAttributesDictionary:(id)arg2;
- (void)_getPathInfoForWorkingTrees:(id)arg1 commonAncestor:(id *)arg2;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;

@end

