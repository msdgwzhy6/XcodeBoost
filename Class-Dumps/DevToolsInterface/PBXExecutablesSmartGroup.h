//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXSmartGroup.h>

@interface PBXExecutablesSmartGroup : PBXSmartGroup
{
}

+ (id)globalID;
- (id)_proxyForExecutable:(id)arg1;
- (void)deleteApplicableElements:(id)arg1 fromOutlineView:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)acceptsDraggedItem:(id)arg1;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)acceptsItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)allowsEditingOfChildren;
- (BOOL)openWithProjectDocument:(id)arg1;
- (id)children;
- (Class)datasourceClass;
- (id)datasource;
- (void)_activeExecutableChanged:(id)arg1;
- (void)_projectItemsChanged:(id)arg1;
- (void)_executableWasAdded:(id)arg1;
- (void)_executableWillBeRemoved:(id)arg1;
- (void)dealloc;
- (id)initWithBinding:(id)arg1;

@end

