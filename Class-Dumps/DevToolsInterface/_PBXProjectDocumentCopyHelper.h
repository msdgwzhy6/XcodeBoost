//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSString;

@interface _PBXProjectDocumentCopyHelper : NSObject <NSOpenSavePanelDelegate>
{
    NSString *_projectPath;
    NSString *_projectDirectory;
}

- (id)chooseNewProjectName;
- (void)panel:(id)arg1 directoryDidChange:(id)arg2;
- (BOOL)panel:(id)arg1 isValidFilename:(id)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (void)dealloc;
- (id)initWithSourceProject:(id)arg1;

@end

