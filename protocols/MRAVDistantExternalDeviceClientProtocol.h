/* Generated by RuntimeBrowser.
 */

@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>

@required

- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(NSError *)arg2;
- (void)hostedExternalDeviceDidReceiveCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)hostedExternalDeviceEndpointDidChange:(MRAVEndpoint *)arg1;
- (void)hostedExternalDeviceNameDidChange:(NSString *)arg1;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(NSString *)arg2 forOutputDeviceWithIdentifier:(NSString *)arg3;

@optional

- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forEndpointWithIdentifier:(NSString *)arg2 forOutputDeviceWithIdentifier:(NSString *)arg3;

@end
