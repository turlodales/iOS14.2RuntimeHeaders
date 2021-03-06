/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceRouteSimulator : NSObject <MNLocationProvider, MNTimeProvider> {
    id /* block */  _authorizationRequestBlock;
    <MNLocationProviderDelegate> * _delegate;
    double  _deltaT;
    struct { 
        double latitude; 
        double longitude; 
    }  _destination;
    double  _duration;
    double  _horizontalAccuracy;
    NSArray * _locations;
    NSMutableArray * _mutableLocations;
    struct { 
        double latitude; 
        double longitude; 
    }  _origin;
    NSDictionary * _pointTimestamps;
    NSMutableArray * _priorityQueue;
    MNTraceEventRecorder * _recorder;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    double  _simulationSpeedOverride;
    NSDate * _startTime;
    double  _time;
    NSArray * _traceEvents;
    double  _verticalAccuracy;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingEnd;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingStart;
}

@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic, readonly) bool coarseModeEnabled;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic, readonly) bool isSimulation;
@property (nonatomic, readonly) bool isTracePlayer;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic) double simulationSpeedOverride;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) NSArray *traceEvents;
@property (nonatomic, readonly) unsigned long long traceVersion;
@property (nonatomic, readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (void)_addLocation:(struct { double x1; double x2; })arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5;
- (double)_estimateDuration;
- (void)_generateEvents;
- (void)_generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_generateLocationsWithSpeedOverride:(double)arg1;
- (void)_setup;
- (void)_simulateWalkingFrom:(struct { double x1; double x2; })arg1 to:(struct { double x1; double x2; })arg2;
- (void)_tearDown;
- (id /* block */)authorizationRequestBlock;
- (int)authorizationStatus;
- (bool)coarseModeEnabled;
- (id)currentDate;
- (double)currentTime;
- (id)delegate;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (void)generateGuidance;
- (void)generateLocations;
- (int)headingOrientation;
- (double)horizontalAccuracy;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 locations:(id)arg5;
- (void)insertVoiceEventAtTime:(double)arg1 completion:(id /* block */)arg2;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (bool)isTracePlayer;
- (id)locations;
- (bool)matchInfoEnabled;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionDidStart:(id)arg1 isReconnecting:(bool)arg2;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)recordLocationsAlongRouteWithRecorder:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetForActiveTileGroupChanged;
- (void)setAuthorizationRequestBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (double)simulationSpeedOverride;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (id)traceEvents;
- (unsigned long long)traceVersion;
- (bool)usesCLMapCorrection;

@end
