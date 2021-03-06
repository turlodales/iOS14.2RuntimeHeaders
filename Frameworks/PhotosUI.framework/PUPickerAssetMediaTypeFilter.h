/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPickerAssetMediaTypeFilter : NSObject <PUPickerFilter> {
    long long  _mediaType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValidFilter;
@property (nonatomic, readonly) long long mediaType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedGenericAssetTypes;
- (unsigned long long)generatedSearchQueryFilterOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidFilter;
- (long long)mediaType;

@end
