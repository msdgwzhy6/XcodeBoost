//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEXcodeServer, NSSet, NSString;

@interface IDEServerRepository : NSObject <DVTInvalidation>
{
    BOOL _isHostedRepository;
    IDEXcodeServer *_server;
    NSString *_GUID;
    NSString *_repositoryURLString;
    NSSet *_otherRepositoryURLStrings;
    NSString *_displayName;
    NSString *_repositoryType;
    NSString *_user;
    NSString *_credentialGUID;
    NSString *_credentialType;
    long long _lastUpdateGeneration;
}

+ (void)initialize;
@property(nonatomic) long long lastUpdateGeneration; // @synthesize lastUpdateGeneration=_lastUpdateGeneration;
@property(nonatomic) BOOL isHostedRepository; // @synthesize isHostedRepository=_isHostedRepository;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *credentialGUID; // @synthesize credentialGUID=_credentialGUID;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *repositoryType; // @synthesize repositoryType=_repositoryType;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSSet *otherRepositoryURLStrings; // @synthesize otherRepositoryURLStrings=_otherRepositoryURLStrings;
@property(retain, nonatomic) NSString *repositoryURLString; // @synthesize repositoryURLString=_repositoryURLString;
@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) IDEXcodeServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1 updateGeneration:(unsigned long long)arg2;
- (void)primitiveInvalidate;
- (id)initWithServer:(id)arg1 GUID:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

