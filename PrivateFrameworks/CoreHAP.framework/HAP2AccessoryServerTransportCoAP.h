/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2AccessoryServerTransportNetServiceDelegate, HAP2CoAPClientDelegate> {
    HAP2AccessoryServerDiscoveryAccessoryInfo * _acessoryInfo;
    double  _addressResolutionTimeout;
    <HAP2CoAPClient> * _coapClient;
    <HAP2AccessoryServerTransportCoAPClientFactory> * _coapClientFactory;
    <HAP2AccessoryServerDiscovery> * _discovery;
    double  _initialACKTimeout;
    unsigned long long  _maxTransmitAttempts;
    <HAP2AccessoryServerTransportNetService> * _netService;
    <HAP2AccessoryServerTransportNetServiceFactory> * _netServiceFactory;
    HMFActivity * _netServiceResolveActivity;
    id /* block */  _sendRequestCompletion;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    id /* block */  _stateChangeCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)client:(id)arg1 didReceiveEvent:(id)arg2;
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;
- (void)doCloseWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doOpenWithCompletion:(id /* block */)arg1;
- (void)doSendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (id)endpointForCharacteristic:(id)arg1;
- (id)endpointForCharacteristics:(id)arg1;
- (id)initWithAccessoryInfo:(id)arg1 discovery:(id)arg2 operationQueue:(id)arg3;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 addressResolutionTimeout:(double)arg6 discovery:(id)arg7 accessoryInfo:(id)arg8 coapClient:(id)arg9 netServiceFactory:(id)arg10 coapClientFactory:(id)arg11;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 operationQueue:(id)arg4;
- (bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (id)underlyingTransport;
- (id)wellKnownEndpoint:(unsigned long long)arg1;

@end
