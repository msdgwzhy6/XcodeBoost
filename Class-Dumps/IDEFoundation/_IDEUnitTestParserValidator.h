//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _IDEUnitTestParserValidator : NSObject
{
    int _type;
    NSString *_identifier;
}

+ (id)validatorWithType:(int)arg1 andIdentifier:(id)arg2;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)validateEvent:(int)arg1;

@end

