/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria> {
    bool  _excludeFrequentLocations;
    bool  _excludeHomeWorkLocations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeFrequentLocations;
@property (nonatomic) bool excludeHomeWorkLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (id)description;
- (bool)excludeFrequentLocations;
- (bool)excludeHomeWorkLocations;
- (bool)isValid;
- (bool)passesForMomentNode:(id)arg1;
- (void)setExcludeFrequentLocations:(bool)arg1;
- (void)setExcludeHomeWorkLocations:(bool)arg1;

@end