/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNSizeTransitionAction : BSAction

@property (nonatomic, readonly) long long sizeTransitionActionState;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (id)_initWithUniqueIdentifier:(id)arg1 state:(long long)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)sizeTransitionActionState;
- (struct CGSize { double x1; double x2; })targetSize;
- (id)transitionCompleteAction;
- (id)uniqueIdentifier;

@end