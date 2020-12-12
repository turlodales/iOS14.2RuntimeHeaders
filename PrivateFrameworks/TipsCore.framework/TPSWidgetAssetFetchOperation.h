/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation {
    NSURL * _darkAssetURL;
    NSURL * _lightAssetURL;
    TPSWidgetController * _widgetController;
    TPSTip * _widgetTip;
}

@property (nonatomic, retain) NSURL *darkAssetURL;
@property (nonatomic, retain) NSURL *lightAssetURL;
@property (nonatomic, readonly) TPSWidgetController *widgetController;
@property (nonatomic, readonly) TPSTip *widgetTip;

- (void).cxx_destruct;
- (id)darkAssetURL;
- (id)initWithTip:(id)arg1 widgetController:(id)arg2;
- (id)lightAssetURL;
- (void)main;
- (void)setDarkAssetURL:(id)arg1;
- (void)setLightAssetURL:(id)arg1;
- (id)widgetController;
- (id)widgetTip;

@end