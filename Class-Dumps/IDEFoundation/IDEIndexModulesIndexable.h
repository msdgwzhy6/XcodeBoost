//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEIndexable.h"

@interface IDEIndexModulesIndexable : NSObject <IDEIndexable>
{
}

+ (id)sharedInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)settingsForFile:(id)arg1;
- (id)buildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
- (id)localizedIndexableDescription;
- (void)languageOfMainFile:(id)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)requiresMainThread;
- (BOOL)writeProductHeaders:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)containerForIndexables:(id)arg1 rootPaths:(id)arg2;
- (id)indexableFiles;
- (id)indexName;
- (id)identifier;

// Remaining properties
@property(nonatomic) __weak id <IDEIndexable> proxy;

@end

