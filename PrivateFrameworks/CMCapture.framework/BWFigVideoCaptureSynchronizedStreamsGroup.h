/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {
    bool  _atomicMasterSlaveReconfigurationSupported;
    NSDictionary * _baseZoomFactorsByPortType;
    BWFigVideoCaptureStream * _cameraControlsStatisticsMasterStream;
    NSDictionary * _cameraPoseMatricesByPortType;
    NSDictionary * _cameraViewMatricesByPortType;
    NSDictionary * _clientBaseZoomFactorsByPortType;
    BWFigVideoCaptureStream * _currentMasterStream;
    NSDictionary * _currentSlaveConfigurationsByPortType;
    bool  _masterConfigurationSupported;
    int  _maximumNumberOfEnabledSlaveTimeMachines;
    int  _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    NSArray * _portTypes;
    bool  _readOnly;
    bool  _sensorToOutputSkippingEnabled;
    bool  _statsMasterHasBeenSet;
    NSArray * _streams;
    BWFigCaptureSynchronizedStreamsGroup * _synchronizedStreamsGroup;
}

@property (nonatomic, copy) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, readonly) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;
@property (nonatomic, readonly) NSDictionary *clientBaseZoomFactorsByPortType;
@property (nonatomic, readonly) bool maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (nonatomic, readonly) bool minimumMasterToSlaveFrameRateRatioSupported;
@property (nonatomic, readonly) NSArray *portTypes;
@property (nonatomic, readonly) BWFigCaptureSynchronizedStreamsGroup *syncGroup;

+ (void)initialize;

- (int)_computeBaseZoomFactorsWithOverrides:(id)arg1;
- (int)_getViewAndPoseMatrices;
- (id)_slaveConfigurationForStream:(id)arg1;
- (id)_worldPortType;
- (id)baseZoomFactorsByPortType;
- (id)cameraControlsStatisticsMasterStream;
- (id)cameraPoseMatrixForPortType:(id)arg1;
- (id)cameraViewMatrixForPortType:(id)arg1;
- (id)clientBaseZoomFactorsByPortType;
- (void)dealloc;
- (id)initWithSynchronizedStreamsGroup:(id)arg1 activeStreams:(id)arg2 readOnly:(bool)arg3 baseZoomFactorOverrides:(id)arg4 error:(int*)arg5;
- (bool)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (bool)minimumMasterToSlaveFrameRateRatioSupported;
- (id)portTypes;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (int)setCameraControlsStatisticsMasterStream:(id)arg1;
- (int)setMasterStream:(id)arg1 allStreams:(id)arg2;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)arg1;
- (id)syncGroup;

@end