//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSMutableArray;

@interface PBXKeyEquivalentCell : NSTextFieldCell
{
    NSMutableArray *_keyEquivalents;
    id _delegate;
    long long _selectedIndex;
    struct {
        unsigned int keyEquivalentIsPrefix:1;
        unsigned int allowsMultipleKeyEquivalents:1;
        unsigned int validatedKeyEquivalent:1;
        unsigned int didEndEditing:1;
        unsigned int __RESERVED__:28;
    } _delegateRespondsTo;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setIndexOfSelectedKeyEquivalent:(long long)arg1;
- (long long)indexOfSelectedKeyEquivalent;
- (void)replaceSelectionWithKeyEquivalent:(id)arg1;
- (void)deleteSelectedKeyEquivalent;
- (void)addNewKeyEquivalent;
- (id)selectedKeyEquivalent;
- (void)selectKeyEquivalentAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)selectedCharacterRange;
- (BOOL)canDeleteKeyEquivalent;
- (BOOL)canAddKeyEquivalent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectValue;
- (id)attributedStringValue;
- (void)setObjectValue:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;

@end

