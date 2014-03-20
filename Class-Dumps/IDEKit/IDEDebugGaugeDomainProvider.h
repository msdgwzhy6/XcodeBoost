//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemDomainProvider.h>

@class DVTObservingToken, IDEWorkspace;

@interface IDEDebugGaugeDomainProvider : IDENavigableItemDomainProvider
{
    IDEWorkspace *_workspace;
    DVTObservingToken *_workspaceStateObservingToken;
}

+ (id)domainObjectForWorkspace:(id)arg1;
+ (id)keyPathsForValuesAffectingGaugeNavigables;
+ (id)providerForWorkspace:(id)arg1;
+ (id)launchSessionFromURL:(id)arg1;
+ (id)URLForScheme:(id)arg1 launchSession:(id)arg2;
+ (id)URLForScheme:(id)arg1 launchSession:(id)arg2 otherQueryString:(id)arg3;
+ (void)initialize;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
- (id)gaugeNavigables;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end

