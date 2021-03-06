/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKBluetoothMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {
    NSMutableDictionary * _activeConnections;
    NSObject<OS_dispatch_queue> * _batteryLevelPollingQueue;
    NSObject<OS_dispatch_source> * _batteryLevelPollingTimer;
    NSDictionary * _batteryLevels;
    NSLock * _connectionUpdateLock;
    NSMutableDictionary * _inactiveConnections;
    id /* block */  historicalDeletingHandler;
}

@property (nonatomic, retain) NSMutableDictionary *activeConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *batteryLevelPollingQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *batteryLevelPollingTimer;
@property (retain) NSDictionary *batteryLevels;
@property (nonatomic, retain) NSLock *connectionUpdateLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalDeletingHandler;
@property (nonatomic, retain) NSMutableDictionary *inactiveConnections;
@property (readonly) Class superclass;

+ (id)_eventWithState:(bool)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4 isAppleAudioDevice:(bool)arg5 isUserWearing:(bool)arg6 productID:(unsigned int)arg7 accessoryBatteryLevels:(id)arg8;
+ (id)audioProductsBatteryLevels;
+ (id)contextValueForBluetoothConnectionStatus:(bool)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4 isAppleAudioDevice:(bool)arg5 isUserWearing:(bool)arg6 productID:(unsigned int)arg7;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (bool)_inEarStatusForDevice:(id)arg1;
- (id)activeConnections;
- (id)batteryLevelPollingQueue;
- (id)batteryLevelPollingTimer;
- (id)batteryLevels;
- (id)connectionUpdateLock;
- (void)deactivate;
- (void)dealloc;
- (id /* block */)historicalDeletingHandler;
- (id)inactiveConnections;
- (id)init;
- (id)loadState;
- (void)saveState;
- (void)setActiveConnections:(id)arg1;
- (void)setBatteryLevelPollingQueue:(id)arg1;
- (void)setBatteryLevelPollingTimer:(id)arg1;
- (void)setBatteryLevels:(id)arg1;
- (void)setConnectionUpdateLock:(id)arg1;
- (void)setHistoricalDeletingHandler:(id /* block */)arg1;
- (void)setInactiveConnections:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateCurrentBatteryLevels;

@end
