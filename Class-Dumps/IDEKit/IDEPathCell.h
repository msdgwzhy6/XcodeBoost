//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPathCell.h"

#import "DVTFilteringMenuDelegate.h"
#import "DVTInvalidation.h"
#import "NSDraggingSource.h"
#import "NSMenuDelegate.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IDEPathCellNavigableItemObserver, IDEPathComponentCell, NSMenu, NSMutableArray, NSMutableSet;

@interface IDEPathCell : NSPathCell <DVTFilteringMenuDelegate, NSMenuDelegate, NSDraggingSource, DVTInvalidation>
{
    NSMenu *_trackingMenu;
    IDEPathComponentCell *_clickedIDEPathComponentCell;
    IDEPathCellNavigableItemObserver *_itemObserver;
    NSMutableArray *_itemsObservedForChildItems;
    NSMutableSet *_cellsWithDirtyImages;
    NSMutableSet *_cellsWithDirtyNames;
    DVTDelayedInvocation *_dirtyCellInvocation;
    int _borderSides;
    int _gradientStyle;
    struct {
        unsigned int _lastComponentFillsWidth:1;
        unsigned int _delegateRespondsToShouldSeparateDisplayOfChildItemsForItem:1;
        unsigned int _delegateRespondsToChildItemsForItem:1;
        unsigned int _delegateRespondsToShouldPopUpMenuForPathComponentCell:1;
        unsigned int _delegateRespondsToBeginDrag:1;
        unsigned int _delegateRespondsToTitleForPathComponentCellAtIndex:1;
        unsigned int _delegateProvidesMenuItems:1;
        unsigned int _delegateProvidesAccessibilityDescriptions:1;
        unsigned int _delegateProvidesToolTips:1;
    } _idePathCellFlags;
    BOOL _needsToUpdateComponentCells;
    struct CGSize _cachedSizeWanted;
}

+ (void)initialize;
+ (unsigned long long)defaultFocusRingType;
@property int borderSides; // @synthesize borderSides=_borderSides;
@property(nonatomic) int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (void).cxx_destruct;
- (id)ide_accessibilityPopUpMenuParent:(id)arg1;
- (id)ide_accessibilityChildMenuForChild:(id)arg1;
- (void)ide_accessibilityPerformPressForChild:(id)arg1;
- (id)ide_accessibilitySizeOfChild:(id)arg1;
- (id)ide_accessibilityPositionOfChild:(id)arg1;
- (struct CGRect)ide_accessibilityScreenRectForPathComponent:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)ide_accessibilityObjectForComponentCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_handleClickInComponentCell:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 event:(id)arg5;
- (BOOL)_handleDragInComponentCell:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 event:(id)arg5;
- (BOOL)acceptsFirstResponder;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_performDragInComponentCell:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 event:(id)arg4;
- (void)filterItems:(id)arg1 inMenu:(id)arg2 forSearchString:(id)arg3;
- (void)popUpMenuForComponentCell:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)populatePopUpMenu:(id)arg1 withItems:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)cancelMenuTracking;
- (id)_menuItemWithNavigableItem:(id)arg1 additionalItems:(id *)arg2 currentGroupIdentifier:(id *)arg3;
- (id)_menuItemWithNavigableItem:(id)arg1 additionalItems:(id *)arg2 currentGroupIdentifier:(id *)arg3 indentationLevel:(long long)arg4;
- (void)_setupSubmenuForMenuItem:(id)arg1;
- (void)_selectItem:(id)arg1;
- (BOOL)_delegate_shouldSeparateDisplayOfChildItemsForItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildItemsOfItems:(id)arg1;
- (void)stopObservingChildItemsOfAllItems;
- (void)startObservingChildItemsOfMenuItems:(id)arg1;
- (id)peerNavigableItemsForComponentCell:(id)arg1;
- (id)childItemsForItem:(id)arg1;
- (void)invalidateNameForPathComponentCell:(id)arg1;
- (void)invalidateImageForPathComponentCell:(id)arg1;
- (void)setNeedsDisplayForCell:(id)arg1;
- (id)pathComponentCellForRepresentedObject:(id)arg1;
- (void)updateComponentCells;
- (struct CGSize)sizeWantedForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_componentCellsForCurrentlyObservedItems;
- (void)_updateDirtyCells:(id)arg1;
- (id)lineageForNavigableItem:(id)arg1 rootItems:(id)arg2;
- (id)_componentCellsFromItems:(id)arg1;
- (id)_delegate_titleForPathComponentCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_noSelectionComponentCell;
- (id)_componentCellWithRepresentedObject:(id)arg1;
- (void)invalidateComponentCells;
- (struct CGRect)grabRectInView:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)pathComponentCellAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)rectOfPathComponentCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
@property BOOL lastComponentFillsWidth;
- (void)setFont:(id)arg1;
- (void)primitiveInvalidate;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_IDEPathCellCommonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

