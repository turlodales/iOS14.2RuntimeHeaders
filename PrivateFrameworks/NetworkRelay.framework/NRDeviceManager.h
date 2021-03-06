/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
 */

@interface NRDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)copySharedDeviceManager;

- (void).cxx_destruct;
- (id)copyDeviceListString;
- (void)disableDevice:(id)arg1;
- (void)disableDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)enableDevice:(id)arg1;
- (void)enableDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initInternal;
- (id)queue;
- (void)registerDevice:(id)arg1 properties:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setQueue:(id)arg1;
- (void)unregisterAllDevicesWithQueue:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unregisterDevice:(id)arg1;
- (void)unregisterDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;

@end
