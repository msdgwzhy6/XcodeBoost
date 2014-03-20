//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSString;

@interface IDEInspectorChooserCategory : NSObject <DVTInvalidation>
{
    NSArray *choices;
    NSString *title;
}

+ (void)initialize;
@property(readonly) NSString *title; // @synthesize title;
@property(readonly) NSArray *choices; // @synthesize choices;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 choices:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

