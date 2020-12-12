/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAuthHelper;

- (bool)_checkACTokenResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(bool)arg4;
- (bool)_checkMRTResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(bool)arg4;
- (void)_handleFeatureFlagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (bool)_hasMAT;
- (bool)_hasMRT;
- (long long)_statusCodeFromResponse:(id)arg1;
- (bool)_successReplacingTokensFromMRTResponseData:(id)arg1;
- (id)_tokenTypeString:(unsigned long long)arg1;
- (void)addMapsAuthDidFinishObserver:(id)arg1;
- (void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2;
- (id)dictionaryForAuthTokenState;
- (void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(bool)arg3;
- (void)handleSecureProxyChallenge:(id)arg1;
- (id)init;
- (void)removeMapsAuthDidFinishObserver:(id)arg1;
- (void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(bool)arg4;
- (void)requestFeatureFlagsWithURL:(id)arg1 suppressNotification:(bool)arg2;
- (void)sendProxyAuthNotification:(long long)arg1;
- (void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3;
- (void)updateAuthenticatedFeatureFlagStatesWithDict:(id)arg1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end