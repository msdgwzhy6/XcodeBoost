//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XDComponentIdentifying.h"

@class NSBundle;

@interface XDComponentProxy : NSObject <XDComponentIdentifying>
{
    NSBundle *_bundle;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (id)component;
- (id)bundle;
- (id)identifier;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

