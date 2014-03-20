//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import "NSOutlineViewDelegate.h"

@class NSArray, NSArrayController, NSOutlineView, NSSplitView, NSString, NSTableView, NSTreeController, NSView, XCDiffScrollView, XCDiffTextComparatorView, XCMultiDirectoryChangeSet;

@interface XCSnapshotModule : PBXProjectModule <NSOutlineViewDelegate>
{
    NSString *_name;
    NSArray *_snapshotPaths;
    NSString *_binderDirectory;
    NSArrayController *snapshotsArrayController;
    XCMultiDirectoryChangeSet *_changeSet;
    XCMultiDirectoryChangeSet *_displayedChangeSet;
    NSArray *_removedFiles;
    NSArray *_changedFiles;
    NSArray *_addedFiles;
    NSArrayController *_removedFilesArrayController;
    NSArrayController *_changedFilesArrayController;
    NSArrayController *_addedFilesArrayController;
    NSTreeController *_changedFilesTreeController;
    NSTableView *_snapshotTable;
    NSTableView *_removedFilesTable;
    NSTableView *_changedFilesTable;
    NSTableView *_addedFilesTable;
    NSOutlineView *_changedFilesOutline;
    NSArray *_changedFilesRoot;
    NSString *_snapshotsStatus;
    NSString *_changedFilesStatus;
    NSString *_diffStatus;
    NSString *_selectedSource;
    XCDiffTextComparatorView *_comparatorView;
    XCDiffScrollView *_diffScrollView;
    NSView *_wrapperView;
    NSSplitView *_splitViewMain;
    NSSplitView *_splitViewLeft;
    NSSplitView *_splitViewRight;
    NSView *_viewTopLeft;
    NSView *_viewBottomLeft;
    NSView *_viewTopRight;
    NSView *_viewBottomRight;
    BOOL _filesShown;
    BOOL _diffShown;
    BOOL _outline;
    BOOL _observersActive;
    BOOL _isRestoringSnapshot;
}

+ (void)_endSnapshotModalSession:(id)arg1;
+ (void)removeReferencesToOrganizerRoot:(id)arg1;
+ (id)makeSnapshotForOrganizerRoot:(id)arg1 name:(id)arg2;
+ (id)makeSnapshotForProjectDocument:(id)arg1 name:(id)arg2;
+ (id)makeSnapshotWithName:(id)arg1 forProjectDocument:(id)arg2 enablePredictiveSnapshot:(BOOL)arg3;
+ (id)makeSnapshotWithName:(id)arg1 forProject:(id)arg2 atPaths:(id)arg3 enablePredictiveSnapshot:(BOOL)arg4;
+ (id)nameForSnapshot:(id)arg1 withSource:(id)arg2;
+ (void)runSnapshotFailedAlertPanelWithErrorMessage:(id)arg1;
+ (BOOL)saveEditedDocumentsForProjectDocument:(id)arg1;
+ (BOOL)filesContainsProject:(id)arg1;
+ (void)_runModalLoopWithTitle:(id)arg1 andLabel:(id)arg2 forSnapshot:(id)arg3;
- (id)_makeSnapshotWithName:(id)arg1 enablePredictiveSnapshot:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)keyDown:(id)arg1;
- (BOOL)_changedFilesOutlineHasPathAtRowIndex:(long long)arg1;
- (void)_selectChangedFilesOutlineRow:(long long)arg1;
- (BOOL)loadView;
- (void)_updateViewConfiguration;
- (void)_setMainView:(id)arg1;
- (void)_configureSplitView:(id)arg1 first:(id)arg2 second:(id)arg3;
- (void)_setHeight:(double)arg1 forView:(id)arg2;
- (void)_setWidth:(double)arg1 forView:(id)arg2;
- (BOOL)_removeSubviewsExceptFirst:(long long)arg1 from:(id)arg2;
- (void)_createFilesOutlineView;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)_snapshotDetailView;
- (void)_debug:(id)arg1;
- (void)_addLine:(id)arg1 key:(id)arg2 face:(id)arg3 editable:(BOOL)arg4;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_diffDescriptorListener:(id)arg1;
- (void)_scrollDiffHunkToVisible;
- (void)setDiffStatus:(id)arg1;
- (id)diffStatus;
- (void)setChangedFilesStatus:(id)arg1;
- (id)changedFilesStatus;
- (void)setSnapshotsStatus:(id)arg1;
- (id)snapshotsStatus;
- (void)_updateStatusBar;
- (void)setAddedFiles:(id)arg1;
- (id)addedFiles;
- (void)setChangedFiles:(id)arg1;
- (id)changedFiles;
- (void)setRemovedFiles:(id)arg1;
- (id)removedFiles;
- (void)setDisplayedChangeSet:(id)arg1;
- (id)displayObjectForBannerWithName:(id)arg1 children:(id)arg2;
- (id)displayObjectForFileWithPath:(id)arg1 inChangeSet:(id)arg2;
- (id)displayedChangeSet;
- (void)setChangeSet:(id)arg1;
- (id)changeSet;
- (void)showFileModifications:(id)arg1;
- (void)_clearDiffViewWithMessage:(id)arg1;
- (void)showChanges:(id)arg1;
- (void)_displayMessageForChangedFilesTable:(id)arg1;
- (void)setChangedFilesRoot:(id)arg1;
- (id)changedFilesRoot;
- (void)cancelAction:(id)arg1;
- (void)_projectRootChanged:(id)arg1;
- (void)_scanCompleted:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)_confirmDeleteSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showSnapshotFileDiff:(id)arg1;
- (void)showSnapshotChangedFiles:(id)arg1;
- (void)restoreSnapshot:(id)arg1;
- (void)_restoreSnapshotWithFiles:(id)arg1 snapshot:(id)arg2 closeAndReopenProject:(BOOL)arg3;
- (void)_reopenProjectAtPath:(id)arg1 withFiles:(id)arg2;
- (BOOL)_closeProject;
- (void)_restoreAddedFiles:(id)arg1 toProjectDocument:(id)arg2;
- (void)makeSnapshot:(id)arg1;
- (id)snapshotManager;
- (void)moduleWindowWillClose:(id)arg1;
- (void)moduleWasDisplayed;
- (void)_removeObservers;
- (void)_addObservers;
- (void)setBinderDirectory:(id)arg1;
- (id)binderDirectory;
- (void)setSnapshotPaths:(id)arg1;
- (id)snapshotPaths;
- (void)setName:(id)arg1;
- (id)name;
- (void)windowWillShow;
- (void)_snapshotsWindowDidBecomeMain:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)becomeActive;
- (void)viewDidLoad;
- (void)showSnapshots;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)_updateToolbar;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (id)_toolBarItemArray;
- (id)label;
- (void)_setIsRestoringSnapshot:(BOOL)arg1;
- (BOOL)_isRestoringSnapshot;

@end

