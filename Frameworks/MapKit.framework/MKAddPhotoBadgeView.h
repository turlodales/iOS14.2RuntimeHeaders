/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAddPhotoBadgeView : UIView <MKActivityObserving> {
    UIVisualEffectView * _backgroundView;
    <MKAddPhotoBadgeViewDelegate> * _delegate;
    UITapGestureRecognizer * _gestureRecognizer;
    UIImageView * _imageView;
    UILabel * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, readonly) double compressedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKAddPhotoBadgeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fullHeight;
@property (nonatomic, readonly) double fullWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double margin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_badgeViewTapped;
- (void)_setupGestureRecognizer;
- (void)_setupSubviews;
- (void)beginAnimatingActivityIndicator;
- (double)compressedWidth;
- (id)delegate;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (double)fullHeight;
- (double)fullWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)margin;
- (void)setDelegate:(id)arg1;

@end