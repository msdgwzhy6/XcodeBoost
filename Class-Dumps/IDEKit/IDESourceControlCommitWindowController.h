//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import "IDENavigableItemCoordinatorDelegate.h"

@class DVTBorderedView, DVTObservingToken, DVTTextViewWithPlaceholder, IDESourceControlPushOperationInfo, IDESourceControlRepositoryChooserItem, IDESourceControlReviewFilesDataSource, IDESourceControlWorkspaceUIHandler, NSArray, NSButton, NSImageView, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSPopUpButton, NSSplitView, NSString, NSTextField;

@interface IDESourceControlCommitWindowController : IDESourceControlReviewFilesWindowController <IDENavigableItemCoordinatorDelegate>
{
    NSSplitView *_splitView;
    DVTTextViewWithPlaceholder *_commitMessageTextView;
    NSButton *_commitButton;
    NSButton *_cancelButton;
    DVTBorderedView *_reviewFilesView;
    DVTBorderedView *_contentView;
    DVTBorderedView *_textViewBorderedView;
    NSImageView *_issuesCountImageView;
    NSTextField *_issuesCountTextField;
    NSButton *_enablePushCheckbox;
    NSPopUpButton *_remotesPopUpButton;
    NSString *_commitMessage;
    IDESourceControlReviewFilesDataSource *_workspaceDataSource;
    IDESourceControlReviewFilesDataSource *_fileSystemDataSource;
    IDESourceControlReviewFilesDataSource *_flatDataSource;
    struct dispatch_semaphore_s *_multipleFileSaveWaiter;
    NSMutableArray *_distributedWorkingTrees;
    NSArray *_pushOperationInfos;
    NSOperationQueue *_pushOperationQueue;
    NSMutableDictionary *_pushTokenDictionary;
    BOOL _shouldEnablePushButtons;
    DVTObservingToken *_checkedFilePathsToken2;
    IDESourceControlRepositoryChooserItem *_repositoryChooserItem;
    IDESourceControlPushOperationInfo *_singlePushOperationInfo;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    NSArray *_forcedPushOperationInfos;
    CDUnknownBlockType _commitWindowCompletionBlock;
}

+ (id)sourceControlCommitWindowLogAspect;
@property(copy) CDUnknownBlockType commitWindowCompletionBlock; // @synthesize commitWindowCompletionBlock=_commitWindowCompletionBlock;
@property(retain) NSArray *forcedPushOperationInfos; // @synthesize forcedPushOperationInfos=_forcedPushOperationInfos;
@property(retain) IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property(retain) IDESourceControlPushOperationInfo *singlePushOperationInfo; // @synthesize singlePushOperationInfo=_singlePushOperationInfo;
@property(retain) IDESourceControlRepositoryChooserItem *repositoryChooserItem; // @synthesize repositoryChooserItem=_repositoryChooserItem;
@property(copy) NSString *commitMessage; // @synthesize commitMessage=_commitMessage;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)cancel:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)teardown;
- (void)teardownTemporaryPushOperationInfos;
- (void)commit:(id)arg1;
- (void)_pushOperationInfos:(id)arg1 forWorkingTreesCommittedSuccessfully:(id)arg2;
- (void)setupPushWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_performPreCommitOperation:(int)arg1 onFiles:(id)arg2;
- (void)_commit;
- (void)finishInteractiveCommitForFiles:(id)arg1;
- (void)startInteractiveCommitForFiles:(id)arg1;
- (void)handleErrors:(id)arg1 forRequestsOfType:(int)arg2;
- (BOOL)shouldEnableCommitButton;
- (BOOL)commitMessageRequiredForSourceTrees:(id)arg1;
- (void)saveFilesAtFilePaths:(id)arg1;
- (unsigned long long)countOfCheckedItems;
- (unsigned long long)countOfItemsThatCanBeCommitted;
- (id)defaultDisabledFilePaths;
- (BOOL)_checkWorkingTreeItemStatusForDefaultDisabledPath:(id)arg1;
- (id)defaultCheckedFilePaths;
- (BOOL)_checkWorkingTreeItemStatusForDefaultCheckedPath:(id)arg1;
- (void)updateCommitAndPush:(id)arg1;
- (void)_updateCommitButton;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (id)navigableItem:(id)arg1 childRepresentedObjectsForArray:(id)arg2;
- (id)workingTreeWithLocation:(id)arg1;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
- (void)beginStatusUpdate;
- (void)warnToUpdateBeforeCommitting;
- (void)populateCommitAndPush;
- (void)beginSheetForWindow:(id)arg1;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (void)selectRepository:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleAllowCommit;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

@end

