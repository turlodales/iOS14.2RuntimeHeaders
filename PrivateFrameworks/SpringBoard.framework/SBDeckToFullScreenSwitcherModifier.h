/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier * _deckModifier;
    long long  _direction;
    SBAppLayout * _fullScreenAppLayout;
    bool  _wantsMinificationFilter;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 deckModifier:(id)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (bool)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
