//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPerformanceTestOutput, IDETest, IDETestResult, NSArray, NSDate, NSMutableArray, NSMutableSet;

@interface _IDEOCUnitTestRecord : NSObject
{
    IDETest *_test;
    NSMutableArray *_outputMessages;
    unsigned long long _status;
    NSDate *_startDate;
    double _duration;
    DVTPerformanceTestOutput *_performanceTestOutput;
    NSMutableSet *_failureLocationsForCurrentTest;
}

+ (void)initialize;
@property(readonly) NSMutableSet *failureLocationsForCurrentTest; // @synthesize failureLocationsForCurrentTest=_failureLocationsForCurrentTest;
@property(copy) DVTPerformanceTestOutput *performanceTestOutput; // @synthesize performanceTestOutput=_performanceTestOutput;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property unsigned long long status; // @synthesize status=_status;
@property(readonly) IDETest *test; // @synthesize test=_test;
- (void).cxx_destruct;
@property(readonly) IDETestResult *result;
- (id)initWithTest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableOutputMessages; // @dynamic mutableOutputMessages;
@property(copy) NSArray *outputMessages; // @dynamic outputMessages;

@end

