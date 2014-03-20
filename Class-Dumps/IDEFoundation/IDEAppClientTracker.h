//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEClientTracking.h"

@class IDEConcreteClientTracker;

@interface IDEAppClientTracker : NSObject <IDEClientTracking>
{
    IDEConcreteClientTracker *_clientTracker;
}

+ (id)sharedAppClientTracker;
- (void).cxx_destruct;
- (void)cancelTrackedClients;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

