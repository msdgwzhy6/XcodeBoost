//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/XDUMLClassifierImp.h>

#import "XDUMLClass.h"

@interface XDUMLClassImp : XDUMLClassifierImp <XDUMLClass>
{
}

- (void)setParentClass:(id)arg1;
- (id)parentClass;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (id)description;
- (id)newImplementationOf:(id)arg1;
- (void)implementationRemoved:(id)arg1;
- (void)implementationAdded:(id)arg1;
- (id)superClasses;
- (id)ownedOperations;
- (id)ownedAttributes;
- (id)implementations;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
