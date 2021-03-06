/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver> {
    ATXHomeScreenPrediction * _currentPrediction;
    SBHIconManager * _iconManager;
    NSHashTable * _observers;
}

@property (nonatomic, retain) ATXHomeScreenPrediction *currentPrediction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_iconDataSourceInIcon:(id)arg1 withUniqueIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 widgetKind:(id)arg4 suggestion:(bool)arg5;
- (void)addObserver:(id)arg1;
- (id)currentPrediction;
- (id)iconManager;
- (id)iconModel;
- (id)initWithIconManager:(id)arg1;
- (void)processUpdatedPredictions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)rootFolder;
- (void)setCurrentPrediction:(id)arg1;
- (void)suggestionClientDidRefreshSuggestions:(id)arg1;
- (void)updatePredictions;

@end
