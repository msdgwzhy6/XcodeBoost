//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDownloadable, DVTDownloadableManager, DVTDownloadableOperation, DVTObservingToken, DVTStackBacktrace, NSImage, NSMutableSet, NSString;

@interface IDEComponentDownloadsPrefPaneItem : NSObject <DVTInvalidation>
{
    DVTDownloadable *_downloadable;
    int _state;
    DVTDownloadableOperation *_downloadOperation;
    long long _downloadProgress;
    NSString *_fileSizeForDisplay;
    NSString *_fileSize;
    CDUnknownBlockType _downloadCompletionBlock;
    BOOL _cancelable;
    DVTDownloadableManager *_downloadableManager;
    DVTObservingToken *_downloadCancelledToken;
    DVTObservingToken *_downloadFinishedToken;
    NSMutableSet *_downloadOperationObservationTokens;
}

+ (id)contextForDownloadableIdentifier:(id)arg1 ignoreDownloading:(BOOL)arg2;
+ (id)iconForDownloadableType:(id)arg1;
+ (id)itemWithDownloadable:(id)arg1 state:(int)arg2 downloadOperation:(id)arg3 downloadableManager:(id)arg4;
+ (void)initialize;
@property(readonly) BOOL cancelable; // @synthesize cancelable=_cancelable;
@property(readonly) NSString *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSString *fileSizeForDisplay; // @synthesize fileSizeForDisplay=_fileSizeForDisplay;
@property(retain, nonatomic) DVTDownloadableOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(readonly) long long downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property int state; // @synthesize state=_state;
@property(readonly) DVTDownloadable *downloadable; // @synthesize downloadable=_downloadable;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSImage *image;
- (void)_updateCancelable;
- (void)cancelDownload;
- (BOOL)downloadWithError:(id *)arg1 downloadCompletionBlock:(CDUnknownBlockType)arg2;
- (long long)compare:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

