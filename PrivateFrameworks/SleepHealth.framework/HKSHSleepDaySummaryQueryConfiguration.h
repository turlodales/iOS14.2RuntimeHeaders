/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
 */

@interface HKSHSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration {
    bool  _ascending;
    long long  _limit;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    bool  _onlySleepAnalysis;
    bool  _requireSleepAnalysis;
}

@property (nonatomic) bool ascending;
@property (nonatomic) long long limit;
@property (nonatomic) struct { long long x1; long long x2; } morningIndexRange;
@property (nonatomic) bool onlySleepAnalysis;
@property (nonatomic) bool requireSleepAnalysis;

+ (bool)supportsSecureCoding;

- (bool)ascending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (struct { long long x1; long long x2; })morningIndexRange;
- (bool)onlySleepAnalysis;
- (bool)requireSleepAnalysis;
- (void)setAscending:(bool)arg1;
- (void)setLimit:(long long)arg1;
- (void)setMorningIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setOnlySleepAnalysis:(bool)arg1;
- (void)setRequireSleepAnalysis:(bool)arg1;

@end
