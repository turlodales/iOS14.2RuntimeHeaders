/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface ASVDampingDeceleration : ASVDeceleration {
    float  _decelerationRate;
}

@property (nonatomic) float decelerationRate;

- (float)decelerationDelta;
- (float)decelerationRate;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 decelerationRate:(float)arg3;
- (void)setDecelerationRate:(float)arg1;

@end