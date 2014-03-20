//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSString;

@interface IDEBotSummaryStackedBarGraphBar : NSObject
{
    NSString *_barIdentifier;
    NSString *_barValue;
    NSColor *_barFillColor;
    NSColor *_barStrokeColor;
    struct CGRect _layoutRect;
}

+ (id)barDataWithIdentifier:(id)arg1 barValue:(id)arg2 barFillColor:(id)arg3 barStrokeColor:(id)arg4;
@property(copy) NSColor *barStrokeColor; // @synthesize barStrokeColor=_barStrokeColor;
@property(copy) NSColor *barFillColor; // @synthesize barFillColor=_barFillColor;
@property struct CGRect layoutRect; // @synthesize layoutRect=_layoutRect;
@property(copy) NSString *barValue; // @synthesize barValue=_barValue;
@property(copy) NSString *barIdentifier; // @synthesize barIdentifier=_barIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

