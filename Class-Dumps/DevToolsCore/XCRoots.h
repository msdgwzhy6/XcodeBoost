//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PBXProject;

@interface XCRoots : NSObject
{
    PBXProject *_project;
    NSMutableArray *_roots;
}

- (id)absolutePathForRoot:(id)arg1;
- (id)description;
- (void)setRoots:(id)arg1;
- (id)roots;
- (void)dealloc;
- (id)initWithArray:(id)arg1 project:(id)arg2;

@end

