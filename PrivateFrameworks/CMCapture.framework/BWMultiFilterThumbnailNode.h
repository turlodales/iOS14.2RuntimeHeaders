/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMultiFilterThumbnailNode : BWNode {
    BWColorLookupCache * _colorLookupCache;
    FigColorCubeMetalFilter * _filter;
    NSArray * _filters;
    struct opaqueCMFormatDescription { } * _mostRecentFormatDescription;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

+ (void)initialize;

- (int)_loadAndConfigureFilterBundle;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithFilters:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoOutput;

@end