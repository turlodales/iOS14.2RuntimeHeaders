/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface _NIWiFiRangingTestConfiguration : NIConfiguration {
    NSDictionary * _parameters;
    NIDiscoveryToken * _peerDiscoveryToken;
}

@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly, copy) NIDiscoveryToken *peerDiscoveryToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)peerDiscoveryToken;

@end
