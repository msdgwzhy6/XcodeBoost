//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEStatusAndIssueCountsViewController;

@protocol IDEStatusAndIssueCountsViewControllerDelegate <NSObject>

@optional
- (void)testsFailedClickedInStatusAndIssueCountsViewController:(IDEStatusAndIssueCountsViewController *)arg1;
- (void)analyzerIssuesClickedInStatusAndIssueCountsViewController:(IDEStatusAndIssueCountsViewController *)arg1;
- (void)buildWarningsClickedInStatusAndIssueCountsViewController:(IDEStatusAndIssueCountsViewController *)arg1;
- (void)buildErrorsClickedInStatusAndIssueCountsViewController:(IDEStatusAndIssueCountsViewController *)arg1;
@end

