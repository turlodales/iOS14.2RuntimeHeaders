/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSAvocadoDescriptorsBox : NSObject <NSSecureCoding> {
    NSDictionary * _descriptorsByExtensionIdentifier;
}

@property (nonatomic, readonly, copy) NSSet *descriptors;
@property (nonatomic, readonly, copy) NSDictionary *descriptorsByExtensionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptors;
- (id)descriptorsByExtensionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1;

@end