//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "NSLayoutManagerDelegate.h"
#import "XCTextViewAdditions.h"

@class NSColor, XCTextSelectionSymbolInfo;

@interface PBXTextView : NSTextView <NSLayoutManagerDelegate, XCTextViewAdditions>
{
    double _highlightStartY;
    double _highlightHeight;
    BOOL _observingHighlightColorChangedNotification;
    NSColor *_highlightBaseColor;
    unsigned long long _modifierFlagsAtLastSingleMouseDown;
    double _pageGuideWidth;
    NSColor *_pageGuideOutOfBoundsColor;
    long long _pageNumber;
    struct _NSRange _deferredScrollRange;
    struct _NSRange _deferredSelectionRange;
    struct __CFRunLoopObserver *_runLoopObserver;
    double _layoutStartTime;
    BOOL _disabled;
    BOOL _sentLayoutProgress;
    BOOL _delegateWantsLayoutNotice;
    BOOL _isMouseInsideView;
    XCTextSelectionSymbolInfo *_selectionSymbolInfo;
}

+ (id)highlightEdgeColor;
+ (id)highlightInnerColor;
+ (double)highlightEdgeColorAlpha;
+ (double)highlightInnerColorAlpha;
+ (id)highlightBaseColor;
+ (void)setHighlightBaseColor:(id)arg1;
+ (void)setCopySourceCodeAsRichText:(BOOL)arg1;
+ (BOOL)copySourceCodeAsRichText;
+ (id)contextualMenu;
+ (void)initialize;
+ (void)PBX_applicationWillUpdate:(id)arg1;
+ (BOOL)PBX_isCyclingEscapeCompletions;
+ (id)PBX_escapeCompletionAfterOldCompletion:(id)arg1;
+ (BOOL)PBX_alreadyFoundEscapeCompletion:(id)arg1;
+ (void)PBX_addFoundEscapeCompletion:(id)arg1;
+ (unsigned long long)PBX_escapeCompletionStartLocation;
+ (void)PBX_setEscapeCompletionStartLocation:(unsigned long long)arg1;
+ (void)PBX_clearFoundEscapeCompletions;
+ (void)PBX_textViewDidChangeSelection:(id)arg1;
+ (void)PBX_updateObserversFromPreferences:(id)arg1;
- (void)refactor:(id)arg1;
- (void)initContextMenuForRefactoring:(id)arg1;
- (id)refactoring;
- (id)selectionSymbolInfo;
- (void)assistantWasDismissed;
- (void)assistantSelectionChanged;
- (void)assistantWasInvoked;
- (struct _NSRange)realRangeByTrimmingBorderingCommentsFromRealRange:(struct _NSRange)arg1;
- (id)typeOfExpressionAtRealRange:(struct _NSRange)arg1;
- (id)scannerItemAtRealLocation:(unsigned long long)arg1;
- (struct _NSRange)doubledClickedRealRangeForRealRange:(struct _NSRange)arg1;
- (id)realString;
- (struct _NSRange)selectedRealRange;
- (id)currentCodeCompletion;
- (id)projectIndex;
- (id)file;
- (void)startDefinitionsFind:(id)arg1;
- (void)startSymbolFind:(id)arg1;
- (void)startAPIDocFind:(id)arg1;
- (void)startFullTextDocFind:(id)arg1;
- (BOOL)_setSearchStringForFind;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutManagerDidInvalidateLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)completionPlaceholderSelectPrevious:(id)arg1;
- (void)completionPlaceholderSelect:(id)arg1;
- (void)previousCompletion:(id)arg1;
- (void)nextCompletion:(id)arg1;
- (void)complete:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (void)PBX_executeSelectionSendingOutputToNewDocument:(id)arg1;
- (void)PBX_executeSelectionSendingOutputToPasteboard:(id)arg1;
- (void)PBX_executeSelectionAlertOutput:(id)arg1;
- (void)PBX_executeSelectionReplacingOutput:(id)arg1;
- (void)PBX_executeSelectionInsertingOutput:(id)arg1;
- (void)PBX_executeSelectionAppendingOutput:(id)arg1;
- (void)PBX_executeSelectionWithOutputDestination:(int)arg1;
- (void)XC_executeUserScript:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (void)scrollTabWidthRight:(id)arg1;
- (void)scrollTabWidthLeft:(id)arg1;
- (void)deleteSubWordBackward:(id)arg1;
- (void)deleteSubWordForward:(id)arg1;
- (void)moveSubWordBackwardAndModifySelection:(id)arg1;
- (void)moveSubWordForwardAndModifySelection:(id)arg1;
- (void)moveSubWordBackward:(id)arg1;
- (void)moveSubWordForward:(id)arg1;
- (unsigned long long)getLineInfoInRange:(struct _NSRange)arg1 locations:(double *)arg2 labels:(id *)arg3 markers:(id *)arg4;
- (void)getMarkerLocations:(double *)arg1 forLineRange:(struct _NSRange)arg2;
- (unsigned long long)lineNumberForMarkerLocation:(double)arg1;
- (double)markerLocationForLineNumber:(unsigned long long)arg1 paragraphRect:(struct CGRect *)arg2;
- (double)markerLocationForRange:(struct _NSRange)arg1 paragraphRect:(struct CGRect *)arg2;
- (void)_centeredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (void)resetCursorRects;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)setPageGuideOutOfBoundsColor:(id)arg1;
- (id)pageGuideOutOfBoundsColor;
- (void)setPageGuideWidth:(double)arg1;
- (double)pageGuideWidth;
- (void)_highlightColorChanged:(id)arg1;
- (void)clearHighlight;
- (void)setHighlightAtYCoordinate:(double)arg1 height:(double)arg2;
- (id)highlightBaseColor;
- (void)setHighlightBaseColor:(id)arg1;
- (void)_invalidateHighlightRect;
- (void)rulerView:(id)arg1 handleMouseDown:(id)arg2;
- (BOOL)rulerView:(id)arg1 shouldAddMarker:(id)arg2;
- (double)rulerView:(id)arg1 willAddMarker:(id)arg2 atLocation:(double)arg3;
- (void)rulerView:(id)arg1 didMoveMarker:(id)arg2;
- (double)rulerView:(id)arg1 willMoveMarker:(id)arg2 toLocation:(double)arg3;
- (void)rulerView:(id)arg1 didRemoveMarker:(id)arg2;
- (BOOL)rulerView:(id)arg1 shouldRemoveMarker:(id)arg2;
- (BOOL)rulerView:(id)arg1 shouldMoveMarker:(id)arg2;
- (struct _NSRange)selectedRange;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (BOOL)_shouldDeferRangeOperationForRange:(struct _NSRange)arg1 deferredRangeStore:(struct _NSRange *)arg2;
- (void)_createRunLoopObserver;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct _NSRange)visibleRange;
- (void)_clearDeferredLayoutOperations;
- (void)setTextContainer:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)_performDeferredLayoutOperations;
- (void)_postDeferredLayoutNotice:(double)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)swapWithMark:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_dumpTextStorageChangeHistory:(id)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isMouseInsideView;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (id)fullSymbolStemFromLocation:(unsigned long long)arg1 noteRange:(struct _NSRange *)arg2 isCodeSymbol:(char *)arg3 isObjcMethod:(char *)arg4;
- (id)selectionIfDoubleClickedAtLocation:(unsigned long long)arg1;
- (id)codeAssistant;
- (id)_fileNavigator;
- (id)fileEditor;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (id)acceptableDragTypes;
- (void)dealloc;
- (BOOL)validateMenuItem_startDefinitionsFind;
- (BOOL)validateMenuItem_startSymbolFind;
- (id)_definitionsSearchString;
- (id)_symbolSearchString;
- (id)_findModule;
- (void)popNavigatorPopUp:(id)arg1;
- (id)typeOfCurrentExpression;
- (id)typeOfExpressionAtRange:(struct _NSRange)arg1 resolveType:(BOOL)arg2;
- (id)_nonWordChars;
- (void)_showTypeOfCurrentExpression:(id)arg1;
- (void)_parseLocalsInCurrentExpression:(id)arg1;
- (void)_parseCurrentExpression:(id)arg1;
- (void)enterSelectionForReplace:(id)arg1;
- (void)enterSelection:(id)arg1;
- (void)PBX_showGotoPanel:(id)arg1;
- (void)PBX_forceCompleteRelayout:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)PBX_indentFriendly:(long long)arg1;
- (void)PBX_toggleShowsInvisibleCharacters:(id)arg1;
- (void)PBX_toggleShowsControlCharacters:(id)arg1;
- (void)PBX_complete:(id)arg1;
- (id)PBX_completionStringForSearchStringFoundRange:(struct _NSRange)arg1 inString:(id)arg2 nonCompletableCharSet:(id)arg3;
- (void)PBX_balanceParens:(id)arg1;
- (void)PBX_nestLeft:(id)arg1;
- (void)PBX_nestRight:(id)arg1;
- (void)PBX_doUserIndentByNumberOfLevels:(long long)arg1;
- (void)autoInsertCloseBrace;
- (void)paste:(id)arg1;
- (BOOL)indentForPasteText:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)indentAtBeginningOfLine;
- (void)indentSelectionIfIndentable:(id)arg1;
- (void)indentSelection:(id)arg1;

@end

