/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBConnection : NSObject <CBActivatable, CBCentralManagerDelegate, CBLabelable, CBPeripheralDelegate, CBReadWriteRequestable, CBStateReporting> {
    id /* block */  _activateCompletion;
    long long  _bluetoothState;
    id /* block */  _bluetoothStateChangedHandler;
    CBCentralManager * _centralManager;
    NSString * _clientBundleID;
    long long  _clientUseCase;
    long long  _connectionLatency;
    CBDevice * _destinationDevice;
    unsigned short  _destinationPSM;
    NSUUID * _destinationUUID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _guardConnected;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    CBL2CAPChannel * _l2capChannel;
    NSString * _label;
    CBPeripheral * _peripheral;
    CBReadRequest * _readRequestCurrent;
    NSMutableArray * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    unsigned char  _readSuspended;
    id /* block */  _serverInvalidationHandler;
    NSString * _serviceType;
    int  _socketFD;
    int  _state;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CBWriteRequest * _writeRequestCurrent;
    NSMutableArray * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSuspended;
}

@property (nonatomic, readonly) long long bluetoothState;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, copy) NSString *clientBundleID;
@property (nonatomic) long long clientUseCase;
@property (nonatomic) long long connectionLatency;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CBDevice *destinationDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) CBL2CAPChannel *l2capChannel;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ serverInvalidationHandler;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (bool)_processReadStatus;
- (void)_processReads:(bool)arg1;
- (void)_processWrites;
- (void)_reportError:(id)arg1;
- (void)_run;
- (bool)_runConnectStart;
- (bool)_runSetupChannel;
- (bool)_setupIOAndReturnError:(id*)arg1;
- (bool)_startConnectingAndReturnError:(id*)arg1;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (long long)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)clientBundleID;
- (long long)clientUseCase;
- (long long)connectionLatency;
- (void)dealloc;
- (id)destinationDevice;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)l2capChannel;
- (id)label;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)readWithRequest:(id)arg1;
- (id /* block */)serverInvalidationHandler;
- (id)serviceType;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setClientUseCase:(long long)arg1;
- (void)setConnectionLatency:(long long)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setL2capChannel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setServerInvalidationHandler:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)writeEndOfDataWithCompletion:(id /* block */)arg1;
- (void)writeWithRequest:(id)arg1;

@end
