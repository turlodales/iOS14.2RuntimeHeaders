/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHHomeScreenSettings : PTSettings {
    SBHAppLibrarySettings * _appLibrarySettings;
    SBHFolderSettings * _folderSettings;
    SBHIconAnimationRootSettings * _iconAnimationSettings;
    SBHIconEditingSettings * _iconEditingSettings;
    SBHIconSettings * _iconSettings;
    SBHHomePullToSearchSettings * _pullToSearchSettings;
    SBHRootFolderSettings * _rootFolderSettings;
    bool  _showPopOvers;
    bool  _usesMinimumViableHomeScreen;
    SBHWidgetSettings * _widgetSettings;
}

@property (nonatomic, retain) SBHAppLibrarySettings *appLibrarySettings;
@property (nonatomic, retain) SBHFolderSettings *folderSettings;
@property (nonatomic, retain) SBHIconAnimationRootSettings *iconAnimationSettings;
@property (nonatomic, retain) SBHIconEditingSettings *iconEditingSettings;
@property (nonatomic, retain) SBHIconSettings *iconSettings;
@property (nonatomic, retain) SBHHomePullToSearchSettings *pullToSearchSettings;
@property (nonatomic, retain) SBHRootFolderSettings *rootFolderSettings;
@property (nonatomic) bool showPopOvers;
@property (nonatomic) bool usesMinimumViableHomeScreen;
@property (nonatomic, retain) SBHWidgetSettings *widgetSettings;

+ (id)homeScreenDefaults;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)appLibrarySettings;
- (id)folderSettings;
- (id)iconAnimationSettings;
- (id)iconEditingSettings;
- (id)iconSettings;
- (id)pullToSearchSettings;
- (id)rootFolderSettings;
- (void)setAppLibrarySettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFolderSettings:(id)arg1;
- (void)setIconAnimationSettings:(id)arg1;
- (void)setIconEditingSettings:(id)arg1;
- (void)setIconSettings:(id)arg1;
- (void)setPullToSearchSettings:(id)arg1;
- (void)setRootFolderSettings:(id)arg1;
- (void)setShowPopOvers:(bool)arg1;
- (void)setUsesMinimumViableHomeScreen:(bool)arg1;
- (void)setWidgetSettings:(id)arg1;
- (bool)showPopOvers;
- (bool)usesMinimumViableHomeScreen;
- (id)widgetSettings;

@end