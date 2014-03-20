//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSRegularExpression;

@interface PBXBuildOutputParseRule : NSObject
{
    TSRegularExpression *_regex;
    int _action;
    Class _BuildLogMessageClass;
    int _buildMessageType;
}

+ (id)buildOutputParseRulesFromPListArrays:(id)arg1 outerKeyNameForExceptions:(id)arg2 innerKeyNameForExceptions:(id)arg3;
- (id)description;
- (BOOL)getBuildLogMessage:(id *)arg1 andBuildMessage:(id *)arg2 byMatchingAgainstString:(id)arg3 withContext:(id)arg4;
- (id)initWithRegularExpression:(id)arg1 action:(int)arg2 BuildLogMessageClass:(Class)arg3 buildMessageType:(int)arg4;

@end

