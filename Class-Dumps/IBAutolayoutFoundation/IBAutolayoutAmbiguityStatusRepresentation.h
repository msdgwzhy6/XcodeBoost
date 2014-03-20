//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@interface IBAutolayoutAmbiguityStatusRepresentation : NSObject <IBBinaryArchiving>
{
    id _viewRepresentation;
    unsigned long long _ambiguityStatusMask;
}

@property(readonly, nonatomic) unsigned long long ambiguityStatusMask; // @synthesize ambiguityStatusMask=_ambiguityStatusMask;
@property(readonly, nonatomic) id viewRepresentation; // @synthesize viewRepresentation=_viewRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewRepresentation:(id)arg1 ambiguityStatusMask:(unsigned long long)arg2;

@end

