//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayerController.h"

#import "DVTInvalidation.h"
#import "IDEActivityPopUpContentLayerDelegate.h"
#import "IDEActivityViewDataConsumer.h"

@class DVTStackBacktrace, IDEActivityViewDataSource, IDEWorkspaceDocument, NSMapTable, NSMutableArray, NSMutableSet;

@interface IDEActivityPopUpContentLayerController : DVTLayerController <IDEActivityViewDataConsumer, IDEActivityPopUpContentLayerDelegate, DVTInvalidation>
{
    id <IDEActivityPopUpContentLayerControllerDelegate> _delegate;
    IDEWorkspaceDocument *_workspaceDocument;
    IDEActivityViewDataSource *_dataSource;
    NSMutableSet *_completedReportsToShowInPopUpAfterMinimumTimeHasExpired;
    NSMapTable *_strongReportsToStrongReportLayers;
    NSMutableArray *_orderedDisplayedReports;
    NSMutableSet *_completedReportsInPopUp;
    id <DVTCancellable> _botStatusUpdateToken;
    double _spaceNeededForMultiActionIndicator;
}

+ (void)initialize;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(retain) id <IDEActivityPopUpContentLayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void).cxx_destruct;
- (void)popUpContentLayer:(id)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)doneButtonWasClickedInPopUpContentLayer:(id)arg1;
- (void)activityViewDataSource:(id)arg1 countDidChangeForBotStatusCategory:(id)arg2;
- (void)activityViewDataSource:(id)arg1 workspaceRepresentingTypeStringDidChangeTo:(id)arg2;
- (void)activityViewDataSource:(id)arg1 issueCountDidChangeForIssueCategory:(id)arg2;
- (void)activityViewDataSource:(id)arg1 displayDelayTimeWasMetForActivityReport:(id)arg2;
- (void)activityViewDataSource:(id)arg1 minimumDisplayTimeWasMetForActivityReport:(id)arg2;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(id)arg1;
- (void)activityViewDataSource:(id)arg1 activityReportDidComplete:(id)arg2;
- (void)activityReportListDidChangeForActivityViewDataSource:(id)arg1;
- (void)makeReportInvisibleInPopUp:(id)arg1;
- (void)showCompletionStatusForCompletedReport:(id)arg1;
- (void)makeSureIssuesLayerIsVisible;
- (void)stopObservingActivityReports;
- (void)updateDisplayedReports;
- (void)addReportToPopUp:(id)arg1;
- (void)removeReportFromPopUp:(id)arg1;
@property(readonly) double preferredHeight;
- (id)activityReportLayerForReport:(id)arg1;
- (void)setActivityReportLayer:(id)arg1 forReport:(id)arg2;
- (id)layer;
- (void)primitiveInvalidate;
- (id)init;
- (void)loadLayer;
- (id)initWithWorkspaceDocument:(id)arg1 initialDataSource:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

