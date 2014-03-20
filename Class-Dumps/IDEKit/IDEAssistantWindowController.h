//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class DVTBorderedView, DVTStackView_ML, IDEAssistant, IDEAssistantContext, NSBox, NSButton, NSImageView, NSMutableArray, NSString, NSTextField, NSView;

@interface IDEAssistantWindowController : NSWindowController
{
    NSBox *_box;
    DVTBorderedView *_borderedView;
    DVTBorderedView *_sourceListBorderedView;
    DVTStackView_ML *_buttonStackView;
    NSMutableArray *_assistantHistory;
    NSButton *_nextButton;
    NSButton *_backButton;
    NSButton *_cancelButton;
    NSTextField *_titleField;
    IDEAssistant *_currentAssistant;
    IDEAssistant *_installedAssistant;
    IDEAssistantContext *_assistantContext;
    CDUnknownBlockType _currentCompletionBlock;
    double _lastAnimationDirection;
    NSImageView *_boxImageView;
    NSImageView *_titleFieldImageView;
    NSImageView *_cancelButtonImageView;
    NSImageView *_sourceListImageView;
    NSView *_nextKeyView;
    NSMutableArray *_allAnimations;
    _Bool _backtrackingFromOverlayAssistant;
    _Bool _closing;
    NSString *_nextButtonTitle;
    NSString *_finishButtonTitle;
}

+ (id)keyPathsForValuesAffectingAssistantTitle;
+ (id)keyPathsForValuesAffectingForwardOrFinishButtonTitle;
+ (id)keyPathsForValuesAffectingCanCancel;
+ (id)keyPathsForValuesAffectingCanGoForwardOrFinish;
+ (id)keyPathsForValuesAffectingOnFirstAssistant;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle=_finishButtonTitle;
@property(retain, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(readonly, nonatomic) IDEAssistant *currentAssistant; // @synthesize currentAssistant=_currentAssistant;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)cleanUpAnimationForView:(id)arg1;
- (void)configureAnimationImageViewWithDirection:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)setupAccessoriesForAssistant:(id)arg1 animated:(BOOL)arg2;
- (id)imageForView:(id)arg1 bordered:(BOOL)arg2;
- (void)setAnimationDuration;
- (void)cancelSession;
- (void)goBack:(id)arg1;
- (void)ensureImageViewsConfigured;
- (void)setUpOverlayForAssistantWithIdentifier:(id)arg1;
- (void)_finishWithAction:(id)arg1;
- (void)goNextOrFinish:(id)arg1;
- (void)addAnimationForKey:(id)arg1 toView:(id)arg2;
- (id)skipAheadIfPossibleAndReturnAssistantIdentifier;
- (void)didInstallViewController:(id)arg1;
- (void)willInstallViewController:(id)arg1;
- (id)assistantTitle;
- (id)forwardOrFinishButtonTitle;
- (BOOL)canGoForwardOrFinish;
- (BOOL)canCancel;
- (BOOL)canGoBack;
- (BOOL)onFirstAssistant;
- (id)_popAssistantHistoryStack;
- (void)_pushAssistantOntoHistoryStack:(id)arg1;
- (void)_clearAssistantHistoryStack;
- (void)endAssistantSessionWithResult:(int)arg1 error:(id)arg2;
- (void)beginSessionForWorkspaceWindow:(id)arg1;
- (void)beginSessionWithAssistantIdentifier:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)assistantWithIdentifier:(id)arg1;
- (void)close;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;
- (void)setCurrentAssistant:(id)arg1 andInstallView:(BOOL)arg2;
- (void)setCurrentAssistant:(id)arg1;

@end

