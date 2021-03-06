/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRURoutingViewControllerUpdateDisplayedRoutesState : NSObject {
    id /* block */  _isEqualBlock;
    id /* block */  _isUpdatedBlock;
    MPSectionedCollection * _oldItems;
    MPSectionedCollection * _updatedItems;
    NSNumber * _version;
}

@property (nonatomic, copy) id /* block */ isEqualBlock;
@property (nonatomic, copy) id /* block */ isUpdatedBlock;
@property (nonatomic, copy) MPSectionedCollection *oldItems;
@property (nonatomic, copy) MPSectionedCollection *updatedItems;
@property (nonatomic, copy) NSNumber *version;

- (void).cxx_destruct;
- (id /* block */)isEqualBlock;
- (id /* block */)isUpdatedBlock;
- (id)oldItems;
- (void)setIsEqualBlock:(id /* block */)arg1;
- (void)setIsUpdatedBlock:(id /* block */)arg1;
- (void)setOldItems:(id)arg1;
- (void)setUpdatedItems:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)updatedItems;
- (id)version;

@end
