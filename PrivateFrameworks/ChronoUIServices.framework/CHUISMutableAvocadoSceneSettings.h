/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISMutableAvocadoSceneSettings : UIMutableApplicationSceneSettings {
    bool  _privateModeEnabled;
}

@property (getter=areAnimationsDisabled, nonatomic) bool animationsDisabled;
@property (nonatomic, copy) CHSWidgetMetrics *metrics;
@property (getter=isPrivateModeEnabled, nonatomic) bool privateModeEnabled;
@property (nonatomic) unsigned long long style;
@property (getter=shouldVisibleEntrySnapshot, nonatomic) bool visibleEntryShouldSnapshot;
@property (getter=isVisiblySettled, nonatomic) bool visiblySettled;
@property (nonatomic, copy) CHSWidget *widget;
@property (nonatomic, copy) NSString *widgetConfigurationIdentifier;

- (bool)areAnimationsDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isPrivateModeEnabled;
- (bool)isVisiblySettled;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)metrics;
- (bool)privateMode;
- (void)setAnimationsDisabled:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPrivateModeEnabled:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVisibleEntryShouldSnapshot:(bool)arg1;
- (void)setVisiblySettled:(bool)arg1;
- (void)setWidget:(id)arg1;
- (void)setWidgetConfigurationIdentifier:(id)arg1;
- (bool)shouldVisibleEntrySnapshot;
- (unsigned long long)style;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)widget;
- (id)widgetConfigurationIdentifier;

@end