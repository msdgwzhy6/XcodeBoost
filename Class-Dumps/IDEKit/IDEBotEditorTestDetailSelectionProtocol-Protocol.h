//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEBotEditorTestDetailRun, NSIndexSet, NSString, NSTableView;

@protocol IDEBotEditorTestDetailSelectionProtocol <NSObject>

@optional
- (void)testWasDoubleClicked:(NSString *)arg1;
- (void)testWasClicked:(NSString *)arg1;
- (void)runWasDoubleClicked:(IDEBotEditorTestDetailRun *)arg1;
- (void)runWasClicked:(IDEBotEditorTestDetailRun *)arg1;
- (int)currentSelectedIntegrationScopeBarState;
- (void)tableView:(NSTableView *)arg1 selectRowIndexes:(NSIndexSet *)arg2;
@end

