//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIssue.h"

@class NSImage;

@interface IDEIssue (IDEKitAdditions)
+ (BOOL)isCandidateAnnotationRepresentedObject:(id)arg1;
+ (id)defaultImageForIssueType:(int)arg1 ofSize:(unsigned long long)arg2;
- (id)exploredIssue;
- (id)title;
- (id)locations;
- (BOOL)isNoteSeverity;
- (id)childExplorableItems;
- (id)parentExplorableItem;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_image;
- (id)navigableItem_subtitle;
- (id)navigableItem_name;
@property(readonly) id exploreAnnotationRepresentedObject;
@property(readonly) id annotationRepresentedObject;
- (id)fixItImage;
@property(readonly) NSImage *image;
@end

