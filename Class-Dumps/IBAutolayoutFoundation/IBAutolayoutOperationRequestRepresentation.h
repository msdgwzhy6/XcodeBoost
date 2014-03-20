//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCoding.h"

@class IBAutolayoutArbitrationUnitRepresentation, IBSparseAutolayoutInfo;

@interface IBAutolayoutOperationRequestRepresentation : NSObject <NSCoding, IBBinaryArchiving>
{
    IBAutolayoutArbitrationUnitRepresentation *_arbitrationUnitRepresentation;
    IBSparseAutolayoutInfo *_sparseLayoutInfo;
}

@property(readonly, nonatomic) IBSparseAutolayoutInfo *sparseLayoutInfo; // @synthesize sparseLayoutInfo=_sparseLayoutInfo;
@property(readonly, nonatomic) IBAutolayoutArbitrationUnitRepresentation *arbitrationUnitRepresentation; // @synthesize arbitrationUnitRepresentation=_arbitrationUnitRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithArbitrationUnitRepresentation:(id)arg1 sparseLayoutInfo:(id)arg2;

@end

