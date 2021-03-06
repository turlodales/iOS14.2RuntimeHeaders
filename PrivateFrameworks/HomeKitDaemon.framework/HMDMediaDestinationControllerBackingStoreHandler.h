/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler <HMFLogging> {
    HMMutableMediaDestinationControllerData * _data;
    <HMDMediaDestinationControllerBackingStoreHandlerDelegate> * _delegate;
    HMFUnfairLock * _lock;
    HMDMediaDestinationControllerMetricsEventDispatcher * _metricsEventDispatcher;
}

@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaDestinationControllerBackingStoreHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly) Class superclass;

+ (id)backingStoreObjectForData:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)data;
- (id)delegate;
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;
- (id)logIdentifier;
- (id)metricsEventDispatcher;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;
- (void)removeControllerWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsEventDispatcher:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;
- (void)updateAvailableDestinationIdentifiers:(id)arg1;
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDestinationIdentifier:(id)arg1;
- (void)updateDestinationIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
