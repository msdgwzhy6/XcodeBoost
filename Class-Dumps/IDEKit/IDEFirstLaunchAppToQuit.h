//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSRunningApplication, NSString;

@interface IDEFirstLaunchAppToQuit : NSObject
{
    NSString *_displayName;
    NSRunningApplication *_runningApplication;
}

@property(readonly) NSRunningApplication *runningApplication; // @synthesize runningApplication=_runningApplication;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(readonly) NSImage *icon;
- (id)_initWithNSRunningApplication:(id)arg1 customDisplayName:(id)arg2;
- (id)_initWithNSRunningApplication:(id)arg1;

@end

