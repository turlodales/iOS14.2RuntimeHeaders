/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
 */

@interface CCVegaJSMouseEvent : NSObject <CCVegaJSMouseEventInterface> {
    double  clientX;
    double  clientY;
    bool  defaultPrevented;
    bool  isConsumed;
    double  movementX;
    double  movementY;
    bool  propagationStopped;
}

@property (nonatomic) double clientX;
@property (nonatomic) double clientY;
@property (nonatomic) bool defaultPrevented;
@property (nonatomic) bool isConsumed;
@property (nonatomic) double movementX;
@property (nonatomic) double movementY;
@property (nonatomic) bool propagationStopped;

- (double)clientX;
- (double)clientY;
- (bool)defaultPrevented;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 movement:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isConsumed;
- (double)movementX;
- (double)movementY;
- (void)preventDefault;
- (bool)propagationStopped;
- (void)setClientX:(double)arg1;
- (void)setClientY:(double)arg1;
- (void)setDefaultPrevented:(bool)arg1;
- (void)setIsConsumed:(bool)arg1;
- (void)setMovementX:(double)arg1;
- (void)setMovementY:(double)arg1;
- (void)setPropagationStopped:(bool)arg1;
- (void)stopPropagation;

@end
