/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAudioTrackFetchOperation : FCFetchOperation {
    FCArticleAudioTrack * _audioTrack;
    <FCContentContext> * _context;
}

@property (nonatomic, readonly) FCArticleAudioTrack *audioTrack;
@property (nonatomic, readonly) <FCContentContext> *context;

- (void).cxx_destruct;
- (id)audioTrack;
- (id)context;
- (id)initWithContext:(id)arg1 audioTrack:(id)arg2;
- (void)performOperation;

@end