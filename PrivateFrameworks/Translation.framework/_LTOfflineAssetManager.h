/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTOfflineAssetManager : NSObject

+ (id)fallBackAssetResourcePath;
+ (void)initialize;

- (id)CDN_propertyList;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)arg1;
- (void)_clearCaches;
- (id)_configPlistWithFileName:(id)arg1;
- (void)_downloadPassthroughAssetForLocale:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_downloadVoiceAsset:(id)arg1;
- (void)_queryLanguagePairStatus:(id /* block */)arg1;
- (void)_refreshAllAssets:(id /* block */)arg1;
- (void)_refreshCatalogIfNeededWithCompletion:(id /* block */)arg1;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 installedAssets:(id)arg2 catalogAssets:(id)arg3 config:(id)arg4 error:(id*)arg5;
- (id)_voiceAssetForLocaleIdentifier:(id)arg1;
- (id)assetDirectory;
- (id)assetIdentifierReferenceCountDictionary;
- (void)assetSize:(id /* block */)arg1;
- (id)assetsSortedByVersion:(id)arg1;
- (id)catalogAssets;
- (id)configAsset;
- (id)configAssetInAssets:(id)arg1;
- (id)configAssetURL;
- (id)configurationPropertyListWithName:(id)arg1;
- (id)configurationPropertyListWithURL:(id)arg1;
- (void)debugDumpAssets:(id)arg1;
- (void)deleteAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAsset:(id)arg1 downloadOptions:(id)arg2 progressCallback:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)downloadAsset:(id)arg1 userInitiated:(bool)arg2 progressCallback:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)downloadAsset:(id)arg1 userInitiated:(bool)arg2 useCellular:(bool)arg3 progressCallback:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)downloadAssetsForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)downloadVoiceAssetsForLanguagePair:(id)arg1;
- (id)endpointAssetInfoWithContext:(id)arg1 error:(id*)arg2;
- (id)getEndpointerAssetWithType:(long long)arg1 error:(id*)arg2;
- (id)init;
- (id)installedAssets;
- (id)languageDetectorAssetWithError:(id*)arg1;
- (id)matchingASRAssetForLocale:(id)arg1 inAssets:(id)arg2;
- (id)modelURLForLanguagePair:(id)arg1;
- (void)offlineLanguageStatus:(id /* block */)arg1;
- (void)purgeAllAssetsExcludingConfig:(bool)arg1 completion:(id /* block */)arg2;
- (void)purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)refreshAllIfNeededWithCompletion:(id /* block */)arg1;
- (id)speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2;
- (void)updateAllAssets:(id /* block */)arg1;
- (void)updateSpeechTranslationAssetSymLinks:(id)arg1;

@end