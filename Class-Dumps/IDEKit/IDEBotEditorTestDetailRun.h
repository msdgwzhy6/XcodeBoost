//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSImage, NSString;

@interface IDEBotEditorTestDetailRun : NSObject
{
    unsigned long long _integrationNumber;
    NSString *_runGUID;
    NSDate *_timestamp;
    double _percentageFailed;
    long long _failCount;
    long long _passCount;
    long long _totalCount;
    NSImage *_pie;
    NSDictionary *_results;
    NSDictionary *_dictionaryRepresentation;
}

@property(retain, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(retain, nonatomic) NSImage *pie; // @synthesize pie=_pie;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long passCount; // @synthesize passCount=_passCount;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) double percentageFailed; // @synthesize percentageFailed=_percentageFailed;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *runGUID; // @synthesize runGUID=_runGUID;
@property(nonatomic) unsigned long long integrationNumber; // @synthesize integrationNumber=_integrationNumber;
- (void).cxx_destruct;
- (int)resultTypeForTest:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIntegrationNumber:(unsigned long long)arg1 runGUID:(id)arg2 timestamp:(id)arg3 failCount:(unsigned long long)arg4 passCount:(unsigned long long)arg5 results:(id)arg6;
- (id)init;

@end

