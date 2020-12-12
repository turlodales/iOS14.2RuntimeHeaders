/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    bool  _boxedMetadataEnabled;
    bool  _deferredPrepareEnabled;
    NSArray * _detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    int  _motionAttachmentsSource;
    bool  _mrcLowPowerModeEnabled;
    bool  _previewEnabled;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _smartCameraPipelineVersion;
    bool  _useSceneClassifierToGateQRCodeDetection;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

@property (nonatomic) bool boxedMetadataEnabled;
@property (nonatomic) bool deferredPrepareEnabled;
@property (nonatomic, retain) NSArray *detectedObjectMovieFileOutputMetadataConnectionConfigurations;
@property (nonatomic, retain) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) bool mrcLowPowerModeEnabled;
@property (nonatomic) bool previewEnabled;
@property (nonatomic) struct { unsigned short x1; unsigned short x2; unsigned short x3; } smartCameraPipelineVersion;
@property (nonatomic) bool useSceneClassifierToGateQRCodeDetection;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (bool)boxedMetadataEnabled;
- (void)dealloc;
- (bool)deferredPrepareEnabled;
- (id)detectedObjectMovieFileOutputMetadataConnectionConfigurations;
- (id)metadataObjectConnectionConfiguration;
- (int)motionAttachmentsSource;
- (bool)mrcLowPowerModeEnabled;
- (bool)previewEnabled;
- (void)setBoxedMetadataEnabled:(bool)arg1;
- (void)setDeferredPrepareEnabled:(bool)arg1;
- (void)setDetectedObjectMovieFileOutputMetadataConnectionConfigurations:(id)arg1;
- (void)setMetadataObjectConnectionConfiguration:(id)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setMrcLowPowerModeEnabled:(bool)arg1;
- (void)setPreviewEnabled:(bool)arg1;
- (void)setSmartCameraPipelineVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (void)setUseSceneClassifierToGateQRCodeDetection:(bool)arg1;
- (void)setVideoDataConnectionConfiguration:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })smartCameraPipelineVersion;
- (bool)useSceneClassifierToGateQRCodeDetection;
- (id)videoDataConnectionConfiguration;

@end