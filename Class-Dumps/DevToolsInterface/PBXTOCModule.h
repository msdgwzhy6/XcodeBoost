//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class NSMapTable, PBXExtendedOutlineView, PBXViewListView;

@interface PBXTOCModule : PBXModule <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    PBXExtendedOutlineView *_masterOutline;
    PBXViewListView *_detailViewList;
    id _dataSource;
    NSMapTable *_itemsToShownModules;
    struct {
        unsigned int observingWindow:1;
        unsigned int RESERVED:31;
    } _tocvFlags;
}

- (void)setSelectedProjectItems:(id)arg1;
- (id)selectedProjectItems;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)update;
- (void)takeUIConfigurationFromDictionary:(id)arg1;
- (void)addUIConfigurationToMutableDictionary:(id)arg1;
- (id)shownModules;
- (id)detailViewList;
- (id)masterOutline;
- (void)setDataSource:(id)arg1;
- (void)_dataSourceDidChangeFrom:(id)arg1;
- (void)_dataSourceWillChangeTo:(id)arg1;
- (id)dataSource;
- (void)finalize;
- (void)dealloc;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)_createOrDestroySubmodulesToMatchOutlineSelection;
- (void)_addItemTreeRootedAtItem:(id)arg1 toArray:(id)arg2;

@end

