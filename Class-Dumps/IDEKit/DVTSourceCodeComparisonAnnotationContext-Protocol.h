//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDiffDescriptor, DVTDiffSession, NSURL;

@protocol DVTSourceCodeComparisonAnnotationContext <NSObject>
@property(readonly) DVTDiffSession *diffSession;
@property(readonly) DVTDiffDescriptor *diffDescriptor;
@property(readonly) int dataSourceType;
@property(readonly) NSURL *documentURL;
@end

