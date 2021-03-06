/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCCompareLayer : MLCLayer {
    int  _predicate;
}

@property (nonatomic, readonly) int predicate;

+ (id)layerWithPredicate:(int)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithPredicate:(int)arg1;
- (int)predicate;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)summarizedDOTDescription;

@end
