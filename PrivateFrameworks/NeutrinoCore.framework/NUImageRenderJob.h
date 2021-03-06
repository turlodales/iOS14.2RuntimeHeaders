/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard * _accessRegionGuard;
    NURegion * _regionToRender;
    <NUPurgeableStorage> * _renderDestination;
    CIRenderTask * _renderTask;
    <NUPurgeableImage> * _renderedImage;
    NURegion * _renderedRegion;
    NUPurgeableStoragePool * _storagePool;
    <NUMutablePurgeableImage> * _targetImage;
}

@property (nonatomic, readonly) NUImageAccumulationNode *imageAccumulationNode;
@property (nonatomic, readonly) NURegion *regionToRender;
@property (nonatomic, retain) CIRenderTask *renderTask;
@property (nonatomic, readonly) <NUPurgeableImage> *renderedImage;
@property (nonatomic, readonly) NURegion *renderedRegion;
@property (nonatomic, readonly) <NUMutablePurgeableImage> *targetImage;

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (bool)copyStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toImage:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
- (id)extentPolicy;
- (id)imageAccumulationNode;
- (id)imageAccumulationNodeWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3 format:(id)arg4 colorSpace:(id)arg5;
- (id)imageRequest;
- (id)initWithImageRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)prepare:(out id*)arg1;
- (id)regionToRender;
- (bool)render:(out id*)arg1;
- (id)renderTask;
- (id)renderedImage;
- (id)renderedRegion;
- (id)scalePolicy;
- (void)setRenderTask:(id)arg1;
- (id)targetImage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
