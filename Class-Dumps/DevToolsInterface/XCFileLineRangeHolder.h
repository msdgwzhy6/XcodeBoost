//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTMutableRangeArray;

@interface XCFileLineRangeHolder : NSObject
{
    unsigned long long _changesSinceLastCompaction;
    DTMutableRangeArray *_rangeArray;
}

+ (id)fileLineRangeHolderWithNormalizedRanges:(id)arg1;
+ (id)fileLineRangeHolder;
@property(readonly) unsigned long long changesSinceLastCompaction; // @synthesize changesSinceLastCompaction=_changesSinceLastCompaction;
@property(readonly) DTMutableRangeArray *lineRanges; // @synthesize lineRanges=_rangeArray;
- (void)compact;
- (void)clearLinesFrom:(long long)arg1 count:(long long)arg2 shiftUp:(BOOL)arg3;
- (void)insertEmptyLinesFrom:(long long)arg1 count:(long long)arg2;
- (void)insertLinesFrom:(long long)arg1 count:(long long)arg2;
- (void)_printDebugListing;
- (void)dealloc;
- (id)initWithNormalizedRanges:(id)arg1;
- (id)init;

@end

