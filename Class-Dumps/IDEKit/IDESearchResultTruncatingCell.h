//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTImageAndTextCell.h"

@class IDEBatchFindResult, NSOutlineView, NSTextStorage;

@interface IDESearchResultTruncatingCell : DVTImageAndTextCell
{
    IDEBatchFindResult *_findResult;
    NSTextStorage *_textStorage;
    struct _NSRange _focusRange;
    BOOL _superDrawing;
    BOOL _stringCalculated;
    BOOL _showsStatusImage;
    BOOL _selectedState;
    int _navigatorDetailLevel;
    int _width;
    long long _rowNumber;
    NSOutlineView *_outlineView;
}

+ (id)keyPathsForValuesAffectingImage;
+ (void)initialize;
@property(nonatomic) BOOL selectedState; // @synthesize selectedState=_selectedState;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int navigatorDetailLevel; // @synthesize navigatorDetailLevel=_navigatorDetailLevel;
@property BOOL showsStatusImage; // @synthesize showsStatusImage=_showsStatusImage;
@property(retain, nonatomic) IDEBatchFindResult *findResult; // @synthesize findResult=_findResult;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (int)rowHeightForItem:(id)arg1;
- (struct CGSize)computedSizeForResult:(id)arg1;
- (void)_updateStringStorage;
- (id)paragraphStyle;
- (BOOL)useCamelCaseWrapping;
- (id)_underlineHighlightColor;
- (id)_backgroundHighlightColor;
- (id)_newlineReplacement;
- (id)_ellipsis:(long long *)arg1;
- (void)_trimLeadingWhitespaceFromString:(id)arg1 updateFocusRange:(struct _NSRange *)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTitleInCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)_attributedStringValueSize;
- (id)attributedStringValue;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL wrappingEnabled;
- (id)image;
- (void)updateBoundFindResult;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)_generateTextStorage;
- (id)dvtExtraBindings;

@end

