/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAsymmetricalCornerRadiusWrapperView : UIView {
    BSCornerRadiusConfiguration * _cornerRadiusConfiguration;
    unsigned long long  _maskedCorners;
    UIView * _trailingCornersMaskingView;
}

@property (nonatomic, retain) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;

- (void).cxx_destruct;
- (void)_updateCornerRadius;
- (void)_updateMaskedCorners;
- (void)addContentView:(id)arg1;
- (void)bringContentViewToFront:(id)arg1;
- (id)cornerRadiusConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maskedCorners;
- (void)sendContentViewToBack:(id)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setCornerRadiusConfiguration:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;

@end