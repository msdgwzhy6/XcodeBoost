//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/AAVAssistant.h>

@class NSString;

@interface AAVLoginAssistant : AAVAssistant
{
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingUseKeychain;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingUsername;
- (BOOL)canGoForward;
@property _Bool useKeychain;
@property(copy) NSString *password;
@property(copy) NSString *username;
- (void)loadView;
- (id)nibName;

@end

