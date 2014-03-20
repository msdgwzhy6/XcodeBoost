//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTBorderedView.h"

#import "DVTInvalidation.h"

@class DVTSearchField, DVTStackBacktrace, NSMenu, NSString;

@interface IDEFilterControlBar : DVTBorderedView <DVTInvalidation>
{
    DVTSearchField *_searchField;
    id <IDEFilterControlBarTarget> _filterTarget;
    id _filterLeftButton;
    NSString *_filterDefinitionIdentifier;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *filterDefinitionIdentifier; // @synthesize filterDefinitionIdentifier=_filterDefinitionIdentifier;
@property(retain, nonatomic) id <IDEFilterControlBarTarget> filterTarget; // @synthesize filterTarget=_filterTarget;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_didSetFilterTarget;
- (void)_willSetFilterTarget;
- (void)setUpFilterControls;
- (id)newToggleButtonWithParameters:(id)arg1;
- (id)filterDefinitionExtension;
@property(copy) NSMenu *searchMenuTemplate;
- (void)_updateSearchButtonCell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

