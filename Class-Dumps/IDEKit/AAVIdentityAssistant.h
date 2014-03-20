//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/AAVAssistant.h>

#import "IDEArchivedApplicationsIdentityAssistant.h"

@class DVTNotificationToken, DVTStackView_ML, NSArray, NSButton, NSPopUpButton, NSTabView, NSTextField, NSView;

@interface AAVIdentityAssistant : AAVAssistant <IDEArchivedApplicationsIdentityAssistant>
{
    DVTNotificationToken *_identitiesObserver;
    _Bool _showImportDevProfileButtons;
    NSTabView *_tabView;
    NSTextField *_codesignIdentityLabel;
    NSPopUpButton *_codesignIdentityPopup;
    NSTextField *_identityErrorField;
    DVTStackView_ML *_containerView;
    NSButton *_devCenterButton;
    NSTextField *_devCenterDescription;
    NSPopUpButton *_applicationPopup;
    NSPopUpButton *_iapPopup;
    NSView *_importButtonSlice;
    NSView *_codesigningSlice;
    NSView *_inAppPurchaseSlice;
    NSView *_applicationSlice;
    NSArray *_sliceViewControllers;
}

+ (id)keyPathsForValuesAffectingWarningTabMessageDetails;
+ (id)keyPathsForValuesAffectingWarningTabMessage;
+ (id)keyPathsForValuesAffectingInstallerIdentityObject;
+ (id)keyPathsForValuesAffectingCodesignIdentityObject;
+ (id)keyPathsForValuesAffectingSelectedIapRecord;
+ (id)keyPathsForValuesAffectingIapRecords;
+ (id)keyPathsForValuesAffectingSelectedApplicationDescription;
+ (id)keyPathsForValuesAffectingSelectedApplication;
+ (id)keyPathsForValuesAffectingMultipleApplications;
+ (id)keyPathsForValuesAffectingApplications;
@property _Bool showImportDevProfileButtons; // @synthesize showImportDevProfileButtons=_showImportDevProfileButtons;
@property(retain) NSArray *sliceViewControllers; // @synthesize sliceViewControllers=_sliceViewControllers;
@property(retain) NSView *applicationSlice; // @synthesize applicationSlice=_applicationSlice;
@property(retain) NSView *inAppPurchaseSlice; // @synthesize inAppPurchaseSlice=_inAppPurchaseSlice;
@property(retain) NSView *codesigningSlice; // @synthesize codesigningSlice=_codesigningSlice;
@property(retain) NSView *importButtonSlice; // @synthesize importButtonSlice=_importButtonSlice;
@property(retain) NSPopUpButton *iapPopup; // @synthesize iapPopup=_iapPopup;
@property(retain) NSPopUpButton *applicationPopup; // @synthesize applicationPopup=_applicationPopup;
@property NSTextField *devCenterDescription; // @synthesize devCenterDescription=_devCenterDescription;
@property NSButton *devCenterButton; // @synthesize devCenterButton=_devCenterButton;
@property DVTStackView_ML *containerView; // @synthesize containerView=_containerView;
@property(retain) NSTextField *identityErrorField; // @synthesize identityErrorField=_identityErrorField;
@property(retain) NSPopUpButton *codesignIdentityPopup; // @synthesize codesignIdentityPopup=_codesignIdentityPopup;
@property(retain) NSTextField *codesignIdentityLabel; // @synthesize codesignIdentityLabel=_codesignIdentityLabel;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (void)_takeIdentityFrom:(id)arg1;
- (void)_updateIdentityUI;
- (void)_delayedUpdateIdentityUI;
- (id)assistantTitle;
- (void)primitiveInvalidate;
- (void)willGoNextOrFinish;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)finishButtonTitle;
- (BOOL)alwaysShowFinish;
- (id)identitySliceExtensions;
- (void)showImportHelp:(id)arg1;
- (void)importProfile:(id)arg1;
- (void)connectToDevCenter:(id)arg1;
- (id)warningTabMessageDetails;
- (id)warningTabMessage;
@property(readonly) id <IDEArchivePackagerIdentityToken> installerIdentityObject;
@property(retain) id <IDEArchivePackagerIdentityToken> codesignIdentityObject;
- (_Bool)_directDistribution;
@property(readonly) _Bool supportsInstallerSigning;
@property(readonly) _Bool supportsCodeSigning;
- (void)setSelectedIapRecord:(id)arg1;
- (id)selectedIapRecord;
@property(readonly, copy) NSArray *iapRecords;
- (id)selectedApplicationDescription;
- (void)setSelectedApplication:(id)arg1;
- (id)selectedApplication;
- (BOOL)multipleApplications;
@property(readonly, copy) NSArray *applications;

@end

