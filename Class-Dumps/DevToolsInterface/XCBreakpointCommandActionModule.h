//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCBreakpointActionModule.h>

@class NSButton, NSTextField, NSTextView;

@interface XCBreakpointCommandActionModule : XCBreakpointActionModule
{
    NSTextView *_messageView;
    NSButton *_logButton;
    NSTextField *_instructions;
}

- (void)prepareFocus;
- (void)updateBreakpointAction:(id)arg1;
- (void)setupBreakpointAction:(id)arg1;

@end

