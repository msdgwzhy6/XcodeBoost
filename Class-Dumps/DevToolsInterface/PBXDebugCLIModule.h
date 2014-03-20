//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import "PBXIncrementalFindable.h"
#import "PBXTSCharacterStreamConsuming.h"
#import "XCDebuggerConsoleCompletion.h"

@class NSMutableArray, PBXTSCharacterStream, PBXTSUTF8BufferFilter, PBXTSUTF8EncoderFilter, PBXTtyText, XCIncrementalFinder;

@interface PBXDebugCLIModule : PBXProjectModule <PBXIncrementalFindable, PBXTSCharacterStreamConsuming, XCDebuggerConsoleCompletion>
{
    PBXTtyText *_ttyText;
    NSMutableArray *_commands;
    long long _currentCommand;
    PBXTSCharacterStream *_streamFromTTY;
    PBXTSUTF8EncoderFilter *_utf8Encoder;
    PBXTSUTF8BufferFilter *_utf8Buffer;
    PBXDebugCLIModule *_consoleToCopyTo;
    BOOL _sendTextEnabled;
    BOOL _repeatLastCommandOnNewline;
    BOOL _supportsCompletion;
    PBXTSCharacterStream *_stdinStream;
    PBXTSUTF8EncoderFilter *_utf8StdinEncoder;
    PBXTSUTF8BufferFilter *_utf8StdoutBuffer;
    BOOL _isIncrementalFinderBarVisible;
    XCIncrementalFinder *_incrementalFinder;
    BOOL _isTiling;
}

+ (void)initialize;
- (void)hideIncrementalFindBar:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (BOOL)isIncrementalFinderBarVisible;
- (void)_viewFrameDidChange:(id)arg1;
- (void)setIncrementalFinderBarVisible:(BOOL)arg1 withReplace:(BOOL)arg2;
- (void)tile;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)setRepeatLastCommandOnNewline:(BOOL)arg1;
- (id)moduleForAction:(SEL)arg1;
- (id)incrementalFindNextKeyView;
- (void)incrementalFindBarChangedSize;
- (void)incrementalFindBarDismissed;
- (id)textView;
- (unsigned long long)replaceAllStringsMatchingRegularExpression:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4;
- (unsigned long long)replaceAllStringsMatchingString:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4 matchStyle:(int)arg5;
- (BOOL)replaceCurrentSelectionWithString:(id)arg1;
- (BOOL)allowsReplace;
- (void)showIncrementalFindAndReplaceBar:(id)arg1;
- (BOOL)findRegularExpression:(id)arg1 ignoreCase:(BOOL)arg2 backwards:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)findText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;
- (id)selectedString;
- (id)mainEditor;
- (unsigned long long)textLength;
- (void)setInputText:(id)arg1;
- (void)launchSession:(id)arg1 setStringAsIfTypedByUser:(id)arg2;
- (void)launchSession:(id)arg1 setCLIPrompt:(id)arg2;
- (void)launchSession:(id)arg1 displayString:(id)arg2;
- (void)reset;
- (void)setSendTextEnabled:(BOOL)arg1;
- (void)clear;
- (void)ttyTextDoInterrupt:(id)arg1;
- (id)stdinStreamForExecutable;
- (id)utf8ExecutableStdinStream;
- (id)executableStdoutConsumer;
- (id)byteStreamConsumerToTTY;
- (id)utf8StreamFromTTY;
- (id)characterStreamFromTTY;
- (void)ttyText:(id)arg1 inputText:(id)arg2;
- (void)ttyText:(id)arg1 stdinText:(id)arg2;
- (void)insertText:(id)arg1 withTextAttributes:(id)arg2;
- (void)streamDidEnd:(id)arg1;
- (void)stream:(id)arg1 processCharacters:(id)arg2;
- (void)setCopyStreamedTextToConsole:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setProcessIsRunning;
- (void)complete:(id)arg1;
- (void)setSupportsCompletion:(BOOL)arg1;
- (BOOL)supportsCompletion;
- (void)doNextCommand:(id)arg1;
- (void)doPrevCommand:(id)arg1;
- (id)ttyTextView;
- (void)becomeActive;
- (void)viewDidLoad;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (id)description;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end

