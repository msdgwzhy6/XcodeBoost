//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDDiagramTool.h"

@interface XDZoomTool : XDDiagramTool
{
    struct CGRect _rubberbandRect;
    struct _XDZoomToolFlags _ztFlags;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void)drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (void)flagsChanged:(id)arg1 inView:(id)arg2;
- (void)mouseExited:(id)arg1 inView:(id)arg2;
- (void)mouseEntered:(id)arg1 inView:(id)arg2;
- (id)imageForDiagramToolbarItem;
- (id)cursorForDiagramView:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

