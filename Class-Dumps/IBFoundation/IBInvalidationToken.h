//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBInvalidation.h"

@interface IBInvalidationToken : NSObject <IBInvalidation>
{
    CDUnknownBlockType _callback;
}

+ (id)tokenWithInvalidateTokens:(id)arg1;
+ (id)tokenWithCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

