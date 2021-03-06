/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantOneToOneConfig : VCObject {
    void * _audioMediaControlInfoGenerator;
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    int  _deviceRole;
    AVCRateControlFeedbackController * _feedbackController;
    unsigned long long  _idsParticipantID;
    VCRateControlMediaController * _mediaController;
    struct tagHANDLE { int x1; } * _mediaQueue;
    bool  _negotiatedVideoEnabled;
    AVCStatisticsCollector * _statisticsCollector;
    struct tagVCMediaQueue { } * _vcMediaQueue;
    void * _videoMediaControlInfoGenerator;
}

@property (nonatomic) void*audioMediaControlInfoGenerator;
@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) int deviceRole;
@property (nonatomic, retain) AVCRateControlFeedbackController *feedbackController;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic) bool negotiatedVideoEnabled;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) struct tagVCMediaQueue { }*vcMediaQueue;
@property (nonatomic) void*videoMediaControlInfoGenerator;

- (void*)audioMediaControlInfoGenerator;
- (id)basebandCongestionDetector;
- (void)dealloc;
- (int)deviceRole;
- (id)feedbackController;
- (unsigned long long)idsParticipantID;
- (id)init;
- (id)mediaController;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (bool)negotiatedVideoEnabled;
- (void)setAudioMediaControlInfoGenerator:(void*)arg1;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setIdsParticipantID:(unsigned long long)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setNegotiatedVideoEnabled:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setVcMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setVideoMediaControlInfoGenerator:(void*)arg1;
- (id)statisticsCollector;
- (struct tagVCMediaQueue { }*)vcMediaQueue;
- (void*)videoMediaControlInfoGenerator;

@end
