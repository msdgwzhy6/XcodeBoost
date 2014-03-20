//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSToolbarDelegate.h"

@class NSObject;

@interface TestGlassWindowController : NSWindowController <NSToolbarDelegate>
{
    NSObject *_toolbarTarget;
}

- (void)dealloc;
- (void)finalize;
- (id)toolbarTarget;
- (id)initWithWindow:(id)arg1 toolbarTarget:(id)arg2;
- (void)_windowWillClose:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarItemWithIdentifier:(id)arg1 label:(id)arg2 imageName:(id)arg3 toolTip:(id)arg4 action:(SEL)arg5;
- (void)_setupToolbar;

@end

