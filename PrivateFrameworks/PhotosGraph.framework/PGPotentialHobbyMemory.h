/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPotentialHobbyMemory : PGPotentialMemory {
    NSArray * _hobbyAssetLocalIdentifiers;
    long long  _hobbyType;
    NSMutableSet * _mutableMomentNodes;
    PGGraphPersonNode * _personNode;
    long long  _year;
}

@property (retain) NSArray *hobbyAssetLocalIdentifiers;
@property (readonly) long long hobbyType;
@property (readonly) PGGraphPersonNode *personNode;
@property (readonly) long long year;

- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)hobbyAssetLocalIdentifiers;
- (long long)hobbyType;
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;
- (id)personNode;
- (void)setHobbyAssetLocalIdentifiers:(id)arg1;
- (long long)year;

@end