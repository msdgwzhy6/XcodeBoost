//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTXMLUnarchiving.h"

@class NSString;

@interface IDESchemeOptionReference : NSObject <DVTXMLUnarchiving>
{
    NSString *_identifier;
    NSString *resolvedReference;
}

@property(copy) NSString *resolvedReference; // @synthesize resolvedReference;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)resolvedReferenceForWorkspace:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

@end

