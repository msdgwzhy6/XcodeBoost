//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@interface IDEActivityLogAnalyzerWarningMessage : IDEActivityLogMessage
{
}

+ (id)analyzerWarningType;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)isAnalyzerWarningMessage;

@end

