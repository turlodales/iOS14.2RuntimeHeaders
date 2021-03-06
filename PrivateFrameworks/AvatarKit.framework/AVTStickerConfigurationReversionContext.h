/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerConfigurationReversionContext : NSObject {
    AVTAvatar * _avatar;
    NSMapTable * _customMaterialProperties;
    NSMutableArray * _morpherOverrides;
    NSMutableArray * _presetOverrides;
    SCNScene * _scene;
    NSMapTable * _shaderModifiers;
    NSMutableArray * _singleSidedMaterials;
}

- (void).cxx_destruct;
- (id)init;
- (void)resetForAvatar:(id)arg1;
- (void)revertChanges;
- (void)saveCustomMaterialPropertyNamed:(id)arg1 forMaterial:(id)arg2;
- (void)saveMorpherOverride:(id)arg1;
- (void)savePresetOverride:(id)arg1;
- (void)saveShaderModifiers:(id)arg1 forMaterial:(id)arg2;
- (void)saveSingleSidedForMaterial:(id)arg1;

@end
