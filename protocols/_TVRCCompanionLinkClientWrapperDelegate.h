/* Generated by RuntimeBrowser.
 */

@protocol _TVRCCompanionLinkClientWrapperDelegate <NSObject>

@required

- (void)connectedToDevice:(_TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceEncounteredAuthenticationChallenge:(_TVRXDeviceAuthenticationChallenge *)arg1;
- (void)deviceUpdatedSupportedButtons:(_TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)disconnectedFromDevice:(_TVRCRPCompanionLinkClientWrapper *)arg1 error:(NSError *)arg2;

@end
