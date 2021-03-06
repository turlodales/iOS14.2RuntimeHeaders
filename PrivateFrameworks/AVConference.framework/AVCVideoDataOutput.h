/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCVideoDataOutput : NSObject {
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _internalReceiverQueue;
    bool  _isMediaStalled;
    bool  _isValid;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    bool  _isVideoSuspended;
    struct opaqueVCRemoteImageQueue { } * _receiverQueue;
    long long  _streamToken;
    struct { 
        VideoAttributes *videoAttributes; 
    }  _videoAttributes;
}

@property (nonatomic) <AVCVideoDataOutputDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (nonatomic) bool isMediaStalled;
@property (nonatomic) bool isValid;
@property (nonatomic) bool isVideoDegraded;
@property (nonatomic) bool isVideoPaused;
@property (nonatomic) bool isVideoSuspended;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic) struct { id x1; } videoAttributes;

- (int)createReceiverQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)deregisterBlocksForNotifications;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 error:(id*)arg4;
- (id)internalReceiverQueue;
- (bool)isMediaStalled;
- (bool)isValid;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVideoSuspended;
- (void)onReceiveFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)registerBlocksForNotification;
- (void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalReceiverQueue:(id)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setIsVideoSuspended:(bool)arg1;
- (void)setVideoAttributes:(struct { id x1; })arg1;
- (void)setupDelegateQueue:(id)arg1;
- (int)setupRemoteQueueWithSenderQueue:(id)arg1;
- (int)setupXPCConnection;
- (long long)streamToken;
- (void)terminateConnection;
- (struct { id x1; })videoAttributes;

@end
