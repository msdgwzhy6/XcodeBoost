//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class IDEBotEditorTestDetailWrapperView, NSMutableSet;

@interface IDEBotEditorTestDetailHeaderTableView : NSTableView
{
    IDEBotEditorTestDetailWrapperView *_wrapperView;
    long long _columnIndex;
    NSMutableSet *_dependants;
}

@property(retain, nonatomic) NSMutableSet *dependants; // @synthesize dependants=_dependants;
@property(nonatomic) long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) __weak IDEBotEditorTestDetailWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)doubleClickDetected:(id)arg1;
- (void)addSelectionDependents:(id)arg1;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
