//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, PBXProject, PBXProjectIndex;

@protocol PBXProjectIndexStatusObserving
- (void)indexer:(PBXProjectIndex *)arg1 willIndexFile:(NSString *)arg2 inProject:(PBXProject *)arg3 percentComplete:(long long)arg4;
@end

