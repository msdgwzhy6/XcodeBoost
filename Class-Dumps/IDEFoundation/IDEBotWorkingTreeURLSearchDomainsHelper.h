//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IDEBotWorkingTreeURLSearchDomainsHelper : NSObject
{
    struct dispatch_queue_s *_queue;
    BOOL _hasQueuedUpdate;
    struct __SCDynamicStore *_dynamicStore;
    struct __SCPreferences *_preferences;
    NSArray *_searchDomains;
}

+ (id)sharedSearchDomainsHelper;
- (void).cxx_destruct;
- (id)searchDomains;
- (void)_updateSearchDomains;
- (void)_updateSearchDomainsAsync;
- (void)dealloc;
- (id)init;

@end

