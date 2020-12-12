/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)_connectionToAndroidDeviceDidCompleteWithResult:(unsigned long long)arg1;
- (id)_telemetryDictionaryForContentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3;
- (id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4;
- (id)_telemetryForMigrationDidCompleteWithSuccess:(bool)arg1 error:(id)arg2 metadata:(id)arg3;
- (void)connectionToAndroidDeviceDidFailWithAuthenticationError;
- (void)connectionToAndroidDeviceDidFailWithTimeout;
- (void)connectionToAndroidDeviceDidSucceed;
- (void)contentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3;
- (void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4;
- (void)importDidFailSilentlyForContentType:(id)arg1;
- (void)migrationDidCompleteWithSuccess:(bool)arg1 error:(id)arg2 metadata:(id)arg3;
- (void)preparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4;
- (void)priorConnectionDidFailWithReason:(id)arg1 androidOSAPIVersion:(id)arg2;
- (void)userDidChooseToInstallMigratableApps:(bool)arg1;
- (void)wifiDidStartWithSuccess:(bool)arg1;

@end