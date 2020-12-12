/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {
    NSString * _descriptorDirectory;
    TRINamespaceDatabase * _namespaceDatabase;
}

+ (id)_descriptorFromDynamicNamespaceRecord:(id)arg1;
+ (id)providerWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2;

- (void).cxx_destruct;
- (id)_dynamicDescriptorsForContainer:(int)arg1 teamId:(id)arg2;
- (id)descriptorWithNamespaceName:(id)arg1;
- (id)initWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2;

@end