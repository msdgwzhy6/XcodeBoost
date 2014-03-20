//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/XDUMLClassImp.h>

#import "XDSCClassifier.h"

@class XDElementReference;

@interface XDSCClass : XDUMLClassImp <XDSCClassifier>
{
    struct _XDSCClassCompactVariables _compactVariables;
    XDElementReference *_elementReference;
    long long _fileRetainCount;
}

- (void)removeObjectFromOwnedCommentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inOwnedCommentsAtIndex:(unsigned long long)arg2;
- (id)tooltip;
- (id)browserDisplayName;
- (id)diagramDisplayName;
- (void)setShowInBrowser:(BOOL)arg1;
- (BOOL)showInBrowser;
- (long long)fileRetainCount;
- (id)fileRelease;
- (id)fileRetain;
- (void)setHasDocumentation:(BOOL)arg1;
- (BOOL)hasDocumentation;
- (BOOL)isHidden;
- (id)hiddenPerFilterString;
- (void)setFilterState:(unsigned long long)arg1;
- (void)setIsIndividuallyHidden:(long long)arg1;
- (long long)isIndividuallyHidden;
- (void)setShowOption:(unsigned long long)arg1;
- (unsigned long long)showOption;
- (void)setElementReference:(id)arg1;
- (id)elementReference;
- (void)setNeedsSyncing;
- (void)setIsInProject:(BOOL)arg1;
- (BOOL)isInProject;
- (void)setLanguage:(unsigned long long)arg1;
- (unsigned long long)language;
- (void)setIsCategory:(BOOL)arg1;
- (BOOL)isCategory;
- (id)displayLanguage;
- (id)displayVisibility;
- (id)displaySupers;
- (id)displayAllProperties;
- (id)displayKind;
- (BOOL)isTreeLeaf;
- (id)derivedClassifiers;
- (BOOL)shouldEncodeBucketNamed:(id)arg1;
- (id)ownedOperations;
- (id)ownedAttributes;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

