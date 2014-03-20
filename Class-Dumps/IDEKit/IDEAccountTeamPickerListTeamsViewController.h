//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTPagingSheetViewController.h"

@class IDEAccountTeamPickerWindowController, NSArray, NSTableView, NSTextField;

@interface IDEAccountTeamPickerListTeamsViewController : IDEViewController <DVTPagingSheetViewController>
{
    BOOL _wantsMultipleSelection;
    BOOL _rowsSelected;
    IDEAccountTeamPickerWindowController *_pagingSheetWindowController;
    NSTextField *_positioningLabel;
    NSArray *_rows;
    NSTableView *_tableView;
}

@property(nonatomic) BOOL rowsSelected; // @synthesize rowsSelected=_rowsSelected;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSTextField *positioningLabel; // @synthesize positioningLabel=_positioningLabel;
@property(nonatomic) BOOL wantsMultipleSelection; // @synthesize wantsMultipleSelection=_wantsMultipleSelection;
@property(retain, nonatomic) IDEAccountTeamPickerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)select:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)tableViewClicked:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)dataSourceRowsFromAccountWrappers:(id)arg1;
- (void)viewAccounts:(id)arg1;

@end

