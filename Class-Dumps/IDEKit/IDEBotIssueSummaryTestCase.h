//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface IDEBotIssueSummaryTestCase : NSObject
{
    NSMutableArray *_issueSummaries;
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addIssueSummary:(id)arg1;
@property(readonly, copy) NSArray *issueSummaries;
- (id)initWithName:(id)arg1;

@end

