//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/XDUMLNamespaceImp.h>

#import "XDUMLClassifier.h"

@interface XDUMLClassifierImp : XDUMLNamespaceImp <XDUMLClassifier>
{
    BOOL _isAbstract;
}

- (id)newOperationWithName:(id)arg1;
- (id)operationForName:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)newPropertyWithName:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)removeObjectFromPropertiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPropertiesAtIndex:(unsigned long long)arg2;
- (id)properties;
- (id)ownedOperations;
- (id)ownedAttributes;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (void)specializationRemoved:(id)arg1;
- (void)specializationAdded:(id)arg1;
- (id)specializations;
- (id)newGeneralizationFrom:(id)arg1;
- (void)generalizationRemoved:(id)arg1;
- (void)generalizationAdded:(id)arg1;
- (id)package;
- (void)setIsAbstract:(BOOL)arg1;
- (id)attributes;
- (BOOL)isAbstract;
- (id)generalizations;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
