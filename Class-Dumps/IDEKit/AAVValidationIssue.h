//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface AAVValidationIssue : NSObject
{
    _Bool isError;
    NSString *issueText;
}

+ (id)issuesFromResponse:(id)arg1;
+ (id)keyPathsForValuesAffectingIssueImage;
@property(copy) NSString *issueText; // @synthesize issueText;
@property _Bool isError; // @synthesize isError;
- (void).cxx_destruct;
@property(readonly) NSImage *issueImage;

@end

