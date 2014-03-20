//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

@class NSMutableArray, PBXFileNavigator, PBXSplitviewModule;

@interface PBXNavigatorGroup : PBXProjectModule
{
    PBXSplitviewModule *_splitModule;
    PBXFileNavigator *_lastActiveNavigator;
    struct {
        unsigned int isSeparateNavigatorGroup:1;
        unsigned int observingWindowController:1;
        unsigned int hasExplicitProjectDocument:1;
        unsigned int filePopUpBookmarksInvalid:1;
        unsigned int autoLoadOnSelection:1;
        unsigned int RESERVED:28;
    } _ngFlags;
    id _topLevelResponder;
    NSMutableArray *_filePopUpBookmarks;
    BOOL _isHeaderSplitControlVisible;
    BOOL _isSeparateEditorStatusBarVisible;
    int _debuggerBarPermanentVisibility;
}

+ (BOOL)statusBarIsVisible;
+ (void)setStatusBarIsVisible:(BOOL)arg1;
+ (id)windowDefaultFrame;
+ (void)setWindowDefaultFrame:(id)arg1;
+ (id)separateNavigatorWithBookmark:(id)arg1 belongingToProject:(id)arg2;
+ (id)separateNavigatorWithFileDocument:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)separateNavigatorWithBookmark:(id)arg1 createIfNeeded:(BOOL)arg2 projectDocument:(id)arg3;
+ (id)separateNavigatorWithBookmark:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)makeNewSeparateNavigatorWithFileDocument:(id)arg1;
+ (id)makeNewSeparateNavigatorWithBookmark:(id)arg1 projectDocument:(id)arg2;
+ (id)makeNewSeparateNavigatorWithBookmark:(id)arg1;
+ (id)makeNewSeparateNavigatorWithGroup:(id)arg1 focusedOnBookmark:(id)arg2 projectDocument:(id)arg3;
+ (id)makeNewSeparateNavigatorWithGroup:(id)arg1 focusedOnBookmark:(id)arg2 projectDocument:(id)arg3 usePinning:(BOOL)arg4;
+ (id)docsToCloseIfNavigatorGroupsAreClosed:(id)arg1;
+ (BOOL)remembersSeparateNavigatorWindowLocations;
+ (void)unregisterSeparateNavigatorGroup:(id)arg1;
+ (void)registerSeparateNavigatorGroup:(id)arg1;
+ (id)allSeparateNavigatorGroups;
+ (void)initialize;
@property int debuggerBarPermanentVisibility; // @synthesize debuggerBarPermanentVisibility=_debuggerBarPermanentVisibility;
- (void)saveUserDefaultConfiguration;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (id)cloneInDock;
- (BOOL)canCloneInDock;
- (BOOL)autoLoadsOnSelection;
- (void)setAutoLoadsOnSelection:(BOOL)arg1;
- (id)keyTabView;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (void)takeContentConfigurationFromDictionary:(id)arg1 forSharingKey:(id)arg2;
- (id)contentConfigurationDictionary;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (void)_pinnedEditorDidChange:(id)arg1;
- (void)togglePinMode:(id)arg1;
- (void)pin;
- (BOOL)isPinned;
- (id)slideOutTabIconImage;
- (void)invalidateFilePopUpBookmarks;
- (id)filePopUpBookmarks;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (BOOL)isDocumentModule;
- (id)representedFilename;
- (id)label;
- (void)setLabel:(id)arg1 representedFilename:(id)arg2;
- (void)setLabelAsFilename:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (void)openInSeparateNavigator:(id)arg1;
- (void)closeCurrentNavigator:(id)arg1;
- (void)splitCurrentNavigator:(id)arg1;
- (void)toggleNavigationBarVisible:(id)arg1;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (void)switchToCounterpartOfCurrentFile:(id)arg1;
- (void)clearBookmarks:(id)arg1;
- (void)previousBookmark:(id)arg1;
- (void)nextBookmark:(id)arg1;
- (void)closeCurrentFile:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (id)localModuleActions;
- (BOOL)isSeparateNavigatorGroup;
- (void)setProjectDocument:(id)arg1;
- (void)invalidateAllFileNavigators;
- (id)fileNavigatorEditingBookmark:(id)arg1;
- (id)fileNavigatorForDocument:(id)arg1;
- (id)lastActiveFileNavigator;
- (id)firstFileNavigator;
- (id)fileNavigators;
- (id)mainEditor;
- (BOOL)canCloseNavigator:(id)arg1;
- (void)closeNavigator:(id)arg1;
- (void)splitNavigator:(id)arg1;
- (void)splitNavigator:(id)arg1 verticalBias:(BOOL)arg2 horizontalBias:(BOOL)arg3;
- (BOOL)isHeaderSplitControlVisible;
- (void)setHeaderSplitControlVisible:(BOOL)arg1;
- (void)resetHeaders;
- (void)_splitNavigator:(id)arg1;
- (void)becomeActive;
- (void)_navigatorDidLoadFileDocument:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_setBookmarkOnActiveNavigator:(id)arg1;
- (void)_xcSelectionDidChange:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)moduleWasHiddenByUser;
- (void)moduleWasExposedByUser;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (BOOL)loadView;
- (void)setWantsModuleWindow:(BOOL)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)dealloc;
- (void)closeModule;
- (BOOL)moduleShouldClose;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillShow;
- (void)moduleWindowWillClose:(id)arg1;
- (void)_closeSeparateNavigatorGroup;

@end

