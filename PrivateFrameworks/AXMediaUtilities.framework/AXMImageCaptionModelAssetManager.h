/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    bool  _didTryWaitingForAssetLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSURL * _modelURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *modelURL;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_performWithLock:(id /* block */)arg1;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (id)infoForModelAtURL:(id)arg1;
- (id)init;
- (id)modelURL;
- (id)modelURLWithTimeout:(double)arg1;
- (void)setModelURL:(id)arg1;

@end
