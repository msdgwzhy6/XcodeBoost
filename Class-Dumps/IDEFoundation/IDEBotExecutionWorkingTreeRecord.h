//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDEBotExecutionWorkingTreeRecord : NSObject
{
    NSString *_workingCopyRelativePath;
    NSString *_logFileGUID;
    NSString *_log;
}

@property(copy, nonatomic) NSString *log; // @synthesize log=_log;
@property(copy, nonatomic) NSString *logFileGUID; // @synthesize logFileGUID=_logFileGUID;
@property(copy, nonatomic) NSString *workingCopyRelativePath; // @synthesize workingCopyRelativePath=_workingCopyRelativePath;
- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkingTreeRelativePath:(id)arg1;

@end

