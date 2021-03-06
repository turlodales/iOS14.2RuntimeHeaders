/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAgeObserver : NSObject {
    NSNumber * _age;
    int  _characteristicUpdateToken;
    HKHealthStore * _healthStore;
}

@property (nonatomic, retain) NSNumber *age;
@property (nonatomic) int characteristicUpdateToken;
@property (nonatomic, retain) HKHealthStore *healthStore;

+ (id)age;
+ (id)sharedAgeObserver;

- (void).cxx_destruct;
- (id)_computeAge;
- (void)_registerForSignificantTimeChangeNotification;
- (id)age;
- (int)characteristicUpdateToken;
- (void)checkForAgeChange;
- (void)dealloc;
- (id)healthStore;
- (id)init;
- (void)setAge:(id)arg1;
- (void)setCharacteristicUpdateToken:(int)arg1;
- (void)setHealthStore:(id)arg1;

@end
