//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTDeveloperRecord, DVTObservingToken, IDERollOverTableView, NSArrayController, NSImageView, NSPredicate, NSSet;

@interface IDEAccountPrefsDeveloperAccountDetailViewController : IDEViewController
{
    DVTObservingToken *_teamsToken;
    DVTObservingToken *_macTeamsToken;
    DVTObservingToken *_iosTeamsToken;
    _Bool _loadingTeams;
    NSSet *_teams;
    DVTDeveloperRecord *_developer;
    NSArrayController *_teamsArrayController;
    IDERollOverTableView *_teamsTable;
    NSPredicate *_fetchPredicate;
    NSImageView *_imageView;
    DVTBorderedView *_borderedView;
}

+ (id)keyPathsForValuesAffectingUserDescription;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingDeveloperAccount;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(retain) IDERollOverTableView *teamsTable; // @synthesize teamsTable=_teamsTable;
@property(retain) NSArrayController *teamsArrayController; // @synthesize teamsArrayController=_teamsArrayController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (id)contextMenu;
- (void)setRepresentedObject:(id)arg1;
- (void)viewDetails:(id)arg1;
- (void)viewDetailsForTeam:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)updateEmptyContentString;
@property(retain) DVTDeveloperRecord *developer; // @synthesize developer=_developer;
@property _Bool loadingTeams; // @synthesize loadingTeams=_loadingTeams;
@property(copy) NSSet *teams; // @synthesize teams=_teams;
- (void)setUserDescription:(id)arg1;
- (id)userDescription;
- (void)setPassword:(id)arg1;
- (id)password;
- (id)moc;
- (id)developerAccount;

@end

