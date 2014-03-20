//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEReviewFilesDataSource.h"

@class DVTStackBacktrace, IDENavigatorDataCell, IDESourceControlRepository, NSArray, NSMutableSet;

@interface IDESourceControlCommitViewerNavigatorDataSource : NSObject <IDEReviewFilesDataSource, DVTInvalidation>
{
    IDENavigatorDataCell *_cachedSourceTreeItemCell;
    IDENavigatorDataCell *_cachedRepositoryContainerCell;
    NSArray *_navigableItems;
    IDESourceControlRepository *_repository;
    NSMutableSet *_bindingTokens;
}

+ (void)initialize;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property(retain) NSArray *navigableItems; // @synthesize navigableItems=_navigableItems;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (id)repositoryContainerCell;
- (id)sourceTreeItemCell;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)issueNavigableItems;
- (id)flatNavigableItems;
- (id)fileSystemNavigableItems;
- (id)workspaceNavigableItems;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

