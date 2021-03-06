/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOKerberosAuthentication : NSObject {
    LAContext * _myLAContext;
    NSString * _realm;
    SORealmSettingManager * _settingsManager;
    bool  _siteDiscoveryInProgress;
}

@property (nonatomic, retain) LAContext *myLAContext;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) SORealmSettingManager *settingsManager;
@property bool siteDiscoveryInProgress;

+ (void)saveValuesForPlugins:(id)arg1;

- (void).cxx_destruct;
- (void)_determineSiteCodeUsingDispatchGroup:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 networkFingerprint:(id)arg4 requireTLSForLDAP:(bool)arg5;
- (unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id*)arg2 orError:(id*)arg3;
- (bool)changePasswordWithContext:(id)arg1 withError:(id*)arg2;
- (unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct {}**)arg2 orError:(id*)arg3;
- (void)determineSiteCodeUsingContext:(id)arg1;
- (unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct {}**)arg2 orError:(id*)arg3;
- (id)initWithRealm:(id)arg1 andSettingsManager:(id)arg2;
- (unsigned long long)mapErrorToKnownError:(id)arg1;
- (id)myLAContext;
- (id)realm;
- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2;
- (void)setMyLAContext:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setSettingsManager:(id)arg1;
- (void)setSiteCodeUsingContext:(id)arg1;
- (void)setSiteDiscoveryInProgress:(bool)arg1;
- (id)settingsManager;
- (bool)siteDiscoveryInProgress;
- (void)triggerVPNIfNeededUsingRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3;

@end
