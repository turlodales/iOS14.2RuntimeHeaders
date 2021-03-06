/* Generated by RuntimeBrowser.
 */

@protocol MNTimeballLocationProvider <NSObject>

@required

- (<CLLocationManagerDelegate> *)delegate;
- (double)desiredAccuracy;
- (id)initWithEffectiveBundle:(NSBundle *)arg1 delegate:(id <CLLocationManagerDelegate>)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (id)initWithEffectiveBundleIdentifier:(NSString *)arg1 delegate:(id <CLLocationManagerDelegate>)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (CLLocation *)location;
- (void)setDelegate:(id <CLLocationManagerDelegate>)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
