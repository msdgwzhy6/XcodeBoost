//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IDEBotIssueSummaryCollection : NSObject
{
    unsigned long long _issueSummaryCategory;
    NSArray *_issueSummaries;
}

+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingTitle;
@property(copy) NSArray *issueSummaries; // @synthesize issueSummaries=_issueSummaries;
@property unsigned long long issueSummaryCategory; // @synthesize issueSummaryCategory=_issueSummaryCategory;
- (void).cxx_destruct;
- (id)image;
- (id)name;
- (id)initWithIssueCategory:(unsigned long long)arg1 summaries:(id)arg2;
- (id)title;

@end

