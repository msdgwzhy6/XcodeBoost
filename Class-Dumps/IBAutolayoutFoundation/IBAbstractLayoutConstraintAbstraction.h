//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBLayoutConstraint;

@interface IBAbstractLayoutConstraintAbstraction : NSObject
{
}

@property(readonly, nonatomic) double priority;
- (id)makeRepresentingConstraintWithLayoutInfo:(id)arg1;
@property(readonly, nonatomic) IBLayoutConstraint *constraintInDocument;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;

@end

