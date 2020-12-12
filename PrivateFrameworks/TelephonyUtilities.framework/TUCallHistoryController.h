/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate> {
    CHManager * _callHistoryManager;
    TUCallProviderManager * _callProviderManager;
    unsigned long long  _coalescingStrategy;
    TUDispatcher * _dispatcher;
    NSMutableSet * _metadataPreCachedOptions;
    unsigned long long  _options;
    NSArray * _recentCalls;
    TUDispatcher * _simpleIvarDispatcher;
    NSArray * _thirdPartyCallProviders;
    unsigned long long  _unreadCallCount;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) TUCallProviderManager *callProviderManager;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TUDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *metadataPreCachedOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSArray *recentCalls;
@property (nonatomic, retain) TUDispatcher *simpleIvarDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *thirdPartyCallProviders;
@property (nonatomic) unsigned long long unreadCallCount;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)sharedController;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)arg1;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)boostQualityOfService;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (id)callHistoryManager;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (id)callProviderManager;
- (unsigned long long)coalescingStrategy;
- (void)dealloc;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteRecentCalls:(id)arg1;
- (id)dispatcher;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (id)init;
- (id)initWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)loadDispatchQueue;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (void)markRecentVideoCallsAsRead;
- (id)metadataPreCachedOptions;
- (unsigned long long)options;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)recentCalls;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)reloadWithOptions:(unsigned long long)arg1;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCallProviderManager:(id)arg1;
- (void)setCoalescingStrategy:(unsigned long long)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setMetadataPreCachedOptions:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRecentCalls:(id)arg1;
- (void)setSimpleIvarDispatcher:(id)arg1;
- (void)setThirdPartyCallProviders:(id)arg1;
- (void)setUnreadCallCount:(unsigned long long)arg1;
- (id)simpleIvarDispatcher;
- (id)thirdPartyCallProviders;
- (unsigned long long)unreadCallCount;

@end