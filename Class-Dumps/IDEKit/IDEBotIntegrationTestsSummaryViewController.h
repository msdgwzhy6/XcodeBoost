//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, DVTReplacementView, IDEBotSupportingEditor, IDESchemeActionsInvocationRecord, NSDate, NSImageView, NSString, NSView;

@interface IDEBotIntegrationTestsSummaryViewController : IDEViewController
{
    DVTObservingToken *_viewFrameWatcher;
    unsigned long long _currentTileSize;
    int _overallStatus;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_commitString;
    IDEBotSupportingEditor *_botSupportingEditor;
    NSView *_tilePlaceholderView;
    NSString *_testsTotal;
    NSImageView *_testsTotalImageView;
    NSString *_testsPassed;
    NSImageView *_testsPassedImageView;
    NSString *_testsFailed;
    NSImageView *_testsFailedImageView;
    DVTReplacementView *_deviceSummaryReplacementView;
}

+ (id)keyPathsForValuesAffectingTestsSuccessImage;
+ (id)keyPathsForValuesAffectingTestsFailedImage;
+ (id)keyPathsForValuesAffectingOverallStatusImage;
+ (id)keyPathsForValuesAffectingTestsFailedString;
+ (id)keyPathsForValuesAffectingTestsFailedCountString;
+ (id)keyPathsForValuesAffectingTestsFailedCount;
+ (id)keyPathsForValuesAffectingTestsPassedString;
+ (id)keyPathsForValuesAffectingTestsPassedCountString;
+ (id)keyPathsForValuesAffectingTestsFailedTextColor;
+ (id)keyPathsForValuesAffectingTestsPassedTextColor;
+ (id)keyPathsForValuesAffectingTestsPassedCount;
+ (id)keyPathsForValuesAffectingTestsTotalString;
+ (id)keyPathsForValuesAffectingTestsTotalCountString;
+ (id)keyPathsForValuesAffectingTestsTotalCount;
+ (id)keyPathsForValuesAffectingEndDate;
+ (id)keyPathsForValuesAffectingStartDate;
+ (id)keyPathsForValuesAffectingStartDateString;
+ (id)keyPathsForValuesAffectingDurationString;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingCommitString;
+ (id)keyPathsForValuesAffectingBotExecution;
+ (id)keyPathsForValuesAffectingInvocationRecord;
@property(retain) DVTReplacementView *deviceSummaryReplacementView; // @synthesize deviceSummaryReplacementView=_deviceSummaryReplacementView;
@property(retain) NSImageView *testsFailedImageView; // @synthesize testsFailedImageView=_testsFailedImageView;
@property(copy, nonatomic) NSString *testsFailed; // @synthesize testsFailed=_testsFailed;
@property(retain) NSImageView *testsPassedImageView; // @synthesize testsPassedImageView=_testsPassedImageView;
@property(copy, nonatomic) NSString *testsPassed; // @synthesize testsPassed=_testsPassed;
@property(retain) NSImageView *testsTotalImageView; // @synthesize testsTotalImageView=_testsTotalImageView;
@property(copy, nonatomic) NSString *testsTotal; // @synthesize testsTotal=_testsTotal;
@property __weak NSView *tilePlaceholderView; // @synthesize tilePlaceholderView=_tilePlaceholderView;
@property(retain, nonatomic) IDEBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) NSString *commitString; // @synthesize commitString=_commitString;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) int overallStatus; // @synthesize overallStatus=_overallStatus;
- (void).cxx_destruct;
- (id)testsTotalImage;
- (id)testsSuccessImage;
- (id)testsFailedImage;
- (id)overallStatusImage;
- (id)testsFailedString;
- (id)testsFailedCountString;
- (unsigned long long)testsFailedCount;
- (id)testsPassedString;
- (id)testsPassedCountString;
- (id)testsFailedTextColor;
- (id)testsPassedTextColor;
- (unsigned long long)testsPassedCount;
- (id)testsTotalTextColor;
- (id)testsTotalString;
- (id)testsTotalCountString;
- (unsigned long long)testsTotalCount;
- (id)attributedStringWithImage:(id)arg1 label:(id)arg2;
- (id)statusLabelTextColor;
- (id)startDateString;
- (id)dateFormatter;
- (id)durationString;
- (id)duration;
- (id)botExecution;
- (id)tileWithStatusString:(id)arg1 leftTile:(id)arg2 tileCount:(unsigned long long)arg3 tileIndex:(unsigned long long)arg4;
- (void)updateTiles;
- (id)convertedIDEBotIntegrationTestRuns:(id)arg1;
- (void)processServerResponse:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *invocationRecord;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

@end

