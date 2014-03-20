//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXBuildContext.h>

#import "XCBuildInfoManagers.h"

@class NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSThread, PBXBuildSettingsDictionary, PBXTarget, XCBuildStateStore, XCDependencyInfoCache, XCHierarchicalOutputLog, XCPlatformSpecification, XCSDKPackage, XCTargetDGSnapshot;

@interface PBXTargetBuildContext : PBXBuildContext <XCBuildInfoManagers>
{
    PBXTarget *_target;
    NSString *_presumedBuildAction;
    NSString *_presumedConfigName;
    PBXBuildSettingsDictionary *_overridingProperties;
    NSString *_presumedActiveArchitecure;
    NSMutableArray *_depGraphEvents;
    NSRecursiveLock *_depGraphLock;
    unsigned long long _depGraphLockLevel;
    NSThread *_depGraphAccessorThread;
    BOOL _needsDependencyGraphCreation;
    BOOL _shouldCancelDependencyGraphCreation;
    BOOL _hasPopulatedAuxiliaryBuildInfo;
    void *RESERVED1;
    NSString *_buildDirectoryPath;
    NSMutableDictionary *_cachedHeadermaps;
    NSMutableDictionary *_headerSearchContexts;
    NSMutableDictionary *_indexingInfoDicts;
    NSMutableDictionary *_effectiveSearchPaths;
    NSMutableArray *_searchPathsForRez;
    XCSDKPackage *_sdkPackage;
    XCPlatformSpecification *_platform;
    NSMutableArray *_nodes;
    NSMutableArray *_commands;
    NSMutableDictionary *_commandsToRerun;
    NSMutableDictionary *_nodesByName;
    NSMutableArray *_depAnalysisMessageStrings;
    NSMutableArray *_buildSetupMessageStrings;
    unsigned long long _numDepAnalysisErrors;
    unsigned long long _numDepAnalysisWarnings;
    NSMutableSet *_deploymentTargetChecksPerformed;
    NSMutableDictionary *_headermapToolInvocations;
    NSMutableDictionary *_auxiliaryFilesData;
    NSMutableDictionary *_auxiliaryFilesPermissions;
    NSMutableDictionary *_auxiliarySymlinksContents;
    NSMutableDictionary *_filePathsToBuildFileRefs;
    NSMutableDictionary *_sourcesToObjFiles;
    NSMutableDictionary *_objFilesToSources;
    NSCountedSet *_countedBuildFileBaseNames;
    NSMutableDictionary *_constantBuildToolFlags;
    NSMutableDictionary *_filePathLists;
    NSArray *_pathPrefixesExcludedFromHeaderDependencies;
    NSMutableDictionary *_compatibleToolsAndSDKs;
    unsigned long long _currentPhaseNumber;
    BOOL _autoIncrementPhaseNumber;
    NSMutableDictionary *_extraLinkerParameters;
    XCHierarchicalOutputLog *_debugOutputLog;
    unsigned long long _debugOutputEnableCount;
    BOOL _enableDistBuilds;
    int _distributedBuildSystemInUse;
    NSString *_distributedBuildToolCommandPath;
    NSArray *_distBuildsServerList;
    NSDictionary *_distBuildsEnvEntries;
    unsigned long long _distBuildsParallelTasks;
    NSMutableArray *_linkerBuildMessages;
    NSMutableArray *_otherBuildMessages;
    NSMutableDictionary *_identsToBuildInfos;
    NSMutableSet *_changedBuildInfos;
    BOOL _needToPostBuildInfoNote;
    XCDependencyInfoCache *_dependencyInfoCache;
    NSMutableArray *_productNodes;
    XCTargetDGSnapshot *_targetSnapshotForDG;
    NSMutableArray *_nodesThatNeedToSetBuildInfo;
    NSMutableSet *_derivedFileCaches;
    NSMutableDictionary *_fileSystemObservers;
    XCBuildStateStore *_buildStateStore;
}

+ (id)headerFileExtensionsForHeadermaps;
+ (id)identifierForTraditionalHeadermap;
+ (id)identifierForHeadermapWithAllHeadersInProject;
+ (id)identifierForHeadermapWithAllProductHeadersInProject;
+ (id)identifierForHeadermapWithProductHeaders;
+ (id)identifierForHeadermapWithGeneratedFiles;
+ (id)identifierForHeadermapWithBreadthFirstRecursiveContentsAtPath:(id)arg1;
+ (void)initialize;
+ (id)sharedDependencyGraphEventProcessingInvocationQueue;
+ (void)_setupThreadTraceName;
- (void)_2009_enqueueCommandsOntoWorkQueue:(id)arg1 startingAtNode:(id)arg2;
- (id)nodesMatchingPattern:(id)arg1;
- (id)description;
- (id)debugOutputLog;
- (void)finishLoggingDebugOutput;
- (void)startLoggingDebugOutputIfAppropriate;
- (BOOL)writeToGraphVizFileAtPath:(id)arg1;
- (void)_makeNodesSetBuildInfoIfNeeded;
- (void)_addNodeThatNeedsToSetBuildInfo:(id)arg1;
- (void)enqueueAllOutOfDateCommandsOntoWorkQueue:(id)arg1;
- (void)enqueueOutOfDateCommandsOntoWorkQueue:(id)arg1 startingAtNode:(id)arg2;
- (void)checkWaitCountsOfAllDependencyNodes;
- (void)analyzeAllProductDependencies;
- (void)analyzeDependenciesForFilePaths:(id)arg1;
- (void)analyzeDependenciesForNodes:(id)arg1;
- (void)resetStatesOfAllDependencyNodes;
- (void)addProductNode:(id)arg1;
- (id)productNodes;
- (BOOL)writeAuxiliaryFilesForBuildOperation:(id)arg1 buildLogRecorder:(id)arg2;
- (id)importedFilesForPath:(id)arg1;
- (id)importedFilesForPath:(id)arg1 ensureFilesExist:(BOOL)arg2;
- (id)_XCOQ_searchContext;
- (BOOL)shouldScanHeadersOfFileAtPath:(id)arg1;
- (id)makeSymlinkToFileAtPath:(id)arg1 atPath:(id)arg2;
- (id)moveFileAtPath:(id)arg1 toPath:(id)arg2;
- (id)dittoFileAtPath:(id)arg1 toPath:(id)arg2;
- (id)copyFileAtPath:(id)arg1 toPath:(id)arg2;
- (id)touchFileAtPath:(id)arg1;
- (id)createDirectoryAtPath:(id)arg1;
- (id)buildDirectoryPath;
- (void)removeAllBuildMessages;
- (void)removeAllUncategorizedBuildMessages;
- (void)addUncategorizedBuildMessage:(id)arg1;
- (id)uncategorizedBuildMessages;
- (void)removeAllLinkerBuildMessages;
- (void)addLinkerBuildMessage:(id)arg1;
- (id)linkerBuildMessages;
- (void)removeAllBuildMessagesForFileAtPath:(id)arg1;
- (void)addBuildMessage:(id)arg1 forFileAtPath:(id)arg2;
- (id)buildMessagesForFileAtPath:(id)arg1;
- (id)writeDependencyInfoCacheToBuildDirectory:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)readDependencyInfoCacheFromBuildDirectory:(id)arg1;
- (id)buildStateStore;
- (id)dependencyInfoCache;
- (id)dependencyInfoCacheFilename;
- (void)clearCompiledFileInfoForAllFiles;
- (void)clearCompiledFileInfoForFileAtPath:(id)arg1;
- (id)buildInfoForFileAtPath:(id)arg1;
- (void)postBuildInfoNotificationIfNeeded;
- (void)noteBuildInfoDidChange:(id)arg1;
- (id)buildInfoForEntityIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)isFileUpToDateAtPath:(id)arg1;
- (id)searchPathsForRez;
- (id)effectiveRezSearchPaths;
- (id)effectiveLibrarySearchPaths;
- (id)effectiveFrameworkSearchPaths;
- (id)effectiveUserHeaderSearchPaths;
- (id)effectiveHeaderSearchPaths;
- (id)_effectiveSearchPathsForSearchPathBuildSetting:(id)arg1;
- (id)effectiveSearchPathsForSearchPath:(id)arg1;
- (void)generateHeadermapFiles;
- (void)setHeadermapToolInvocation:(id)arg1 forFilePath:(id)arg2;
- (void)setHeadermap:(id)arg1 forIdentifier:(id)arg2;
- (id)headermapForIdentifier:(id)arg1;
- (void)addDerivedFileCache:(id)arg1;
- (void)pruneDerivedFileCaches;
- (id)disassembledFilePathForSourceFilePath:(id)arg1;
- (id)preprocessedFilePathForSourceFilePath:(id)arg1;
- (id)constantFlagsForBuildToolWithIdentifier:(id)arg1;
- (unsigned long long)countForBuildFileBaseName:(id)arg1;
- (void)countBuildFileBaseName:(id)arg1;
- (id)sourceFilePathForCompiledFilePath:(id)arg1;
- (id)compiledFilePathForSourceFilePath:(id)arg1;
- (id)buildFileRefForPath:(id)arg1;
- (id)filePathListWithIdentifier:(id)arg1;
- (void)addPath:(id)arg1 toFilePathListWithIdentifier:(id)arg2;
- (BOOL)effectiveSDKPackageIsCompatibleWithCommandLineTool:(id)arg1 forFileAtPath:(id)arg2;
- (void)checkDeploymentTargetAgainstSDKForCommandLineTool:(id)arg1;
- (void)setConstantFlags:(id)arg1 forBuildToolWithIdentifier:(id)arg2;
- (void)setCompiledFilePath:(id)arg1 forSourceFilePath:(id)arg2;
- (void)defineSymlinkContents:(id)arg1 forAuxiliarySymlinkAtPath:(id)arg2;
- (id)symlinkContentsForAuxiliarySymlinkAtPath:(id)arg1;
- (void)defineFileContents:(id)arg1 forAuxiliaryFileAtPath:(id)arg2;
- (id)fileContentsForAuxiliaryFileAtPath:(id)arg1;
- (void)defineFileContents:(id)arg1 forAuxiliaryFileAtPath:(id)arg2 withPosixPermissions:(unsigned long long)arg3;
- (void)addDependencyAnalysisBuildOnlyWarningMessageFormat:(id)arg1;
- (void)addDependencyAnalysisWarningMessageFormat:(id)arg1;
- (void)addDependencyAnalysisBuildOnlyErrorMessageFormat:(id)arg1;
- (void)addDependencyAnalysisErrorMessageFormat:(id)arg1;
- (void)_addDependencyAnalysisMessageString:(id)arg1;
- (unsigned long long)numberOfDependencyAnalysisWarnings;
- (unsigned long long)numberOfDependencyAnalysisErrors;
- (void)removeAllBuildSetupMessageStrings;
- (id)dependencyAnalysisMessageStrings;
- (void)cancelDependencyGraphCreation;
- (BOOL)shouldCancelDependencyGraphCreation;
- (id)commandWithNumber:(unsigned long long)arg1;
- (unsigned long long)numberOfCommands;
- (id)commands;
- (id)createCommandWithPath:(id)arg1 ruleInfo:(id)arg2;
- (id)createCommandWithRuleInfo:(id)arg1 commandPath:(id)arg2 arguments:(id)arg3 forNode:(id)arg4;
- (void)registerDependencyCommand:(id)arg1;
- (id)invokeTask:(id)arg1 forInputs:(id)arg2 options:(id)arg3;
- (id)invokeTask:(id)arg1 forInputs:(id)arg2 optionDictionary:(id)arg3;
- (void)_addMappingFromPath:(id)arg1 toNode:(id)arg2;
- (id)dependencyNodeWithNumber:(unsigned long long)arg1;
- (unsigned long long)numberOfDependencyNodes;
- (id)dependencyNodeForName:(id)arg1;
- (void)removeAllCompilerRequestedLinkerParameters;
- (void)addCompilerRequestedLinkerParameters:(id)arg1;
- (id)compilerRequestedLinkerParameters;
- (void)addCommandToRerun:(id)arg1 name:(id)arg2;
- (void)setAutoIncrementsPhaseNumber:(BOOL)arg1;
- (BOOL)autoIncrementsPhaseNumber;
- (void)incrementCurrentPhaseNumber;
- (unsigned long long)currentPhaseNumber;
- (id)dependencyNodeForName:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)preprocessingInfoForIndexingSourceFilesWithCompiler:(id)arg1 languageDialect:(id)arg2;
- (id)preprocessingInfoDictionaries;
- (id)headerFileSearchContextForSourceFilesUsingCompiler:(id)arg1 languageDialect:(id)arg2;
- (id)_searchPathsForCurrentStateAndOtherFlagsBuildSettingsName:(id)arg1 builtinSystemHeaderSearchPaths:(id)arg2 builtinFrameworkSearchPaths:(id)arg3;
- (void)removeSearchPathArgumentsFromArrayOfCommandLineArguments:(id)arg1;
- (id)effectivePlatform;
- (id)effectiveSDKPackage;
- (void)dependencyGraphCreationDidComplete;
- (void)createDependencyGraphWithTargetDGSnapshot:(id)arg1;
- (BOOL)doesCurrentThreadHoldDependencyGraphLock;
- (void)unlockDependencyGraph;
- (void)lockDependencyGraph;
- (BOOL)lockDependencyGraphBeforeDate:(id)arg1;
- (id)naturalPathForPath:(id)arg1;
- (id)absolutePathForPath:(id)arg1;
- (id)baseDirectoryPath;
- (BOOL)hasPopulatedAuxiliaryBuildInfo;
- (id)distributedBuildToolCommandPath;
- (int)distributedBuildSystemInUse;
- (BOOL)shouldUseDistributedBuilds;
- (void)enableCacheInvalidation;
- (void)disableCacheInvalidation;
- (void)_activeSDKDidChange:(id)arg1;
- (void)_activeBuildConfigurationNameDidChange:(id)arg1;
- (void)_projectWillClose:(id)arg1;
- (id)platformDomain;
- (id)targetSnapshot;
- (void)setOverridingProperties:(id)arg1;
- (id)overridingProperties;
- (void)setPresumedActiveArchitecture:(id)arg1;
- (id)presumedActiveArchitecture;
- (void)setPresumedBuildConfigurationName:(id)arg1;
- (id)presumedBuildConfigurationName;
- (void)setPresumedBuildAction:(id)arg1;
- (id)presumedBuildAction;
- (void)invalidate;
- (id)target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (void)dg_untouchNodeForFileAtPath:(id)arg1;
- (void)untouchNodeForFileAtPath:(id)arg1;
- (void)dg_touchNodeForFileAtPath:(id)arg1;
- (void)touchNodeForFileAtPath:(id)arg1;
- (void)dg_noteFileSystemDidChangeAtPath:(id)arg1;
- (void)noteFileSystemDidChangeAtPath:(id)arg1;
- (void)waitForDependencyGraph;
- (void)noteTargetSnapshotDidPrepareToCreateDependencies;
- (void)finishedSettingTargetSnapshot;
- (void)dg_setTargetSnapshot:(id)arg1;
- (void)setTargetSnapshot:(id)arg1;
- (void)processDependencyGraphEvents;
- (void)handleFailureInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 messageFormat:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)enqueueDependencyGraphEventInvocation:(id)arg1;

@end

