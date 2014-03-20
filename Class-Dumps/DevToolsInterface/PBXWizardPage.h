//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSMapTable;

@interface PBXWizardPage : PBXModule
{
    PBXWizardPage *_parentPage;
    PBXWizardPage *_nextPage;
    SEL _parentNextPageSelector;
    NSMapTable *_userSettings;
    NSMapTable *_pageSettings;
    NSMapTable *_combinedSettings;
    struct {
        unsigned int wasRunFromUI:1;
        unsigned int RESERVED:31;
    } _wpFlags;
}

+ (id)page;
+ (id)pageWithParentPage:(id)arg1 parentNextPageSelector:(SEL)arg2;
+ (id)pageWithNextPage:(id)arg1;
+ (id)pageWithSettings:(id)arg1;
+ (id)pageWithSettings:(id)arg1 parentPage:(id)arg2 parentNextPageSelector:(SEL)arg3;
+ (id)pageWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3;
- (void)firstResponderWasSet:(id)arg1;
- (id)nextPage;
- (BOOL)wasRunFromUserInterface;
- (BOOL)hasChanged;
- (void)finish;
- (void)revert;
- (BOOL)validateSettings;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (BOOL)wantsChooseButton;
- (BOOL)canClose;
- (BOOL)canFinish;
- (BOOL)canProceed;
- (id)image;
- (id)label;
- (void)setupDefaultSettings;
- (void)clearSettings;
- (void)clearPageSettings;
- (void)clearUserSettings;
- (void)addSettingsFromDictionary:(id)arg1;
- (void)addPageSettingsFromDictionary:(id)arg1;
- (void)addUserSettingsFromDictionary:(id)arg1;
- (id)settingsAsDictionary;
- (id)pageSettingsAsDictionary;
- (id)userSettingsAsDictionary;
- (id)settings;
- (id)pageSettings;
- (id)userSettings;
- (void)removeValueForKey:(id)arg1;
- (void)removePageValueForKey:(id)arg1;
- (void)removeUserValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setPageValue:(id)arg1 forKey:(id)arg2;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)pageValueForKey:(id)arg1;
- (id)userValueForKey:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;
- (id)_nextPage;
- (id)_parentPage;
- (void)_finishFromUIInvocation;

@end

