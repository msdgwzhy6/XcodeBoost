//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSKeyedUnarchiverDelegate.h"

@class DVTFilePath;

@interface IDEMigrationTargetChooserStatePersistence : NSObject <NSKeyedUnarchiverDelegate>
{
    DVTFilePath *_stateFilePath;
}

+ (void)initialize;
@property(retain) DVTFilePath *stateFilePath; // @synthesize stateFilePath=_stateFilePath;
- (void).cxx_destruct;
- (id)loadStateData;
- (void)saveStateData:(id)arg1;
- (id)mergeStateData:(id)arg1;

@end

