/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
 */

@interface SCRTokenBucketBudget : NSObject <SCRGovernor> {
    double  _capacity;
    NSDate * _lastCountUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _singleTokenInterval;
    double  _tokenCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_locked_updateTokenCountForTimeElapsed;
- (void)_simulateTimePassing:(double)arg1;
- (id)initWithBucketCapacity:(double)arg1 refreshInterval:(double)arg2;
- (bool)taskAdministrator:(id)arg1 isEligibleToPerformTask:(id)arg2 eligiblityError:(id*)arg3;
- (void)taskAdministrator:(id)arg1 willPerformTask:(id)arg2;

@end
