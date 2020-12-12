/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCLockup : NSObject <ASCViewModel, NSCopying, NSSecureCoding> {
    NSString * _ageRating;
    NSArray * _features;
    NSString * _heading;
    ASCArtwork * _icon;
    ASCAdamID * _id;
    NSString * _kind;
    ASCViewMetrics * _metrics;
    <ASCOffer> * _offer;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *ageRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *features;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *heading;
@property (nonatomic, readonly, copy) ASCArtwork *icon;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) ASCViewMetrics *metrics;
@property (nonatomic, readonly, copy) <ASCOffer> *offer;
@property (nonatomic, readonly, copy) NSSet *signpostTags;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ageRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureWithClass:(Class)arg1;
- (id)features;
- (unsigned long long)hash;
- (id)heading;
- (id)icon;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 kind:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8;
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9;
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 features:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)lockupByAddingFeature:(id)arg1;
- (id)lockupWithOffer:(id)arg1;
- (id)lockupWithSignpostTags:(id)arg1;
- (id)metrics;
- (id)offer;
- (id)signpostTags;
- (id)subtitle;
- (id)title;

@end