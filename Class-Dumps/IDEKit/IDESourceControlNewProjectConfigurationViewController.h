//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IDEXcodeServer, NSArray, NSButton, NSImage, NSPopUpButton, NSString;

@interface IDESourceControlNewProjectConfigurationViewController : IDEViewController
{
    NSPopUpButton *_serverPopup;
    IDEXcodeServer *_selectedServer;
    DVTObservingToken *_serversObservingToken;
    NSButton *_serverWarningButton;
    BOOL _enableCreateLocalRepository;
    BOOL _shouldCreateLocalRepository;
    BOOL _shouldCreateLocalRepositoryTemporaryValue;
    NSString *_repositoryCreationMessage;
    BOOL _shouldHideServerWarningButton;
    BOOL _canCreateQueryComplete;
    BOOL _canCreateRepositoryOnServer;
    NSArray *_servers;
    NSImage *_warningImage;
}

+ (id)keyPathsForValuesAffectingShouldHideServerWarningButton;
+ (id)keyPathsForValuesAffectingServerInErrorState;
+ (id)defaultViewNibName;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
@property(nonatomic) BOOL canCreateRepositoryOnServer; // @synthesize canCreateRepositoryOnServer=_canCreateRepositoryOnServer;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) IDEXcodeServer *selectedServer; // @synthesize selectedServer=_selectedServer;
@property(copy) NSString *repositoryCreationMessage; // @synthesize repositoryCreationMessage=_repositoryCreationMessage;
@property(nonatomic) BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property BOOL enableCreateLocalRepository; // @synthesize enableCreateLocalRepository=_enableCreateLocalRepository;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)createGitRepositoryWithFilePath:(id)arg1 workspaceUIHandler:(id)arg2;
- (void)updateDirectoryURL:(id)arg1;
- (void)displayCannotCreateRepositorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayCannotCreateRepositorySheet:(id)arg1;
- (BOOL)testSelectedServer;
- (void)_checkCanCreateRepository;
- (void)addNewServerAction:(id)arg1;
- (void)myMacAction:(id)arg1;
- (void)serverSelectedAction:(id)arg1;
- (void)selectServer:(id)arg1;
- (void)_updateServersPopup;
- (void)_clearServersPopup;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(readonly, nonatomic) BOOL selectedServerInErrorState; // @dynamic selectedServerInErrorState;

@end

