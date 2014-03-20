//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCUserScriptNode.h>

@class NSString, NSURL, PBXKeyEquivalent;

@interface XCUserScript : XCUserScriptNode
{
    int _scriptInput;
    int _scriptOutput;
    int _scriptError;
    int _scriptWorkingDirectory;
    BOOL _isFileScript;
    NSString *_scriptUTI;
    NSString *_script;
    NSString *_language;
    PBXKeyEquivalent *_keyEquivalent;
}

+ (id)archivableAttributes;
+ (id)archiveNameForKey:(id)arg1;
+ (BOOL)isUserScriptSelector:(SEL)arg1;
+ (id)scriptErrorValues;
+ (id)scriptOutputValues;
+ (id)scriptInputValues;
+ (id)scriptWorkingDirectoryValues;
+ (BOOL)isValidScriptFile:(id)arg1;
+ (id)userScriptWithName:(id)arg1 andScriptFile:(id)arg2;
+ (id)userScriptWithName:(id)arg1 andScriptText:(id)arg2;
+ (id)userScriptWithName:(id)arg1;
+ (id)keyPathsForValuesAffectingEditorTabIdentifier;
+ (id)keyPathsForValuesAffectingPipeCommand;
+ (id)keyPathsForValuesAffectingScriptWorkingDirectoryAsString;
+ (id)keyPathsForValuesAffectingScriptErrorAsString;
+ (id)keyPathsForValuesAffectingScriptInputAsString;
+ (id)keyPathsForValuesAffectingScriptOutputAsString;
+ (id)keyPathsForValuesAffectingScriptInput;
+ (id)keyPathsForValuesAffectingCanSetScriptInput;
+ (id)keyPathsForValuesAffectingScriptURL;
+ (id)keyPathsForValuesAffectingScript;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)keyEquivalentString;
- (SEL)selector;
- (id)menuItem;
- (id)pipeCommand;
@property(readonly) NSString *commandLine;
- (id)workingDirectoryForContext:(id)arg1;
- (id)findDefiningBinderNodeForContext:(id)arg1;
- (id)_workingDirectoryForTextView:(id)arg1;
- (id)_workingDirectoryForFSNode:(id)arg1;
- (BOOL)runWithContext:(id)arg1;
- (BOOL)canRunWithContext:(id)arg1;
- (BOOL)runWithoutContext;
@property(readonly) BOOL canRunWithoutContext;
- (BOOL)isNameEditable;
- (id)icon;
@property(readonly) NSString *editorTabIdentifier;
@property int scriptError;
- (id)scriptErrorAsString;
- (void)setScriptErrorAsString:(id)arg1;
@property int scriptOutput;
- (id)scriptOutputAsString;
- (void)setScriptOutputAsString:(id)arg1;
@property int scriptInput;
- (id)scriptInputAsString;
- (void)setScriptInputAsString:(id)arg1;
@property int scriptWorkingDirectory;
- (id)scriptWorkingDirectoryAsString;
- (void)setScriptWorkingDirectoryAsString:(id)arg1;
- (BOOL)canSetScriptInput;
- (void)setKeyEquivalentString:(id)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (id)keyEquivalent;
@property(readonly) NSURL *scriptURL;
@property(copy) NSString *script;
@property(copy) NSString *scriptUTI;
@property(copy) NSString *language;
@property BOOL isFileScript;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)propertyListRepresentationWithUUIDs:(BOOL)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)init;

@end

