/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCDeviceANE : NSObject <MLCEngineDispatch, MLCLayerOperations, MLComputeEngineControl, MLComputeEngineOptimizerUpdate, NSCopying> {
    _ANEClient * _clientConnection;
    NSArray * _deviceList;
    int  _deviceType;
    MLCGraph * _graph;
    _MLCANEModelObject * _modelObject;
    NSMutableArray * _outputs;
}

@property (nonatomic, readonly) _ANEClient *clientConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceList;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic) MLCGraph *graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MLCANEModelObject *modelObject;
@property (nonatomic, retain) NSMutableArray *outputs;
@property (readonly) Class superclass;

+ (bool)hasANE;

- (void).cxx_destruct;
- (id)ANERequestWithModelAttributes:(id)arg1 tensorIOSufraceObject:(id)arg2;
- (bool)addInputs:(id)arg1 toNetwork:(id)arg2;
- (bool)addOutputs:(id)arg1 toNetwork:(id)arg2;
- (bool)addUnitsOfLayer:(id)arg1 toNetwork:(id)arg2 enableLiveOutsForTraining:(bool)arg3;
- (void)allocateDeviceMemoryForTensor:(id)arg1;
- (void)allocateDeviceMemoryForTensor:(id)arg1 modelAtributes:(id)arg2;
- (unsigned long long)allocatedDeviceDataSizeForTraining:(bool)arg1 layer:(id)arg2;
- (id)arithmeticLayerWithOperation:(int)arg1;
- (id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (void)broadcastTensor:(id)arg1;
- (void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)clientConnection;
- (void)commitAndWaitForCompletion:(id /* block */)arg1;
- (void)commitAndWaitForCompletion:(id /* block */)arg1 enableProfiling:(bool)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithCompletionHandler:(id /* block */)arg1 enableProfiling:(bool)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithProfiling:(bool)arg1 graphExecutionTime:(id)arg2;
- (id)compareLayerWithPredicate:(int)arg1;
- (bool)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (bool)compileOptimizerDeviceOps:(id)arg1;
- (id)concatLayerWithConcatDimension:(unsigned long long)arg1 sourceShapeCount:(unsigned long long)arg2;
- (void)convertUpdatesToTensorDataForLayer:(id)arg1;
- (void)convertUpdatesToTensorDataForTensorParameters:(id)arg1;
- (id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createOptimizerDeviceDataForTensor:(id)arg1 optimizer:(id)arg2 optimizerData:(id)arg3 isVector:(bool)arg4;
- (void)deallocateDeviceMemoryForTensor:(id)arg1;
- (id)description;
- (void)deviceHeapAllocatorWithHeapSize:(unsigned long long)arg1;
- (id)deviceList;
- (unsigned long long)deviceMemorySizeForTensor:(id)arg1;
- (unsigned long long)deviceMemorySizeForTensor:(id)arg1 deviceIndex:(unsigned long long)arg2;
- (unsigned long long)deviceMemorySizeWithLiveIOStatus:(id)arg1 batchSize:(unsigned long long)arg2;
- (int)deviceType;
- (void)dispatchBroadcastTensor:(id)arg1;
- (void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)dispatchForwardAndGradientLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(bool)arg8 resultTensorAllocate:(bool)arg9;
- (void)dispatchForwardConcatLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (void)dispatchForwardEmbeddingLayer:(id)arg1 weight:(id)arg2 sourceTensor:(id)arg3 resultTensor:(id)arg4;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchForwardLayerBatchNormalizationWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchForwardLayerNormalizationLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultStateIsTemporary:(bool)arg6 resultTensorAllocate:(bool)arg7 forTraining:(bool)arg8;
- (void)dispatchForwardLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(bool)arg7 resultTensorAllocate:(bool)arg8;
- (void)dispatchForwardLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(bool)arg7 resultStateIsTemporary:(bool)arg8 resultTensorAllocate:(bool)arg9 forTraining:(bool)arg10;
- (void)dispatchForwardMHALayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchForwardMHALayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardMatMulLayer:(id)arg1 sourceTensor:(id)arg2 secondarySourceTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchForwardReshapeLayerWithDeviceOps:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 keepsState:(bool)arg7;
- (void)dispatchForwardSliceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(bool)arg4;
- (void)dispatchForwardSliceLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardSoftmaxLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchForwardSoftmaxLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3;
- (void)dispatchGradientBatchNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientConcatLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3;
- (void)dispatchGradientEmbeddingLayer:(id)arg1 sourceGradientTensor:(id)arg2;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientLayerNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(bool)arg7 resultTensorAllocate:(bool)arg8;
- (void)dispatchGradientMHALayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientMatMulLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientReshapeLayerWithDeviceOps:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientSliceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorAllocate:(bool)arg4;
- (void)dispatchGradientSoftmaxLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3;
- (void)dispatchInitialGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchRNNForwardLayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchReadTensor:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3;
- (void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2;
- (id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (void)fuseLayersForInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2;
- (void)fuseLayersForTrainingGraph:(id)arg1;
- (id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
- (id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
- (id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
- (id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
- (id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
- (id)gramMatrixLayerWithScaleFactor:(float)arg1;
- (id)graph;
- (id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;
- (id)imageReshapeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCorners:(bool)arg3;
- (void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2;
- (void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2;
- (id)initWithType:(int)arg1;
- (id)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5;
- (id)layerNormalizationLayerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4;
- (id)lossLayerWithDescriptor:(id)arg1;
- (id)lossYOLOLayerWithDescriptor:(id)arg1;
- (id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;
- (id)matMulLayerWithDescriptor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 inferenceOnly:(bool)arg4;
- (id)modelObject;
- (id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(bool)arg5;
- (bool)needToAllocateDeviceMemoryForTensor:(id)arg1;
- (id)neuronLayerWithDescriptor:(id)arg1;
- (unsigned long long)numDevices;
- (unsigned long long)numberOfDevices;
- (id)optimizerAdamWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
- (id)optimizerRMSPropWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(bool)arg5;
- (id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNesterovMomentum:(bool)arg3;
- (id)outputs;
- (id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6;
- (id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2;
- (bool)postProcessCompiledGraph:(id)arg1 compilerOptions:(unsigned long long)arg2;
- (id)readTensor:(id)arg1;
- (id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2;
- (id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4;
- (void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(bool)arg5;
- (void)readTensor:(id)arg1 targetBuffer:(void*)arg2;
- (id)reductionLayerWithReduceType:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3;
- (void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1;
- (id)reshapeLayerWithShape:(id)arg1;
- (bool)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg1 weights:(id)arg2 bias:(id)arg3;
- (void)setGraph:(id)arg1;
- (bool)setLSTMLayerOptimizerDataForDeviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4;
- (bool)setMHALayerOptimizerDataForDeviceOps:(id)arg1 optimizerDataForWeights:(id)arg2 optimizerDataForBias:(id)arg3;
- (void)setModelObject:(id)arg1;
- (bool)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3;
- (void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2;
- (void)setOptimizerTimeStep:(id)arg1 timeStep:(unsigned long long)arg2;
- (void)setOutputs:(id)arg1;
- (bool)shareDeviceMemoryWithResultTensor:(id)arg1 sourceTensor:(id)arg2;
- (void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)signalNextEvent;
- (id)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2;
- (void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2;
- (void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(bool)arg3;
- (void)synchronizeOptimizerUpdatesForTensor:(id)arg1;
- (bool)synchronizeTensor:(id)arg1;
- (void)synchronizeUpdatesForLayer:(id)arg1;
- (id)transposeLayerWithShape:(id)arg1;
- (id)unitBottomNamesWithLayer:(id)arg1;
- (void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 meanTensor:(id)arg5 varianceTensor:(id)arg6;
- (void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateEmbeddingLayer:(id)arg1 weightsParameter:(id)arg2 optimizer:(id)arg3;
- (void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateGroupNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateInstanceNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateLayerNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateMultiheadAttentionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateRNNLayer:(id)arg1 optimizer:(id)arg2 inputWeightsParameter:(id)arg3 hiddenWeightsParameter:(id)arg4 biasesParameter:(id)arg5;
- (void)updateTensorParameter:(id)arg1 optimizer:(id)arg2 gradient:(id)arg3;
- (id)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(bool)arg4;
- (bool)validateIdenticalBatchSizeForInputs:(id)arg1;
- (void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)waitForOthers;
- (void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2;
- (void)writeToAllDevices:(id)arg1 allocateData:(bool)arg2 batchSize:(unsigned long long)arg3;
- (void)writeToDevice:(id)arg1 toDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (bool)writeWeightsOfConvolutionLayer:(id)arg1 weightFileHandles:(id)arg2;
- (bool)writeWeightsOfLayer:(id)arg1 weightFileHandles:(id)arg2;
- (bool)writeWeightsOfNormalizationLayer:(id)arg1 weightFileHandle:(id)arg2;

@end