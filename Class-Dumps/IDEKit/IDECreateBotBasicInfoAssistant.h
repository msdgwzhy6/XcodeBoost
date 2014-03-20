//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class DVTObservingToken, DVTStackView_ML, IDEAccountReachabilityToImageTransformer, IDECreateBotAssistantContext, IDEXcodeServerManager, NSArray, NSArrayController, NSButton, NSError, NSImage, NSPopUpButton, NSTextField, NSView;

@interface IDECreateBotBasicInfoAssistant : IDEAssistant
{
    DVTObservingToken *_serversObservingToken;
    DVTObservingToken *_scmDefinitionObservingToken;
    DVTObservingToken *_reachabilityObservingToken;
    BOOL _canCreateBotOnServer;
    BOOL _canCreateQueryComplete;
    BOOL _shouldHideServerWarningButton;
    BOOL _shouldFixScheme;
    BOOL _viewIsInstalled;
    NSPopUpButton *_serversPopup;
    NSPopUpButton *_schemesPopup;
    NSTextField *_botNameField;
    NSButton *_integrateImmediatelyCheckbox;
    DVTStackView_ML *_stackView;
    NSView *_controlsView;
    NSView *_schemeProblemView;
    NSTextField *_schemeProblemTextField;
    NSButton *_fixSchemeProblemCheckbox;
    NSArrayController *_schemesController;
    NSArray *_servers;
    NSImage *_warningImage;
    IDEAccountReachabilityToImageTransformer *_imageTransformer;
    long long _schemeValidity;
    NSError *_schemeError;
    long long _schemeRecoveryType;
}

+ (id)keyPathsForValuesAffectingShouldHideServerWarningButton;
+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(nonatomic) BOOL shouldFixScheme; // @synthesize shouldFixScheme=_shouldFixScheme;
@property(nonatomic) long long schemeRecoveryType; // @synthesize schemeRecoveryType=_schemeRecoveryType;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(retain, nonatomic) NSError *schemeError; // @synthesize schemeError=_schemeError;
@property(nonatomic) long long schemeValidity; // @synthesize schemeValidity=_schemeValidity;
@property(nonatomic) BOOL canCreateBotOnServer; // @synthesize canCreateBotOnServer=_canCreateBotOnServer;
@property(retain, nonatomic) IDEAccountReachabilityToImageTransformer *imageTransformer; // @synthesize imageTransformer=_imageTransformer;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) NSArrayController *schemesController; // @synthesize schemesController=_schemesController;
@property(retain) NSButton *fixSchemeProblemCheckbox; // @synthesize fixSchemeProblemCheckbox=_fixSchemeProblemCheckbox;
@property(retain) NSTextField *schemeProblemTextField; // @synthesize schemeProblemTextField=_schemeProblemTextField;
@property(retain) NSView *schemeProblemView; // @synthesize schemeProblemView=_schemeProblemView;
@property(retain) NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain) NSButton *integrateImmediatelyCheckbox; // @synthesize integrateImmediatelyCheckbox=_integrateImmediatelyCheckbox;
@property(retain) NSTextField *botNameField; // @synthesize botNameField=_botNameField;
@property(retain) NSPopUpButton *schemesPopup; // @synthesize schemesPopup=_schemesPopup;
@property(retain) NSPopUpButton *serversPopup; // @synthesize serversPopup=_serversPopup;
- (void).cxx_destruct;
- (void)showXcodeCIGuide:(id)arg1;
- (void)displayCannotCreateServerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayCannotCreateServerSheet:(id)arg1;
- (void)tryToObtainRepositoryAuthenticationStatus;
- (void)setSelectedServer:(id)arg1;
- (void)_checkCanCreateBots;
@property(readonly) IDEXcodeServerManager *serverManager;
- (void)selectServerInPopup:(id)arg1;
- (void)addNewServerAction:(id)arg1;
- (void)serverSelectedAction:(id)arg1;
- (void)_updateServersPopup;
- (void)_clearServersPopup;
- (void)textDidChange:(id)arg1;
- (void)fixSchemeProblem;
- (void)verifyIfSCMIsTrackingCurrentSelectedScheme;
- (void)schemePopUpAction:(id)arg1;
- (void)_fixupStackView;
- (void)_selectAssistantContextSchemeInPopUp;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)willGoNextOrFinish;
- (BOOL)canGoForward;
- (id)assistantTitle;
- (id)nextAssistantIdentifier;
@property(readonly) IDECreateBotAssistantContext *createBotAssistantContext;
- (void)primitiveInvalidate;

@end

