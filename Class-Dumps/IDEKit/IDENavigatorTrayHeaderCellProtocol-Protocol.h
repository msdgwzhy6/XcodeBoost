//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@protocol IDENavigatorTrayHeaderCellProtocol <NSObject>
@property(copy) NSIndexSet *selectedTrayItems;
@property(copy) NSArray *trayItemCells;
@property BOOL internalHeaderIsSelected;
- (void)setTrayState:(int)arg1;
@end

