/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAppleRating : NSObject {
    GEOPDRating * _pdRating;
}

@property (nonatomic, readonly) bool isRecommended;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) double maxScore;
@property (nonatomic, readonly) int numberOfRatingsUsedForScore;
@property (nonatomic, readonly) double percentage;
@property (nonatomic, readonly) long long ratingType;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)initWithRating:(id)arg1;
- (bool)isRecommended;
- (id)localizedTitle;
- (double)maxScore;
- (int)numberOfRatingsUsedForScore;
- (double)percentage;
- (long long)ratingType;
- (double)score;

@end