//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPopoverDelegate.h"

@class DVTObservingToken, NSButton, NSImageView, NSLayoutConstraint, NSPopover, NSProgressIndicator, NSTextField, NSView;

@interface IDEVariablesViewQuickLookPopover : NSViewController <NSPopoverDelegate>
{
    id <IDEVariablesViewQuickLookProvider> _quickLookProvider;
    DVTObservingToken *_quickLookProviderIsReadyObserver;
    id <IDEDataValue> _dataValue;
    BOOL _popoverIsAnimatingIn;
    BOOL _quickLookProviderDidFinishLoadingWasDeferred;
    int _openWithExternalEditorSupport;
    NSPopover *_popover;
    NSViewController *_defaultViewController;
    NSImageView *_defaultQuickLookIcon;
    NSViewController *_quickLookProviderViewController;
    NSImageView *_quickLookViewIcon;
    NSTextField *_quickLookViewTitle;
    NSButton *_quickLookOpenWithEditorButton;
    NSView *_quickLookViewContainer;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_errorMessageLabel;
    NSLayoutConstraint *_quickLookViewContainerDefaultWidth;
    NSLayoutConstraint *_quickLookViewContainerDefaultHeight;
}

@property(retain) NSLayoutConstraint *quickLookViewContainerDefaultHeight; // @synthesize quickLookViewContainerDefaultHeight=_quickLookViewContainerDefaultHeight;
@property(retain) NSLayoutConstraint *quickLookViewContainerDefaultWidth; // @synthesize quickLookViewContainerDefaultWidth=_quickLookViewContainerDefaultWidth;
@property(retain) NSTextField *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSView *quickLookViewContainer; // @synthesize quickLookViewContainer=_quickLookViewContainer;
@property(retain) NSButton *quickLookOpenWithEditorButton; // @synthesize quickLookOpenWithEditorButton=_quickLookOpenWithEditorButton;
@property(retain) NSTextField *quickLookViewTitle; // @synthesize quickLookViewTitle=_quickLookViewTitle;
@property(retain) NSImageView *quickLookViewIcon; // @synthesize quickLookViewIcon=_quickLookViewIcon;
@property(retain) NSViewController *quickLookProviderViewController; // @synthesize quickLookProviderViewController=_quickLookProviderViewController;
@property(retain) NSImageView *defaultQuickLookIcon; // @synthesize defaultQuickLookIcon=_defaultQuickLookIcon;
@property(retain) NSViewController *defaultViewController; // @synthesize defaultViewController=_defaultViewController;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) id <IDEDataValue> dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_cancelLoadingOfCurrentQuickLookProviderIfNecessary;
- (id)_createNonExistentFilePath;
- (void)_openURLInExternalEditor:(id)arg1;
- (void)_writeToTemporaryURLThenOpenIt;
- (void)openWithEditor:(id)arg1;
- (void)_setViewControllerWithoutAnimationAndWithoutChangingFirstResponder:(id)arg1;
- (void)_useViewController:(id)arg1 forDataValue:(id)arg2;
- (void)useDefaultQuickLookForDataValue:(id)arg1 usingIcon:(id)arg2;
- (id)_externalApplicationURL;
- (void)_setupOpenWithExternalEditorButton;
- (void)_quickLookProviderDidFinishLoading;
- (void)useQuickLookProvider:(id)arg1 forDataValue:(id)arg2 usingIcon:(id)arg3;
- (void)dealloc;
- (id)init;

@end

