/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

@interface TFBetaAppLaunchPresenter : NSObject {
    NSString * _bundleIdentifier;
    TFImageFetcher * _imageFetcher;
    <TFBetaAppLaunchDataProvider> * _launchDataProvider;
    TFLaunchScreen * _launchScreen;
    <TFBetaAppLaunchPresenterView> * _presenterView;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) TFImageFetcher *imageFetcher;
@property (nonatomic, readonly) <TFBetaAppLaunchDataProvider> *launchDataProvider;
@property (nonatomic, retain) TFLaunchScreen *launchScreen;
@property (nonatomic) <TFBetaAppLaunchPresenterView> *presenterView;

- (void).cxx_destruct;
- (void)_abortLaunchScreenLoadWithError:(id)arg1;
- (void)_showHowToViewWithLaunchScreen:(id)arg1;
- (void)_showLoading;
- (void)_showTestNotesViewWithLaunchScreen:(id)arg1;
- (id)bundleIdentifier;
- (void)exitLaunchScreen;
- (id)imageFetcher;
- (id)initForIdentifier:(id)arg1 launchDataProvider:(id)arg2 launchScreenSidepack:(id)arg3;
- (id)launchDataProvider;
- (id)launchScreen;
- (void)openHowToSupportLink;
- (id)presenterView;
- (void)setLaunchScreen:(id)arg1;
- (void)setPresenterView:(id)arg1;
- (void)showHowToScreen;
- (void)update;

@end