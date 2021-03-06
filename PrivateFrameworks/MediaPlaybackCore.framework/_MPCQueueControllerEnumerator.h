/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCQueueControllerEnumerator : NSEnumerator {
    MPSectionedIdentifierListPosition * _endPosition;
    NSEnumerator * _enumerator;
    bool  _hasEmittedItemFromRepeatAllBase;
    bool  _isEnumeratingFromRepeatAllBase;
    long long  _mode;
    long long  _nextEnumerator;
    unsigned long long  _options;
    MPCQueueController * _queueController;
    MPSectionedIdentifierListPosition * _startPosition;
}

@property (nonatomic, readonly) MPSectionedIdentifierListPosition *endPosition;
@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPCQueueController *queueController;
@property (nonatomic, readonly) MPSectionedIdentifierListPosition *startPosition;

+ (id)enumeratorWithQueueController:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 startPosition:(id)arg4 endPosition:(id)arg5;

- (void).cxx_destruct;
- (void)_buildEnumerator;
- (id)_init;
- (id)endPosition;
- (id)enumerator;
- (long long)mode;
- (id)nextObject;
- (unsigned long long)options;
- (id)queueController;
- (id)startPosition;

@end
