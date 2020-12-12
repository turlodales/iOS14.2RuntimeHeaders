/* Generated by RuntimeBrowser.
 */

@protocol MFPlaybackStackControllerDelegate

@required

- (void)currentItemWillChangeFromItem:(id <MFPlayerItem>)arg1 toItem:(id <MFPlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)didReachEndOfQueueWithReason:(NSString *)arg1;
- (void)interruptionDidBeginWithInterruptor:(NSString *)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)interruptionDidFinishForInterruptor:(NSString *)arg1 shouldResume:(bool)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidBecomeCurrent:(id <MFPlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)itemDidFailToLoad:(id <MFPlayerItem>)arg1 error:(NSError *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidFailToPlayToEnd:(id <MFPlayerItem>)arg1 error:(NSError *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidPlayToEnd:(id <MFPlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)itemDidResignCurrent:(id <MFPlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)itemIsReadyToPlay:(id <MFPlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)mediaServicesInterruptionDidBeginWithTimeStamp:(id <MFTimeStamp>)arg1;
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id <MFTimeStamp>)arg1;
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id <MFPlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackDidStartForItem:(id <MFPlayerItem>)arg1 rate:(float)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackDidStopForItem:(id <MFPlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)playbackIsBlockedOnNonPlayableItem:(id <MFPlayerItem>)arg1;
- (void)playbackIsLikelyToKeepUp:(bool)arg1 forItem:(id <MFPlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id <MFPlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id <MFPlayerItem>)arg2 reason:(long long)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackWaitingToPlayForItem:(id <MFPlayerItem>)arg1 reason:(NSString *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)routeDidChange:(bool)arg1 metadata:(id <MFRouteChangeMetadata>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)screenRecordingDidChange:(bool)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)userActionDidBegin:(id <MFUserAction>)arg1;
- (void)userActionDidEnd:(id <MFUserAction>)arg1 error:(NSError *)arg2;

@end