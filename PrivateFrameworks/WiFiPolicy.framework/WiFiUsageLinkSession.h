/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageLinkSession : WiFiUsageSession {
    bool  _linkUp;
}

- (id)initWithInterfaceName:(id)arg1;
- (void)linkStateDidChange:(bool)arg1 isInvoluntary:(bool)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5;
- (id)metricName;

@end