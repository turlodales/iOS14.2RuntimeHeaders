/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDoorbellChimeController : NSObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging> {
    NSSet * _availableCharacteristics;
    <HMDDoorbellChimeControllerContext> * _context;
    NSDate * _lastUnidentifiedChimeDate;
}

@property (retain) NSSet *availableCharacteristics;
@property (retain) <HMDDoorbellChimeControllerContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *lastUnidentifiedChimeDate;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleCharacteristicsValueUpdated:(id)arg1;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(bool)arg1 attemptCloudPullIfNoPersonsFound:(bool)arg2;
- (id)availableCharacteristics;
- (id)clientIdentifier;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)handleCharacteristicsValueUpdated:(id)arg1;
- (void)handleUpdatedPersonIdentificationInformation;
- (id)init;
- (id)lastUnidentifiedChimeDate;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;
- (void)setAvailableCharacteristics:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLastUnidentifiedChimeDate:(id)arg1;

@end