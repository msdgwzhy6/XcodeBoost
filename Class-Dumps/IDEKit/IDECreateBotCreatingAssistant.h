//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class DVTColoredSpinner, IDECreateBotAssistantContext, NSImage, NSString, NSTimer;

@interface IDECreateBotCreatingAssistant : IDEAssistant
{
    BOOL _canCancel;
    BOOL _credentialsHaveBeenUploaded;
    BOOL _updatingBot;
    NSTimer *_minimumProgressIndicatorDurationTimer;
    NSTimer *_dismissAssistantTimer;
    DVTColoredSpinner *_coloredSpinner;
}

+ (id)keyPathsForValuesAffectingCompletedAndWaitedMinimumDuration;
+ (id)keyPathsForValuesAffectingStatusText;
+ (id)keyPathsForValuesAffectingStatusImage;
+ (id)keyPathsForValuesAffectingCanFinish;
+ (id)keyPathsForValuesAffectingStatusSubtext;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(nonatomic) BOOL updatingBot; // @synthesize updatingBot=_updatingBot;
@property DVTColoredSpinner *coloredSpinner; // @synthesize coloredSpinner=_coloredSpinner;
@property(retain, nonatomic) NSTimer *dismissAssistantTimer; // @synthesize dismissAssistantTimer=_dismissAssistantTimer;
@property(retain, nonatomic) NSTimer *minimumProgressIndicatorDurationTimer; // @synthesize minimumProgressIndicatorDurationTimer=_minimumProgressIndicatorDurationTimer;
@property(nonatomic) BOOL credentialsHaveBeenUploaded; // @synthesize credentialsHaveBeenUploaded=_credentialsHaveBeenUploaded;
@property(nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
- (void).cxx_destruct;
- (void)willGoNextOrFinish;
- (void)_dismissAssistant;
@property(readonly, nonatomic) BOOL completedAndWaitedMinimumDuration;
- (void)mergeAuthenticationCredentials;
- (void)_clearMinimumProgressIndicatorDurationTimer;
- (void)_handleCommitAndIntegrateOptionsWithCreateBotAssistantContext:(id)arg1;
- (void)_createBotWithBotExtendedAttributes:(id)arg1;
- (id)_scmInfoDictionary;
@property(readonly, nonatomic) NSString *statusText;
@property(readonly, nonatomic) NSImage *statusImage;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)viewWillUninstall;
- (void)uploadRepositoriesNeedingAuthentication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidInstall;
@property(readonly, nonatomic) NSString *statusSubtext;
- (id)assistantTitle;
@property(readonly) IDECreateBotAssistantContext *createBotAssistantContext;

@end

