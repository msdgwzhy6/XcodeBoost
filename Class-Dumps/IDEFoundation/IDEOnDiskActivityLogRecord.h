//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogRecord.h>

@class DVTFileDataType, DVTObservingToken, IDEActivityLogSection, IDEOnDiskLogStore_Impl, IDETypeIdentifier, NSString;

@interface IDEOnDiskActivityLogRecord : IDEActivityLogRecord
{
    IDEOnDiskLogStore_Impl *_logStore;
    IDEActivityLogSection *_strongFullLog;
    IDEActivityLogSection *_weakFullLog;
    IDEActivityLogSection *_recorderLog;
    DVTObservingToken *_recorderLogObservingToken;
    NSString *_uniqueIdentifier;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    double _timeStartedRecording;
    double _timeStoppedRecording;
    DVTFileDataType *_documentType;
    NSString *_signature;
    NSString *_highLevelStatus;
}

+ (id)keyPathsForValuesAffectingIsRecording;
@property(retain, nonatomic) IDEActivityLogSection *recorderLog; // @synthesize recorderLog=_recorderLog;
@property(nonatomic) double timeStoppedRecording; // @synthesize timeStoppedRecording=_timeStoppedRecording;
- (void).cxx_destruct;
- (id)highLevelStatus;
- (id)signature;
- (id)documentType;
- (double)timeStartedRecording;
- (id)title;
- (id)domainType;
- (id)uniqueIdentifier;
- (BOOL)isRecording;
- (void)_setRemovedState;
- (void)_makeWeak;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (void)removeSelfWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isRemoved;
- (id)initWithUUID:(id)arg1 store:(id)arg2 cacheEntry:(id)arg3 updatedCache:(char *)arg4 error:(id *)arg5;
- (id)initWithLog:(id)arg1 schemeIdentifier:(id)arg2 store:(id)arg3;

@end

