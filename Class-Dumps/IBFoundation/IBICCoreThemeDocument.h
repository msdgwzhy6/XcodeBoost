//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreThemeDocument, NSString;

@interface IBICCoreThemeDocument : NSObject
{
    CoreThemeDocument *_document;
    NSString *_exclusiveScratchDirectory;
    BOOL _importedContent;
}

+ (id)makeTemporaryDocumentReturningError:(id *)arg1;
+ (BOOL)isMigrationError:(id)arg1;
- (void).cxx_destruct;
- (void)distillToPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)coreUIResizingModeForResizingBehavior:(id)arg1;
- (long long)coreUIRenditionTypeForResizingBehavior:(id)arg1;
- (struct TDNamedAssetImportEdgeInsets)coreUINamedAssetImportEdgeInsetsForResizingBehavior:(id)arg1;
- (void)logAssets;
- (void)close;
- (id)initWithCoreThemeDocument:(id)arg1 exclusiveScratchDirectory:(id)arg2;

@end

