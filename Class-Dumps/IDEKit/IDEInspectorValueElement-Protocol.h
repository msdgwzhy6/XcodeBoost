//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IDEInspectorValueElement <NSObject>
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(NSString *)arg2 onObject:(id)arg3 fromKeyPath:(NSString *)arg4 ofObject:(id)arg5;
- (NSArray *)inspectedArrayControllerKeyPaths;
- (id)valueForKeyPath:(NSString *)arg1;
- (id <IDEBindableDeclarativeInspectorController>)inspectorController;
@end

