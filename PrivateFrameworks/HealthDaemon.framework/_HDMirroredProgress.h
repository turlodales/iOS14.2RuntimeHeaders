/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDMirroredProgress : NSProgress {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _originalProgress;
}

+ (id)_KVOKeyPaths;

- (void).cxx_destruct;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (void)_update;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
