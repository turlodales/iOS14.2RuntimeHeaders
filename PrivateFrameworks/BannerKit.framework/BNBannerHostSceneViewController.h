/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNBannerHostSceneViewController : UIViewController <BNBannerHostSceneViewControllerViewDelegate, BNBannerSourceListenerPresentable, BNPresentableObservable, BNPresentableUniquelyIdentifying, BSInvalidatable, FBSceneObserver> {
    NSMutableArray * _activeSizeTransitionActions;
    int  _bannerAppearState;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bannerContentOutsets;
    BSAnimationSettings * _bannerSizeTransitionAnimationSettings;
    NSHashTable * _observers;
    long long  _presentableType;
    id /* block */  _readyCompletion;
    NSString * _requestIdentifier;
    NSString * _requesterIdentifier;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) int bannerAppearState;
@property (nonatomic, readonly) FBProcess *clientProcess;
@property (getter=isContentHosted, nonatomic, readonly) bool contentHosted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentableType;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (nonatomic, copy) id /* block */ readyCompletion;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_makeReadyIfPossibleWithScene:(id)arg1;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id /* block */)_tearDownSceneBlock:(id)arg1;
- (void)_tearDownSceneIfNecessary;
- (void)_tearDownSceneInfrastructure;
- (void)_tearDownScenePresenterIfNecessary;
- (void)_updateBannerContentOutsetsWithScene:(id)arg1;
- (void)_updatePreferredContentSizeWithScene:(id)arg1 transitionContext:(id)arg2;
- (void)addPresentableObserver:(id)arg1;
- (int)bannerAppearState;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (void)bannerHostSceneViewControllerViewDidChangeSize:(id)arg1;
- (id)bannerSizeTransitionAnimationSettings;
- (id)clientProcess;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForBannerHostSceneViewControllerView:(id)arg1;
- (void)dealloc;
- (id)initWithWithSpecification:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (bool)isContentHosted;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isReady;
- (bool)isTouchOutsideDismissalEnabled;
- (void)loadView;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (long long)presentableType;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id /* block */)readyCompletion;
- (void)removePresentableObserver:(id)arg1;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)scene;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setReadyCompletion:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
