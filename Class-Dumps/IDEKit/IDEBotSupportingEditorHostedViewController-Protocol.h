//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDocumentLocation, IDEBotSupportingEditor, NSArray;

@protocol IDEBotSupportingEditorHostedViewController <NSObject>
+ (BOOL)instancesCanContainDocumentLocation:(DVTDocumentLocation *)arg1;
@property(readonly) NSArray *currentSelectedItems;
@property(readonly) NSArray *currentSelectedDocumentLocations;
@property(retain, nonatomic) IDEBotSupportingEditor *botSupportingEditor;
- (void)selectDocumentLocations:(NSArray *)arg1;
@end

