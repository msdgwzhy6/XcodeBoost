//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDEBotEditorIntegrationTestDetailScopeBarDelegate.h"
#import "IDEBotEditorTestDetailSelectionProtocol.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class DVTBorderedView, DVTLozengeTextField, DVTScopeBarsManager, IDEBotEditorIntegrationTestDetailScopeBar, IDEBotEditorIntegrationTestDetailWrapperView, IDEBotEditorIntegrationTestsViewController, IDENavBar, IDESchemeActionResult, NSMutableSet, NSString, NSView;

@interface IDEBotIntegrationTestsDetailsViewController : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, IDEBotEditorIntegrationTestDetailScopeBarDelegate, IDEBotEditorTestDetailSelectionProtocol>
{
    BOOL _scopeBarShowAllTests;
    IDEBotEditorIntegrationTestsViewController *_delegate;
    NSView *_progressWrapper;
    DVTLozengeTextField *_lozengeTextField;
    IDEBotEditorIntegrationTestDetailWrapperView *_wrapperView;
    DVTBorderedView *_switcherBorderedView;
    DVTScopeBarsManager *_scopeBarsManager;
    IDEBotEditorIntegrationTestDetailScopeBar *_logEditorScopeBar;
    NSString *_scopeBarSearchText;
    IDENavBar *_scopeBarsBaseView;
    IDESchemeActionResult *_actionResult;
    NSMutableSet *_testables;
}

+ (id)keyPathsForValuesAffectingOverallStatusImage;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *testables; // @synthesize testables=_testables;
@property(retain, nonatomic) IDESchemeActionResult *actionResult; // @synthesize actionResult=_actionResult;
@property(retain) IDENavBar *scopeBarsBaseView; // @synthesize scopeBarsBaseView=_scopeBarsBaseView;
@property BOOL scopeBarShowAllTests; // @synthesize scopeBarShowAllTests=_scopeBarShowAllTests;
@property(copy) NSString *scopeBarSearchText; // @synthesize scopeBarSearchText=_scopeBarSearchText;
@property(retain) IDEBotEditorIntegrationTestDetailScopeBar *logEditorScopeBar; // @synthesize logEditorScopeBar=_logEditorScopeBar;
@property(retain) DVTScopeBarsManager *scopeBarsManager; // @synthesize scopeBarsManager=_scopeBarsManager;
@property DVTBorderedView *switcherBorderedView; // @synthesize switcherBorderedView=_switcherBorderedView;
@property(retain) IDEBotEditorIntegrationTestDetailWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain) DVTLozengeTextField *lozengeTextField; // @synthesize lozengeTextField=_lozengeTextField;
@property(retain) NSView *progressWrapper; // @synthesize progressWrapper=_progressWrapper;
@property(nonatomic) __weak IDEBotEditorIntegrationTestsViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)testWasDoubleClicked:(id)arg1;
- (void)testWasClicked:(id)arg1;
- (void)runWasDoubleClicked:(id)arg1;
- (void)runWasClicked:(id)arg1;
- (void)logEditorScopeBar:(id)arg1 searchTextChanged:(id)arg2;
- (void)logEditorScopeBar:(id)arg1 showAllTests:(BOOL)arg2;
- (void)logEditorScopeBar:(id)arg1 stateChanged:(int)arg2;
- (void)_updateFilterPredicate;
- (id)convertedIDEBotIntegrationTestRuns:(id)arg1;
- (id)serverResponseWithDummyTestSummariesRemoved:(id)arg1;
- (int)currentSelectedIntegrationScopeBarState;
- (id)setWithTestTitlesFromServerResponse:(id)arg1;
- (id)loadDummyTestDetailData;
- (id)uniqueTitlesFromResponse:(id)arg1;
- (void)processServerResponse:(id)arg1;
- (void)loadTestDetailData;
- (void)setLozengeMessageAndRedrawUI:(id)arg1;
- (void)positionProgressWrapper:(id)arg1;
- (void)viewWillUninstall;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

@end

