//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMutableArray;

@interface PBXWindowMenuHelper : NSObject <NSMenuDelegate>
{
    BOOL needsUniqueNames;
    NSMutableArray *projectArray;
}

+ (id)titleFromFullPathComponents:(id)arg1 displayCount:(long long)arg2;
+ (id)fileDirTitleSeparator;
+ (id)stringByReplacingChar:(unsigned short)arg1 withChar:(unsigned short)arg2 inString:(id)arg3;
+ (id)sharedWindowMenuHelper;
- (void)logTheMenuHelperProjectArrayContents;
- (void)_updateAllWindowMenus;
- (void)menuNeedsUpdate:(id)arg1;
- (void)updateAllWindowMenus;
- (void)updateWindowMenu:(id)arg1 withUniqueNames:(BOOL)arg2;
- (void)addProjectsToMenu:(id)arg1 withUniqueNames:(BOOL)arg2 invokingSelector:(SEL)arg3;
- (void)makeUniqueProjectNames;
- (id)uniqueMenuItemNamesForFullPaths:(id)arg1;
- (BOOL)getWMWindowInfo:(id)arg1 setProjectArrayItem:(id *)arg2 setIndexOfProjectArrayItem:(long long *)arg3 setWindowArrayItem:(id *)arg4 setIndexOfWindowArrayItem:(long long *)arg5;
- (BOOL)removeWMProjectWindowArrayItem:(id)arg1;
- (BOOL)updateWMProjectWindowArrayItem:(id)arg1;
- (id)addWMProjectWindowArrayItem:(id)arg1;
- (id)getWMProjectWindowArrayItem:(id)arg1;
- (BOOL)removeWMProjectArrayItemForIndex:(long long)arg1;
- (id)addWMProjectArrayItem:(id)arg1;
- (id)getWMProjectArrayItem:(id)arg1;
- (long long)indexOfProjectArrayItem:(id)arg1;
- (id)projectArrayItemForIndex:(long long)arg1;
- (long long)projectCount;
- (id)projectArray;
- (void)setNeedsUniqueNames:(BOOL)arg1;
- (BOOL)needsUniqueNames;
- (id)projectDocumentForWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

