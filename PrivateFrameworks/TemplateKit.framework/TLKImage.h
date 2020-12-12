/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImage : TLKObject {
    NSHashTable * _completionTable;
    double  _cornerRadius;
    unsigned long long  _cornerRoundingStyle;
    bool  _isTemplate;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIImage * _uiImage;
    bool  _useFastPathShadow;
}

@property (nonatomic, retain) NSHashTable *completionTable;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) bool isTemplate;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) UIImage *uiImage;
@property (nonatomic, readonly) UIImage *uiImageToRender;
@property (nonatomic) bool useFastPathShadow;

- (void).cxx_destruct;
- (id)completionTable;
- (double)cornerRadius;
- (unsigned long long)cornerRoundingStyle;
- (void)didLoadImageWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithImage:(id)arg1;
- (bool)isTemplate;
- (void)setCompletionTable:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRoundingStyle:(unsigned long long)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUiImage:(id)arg1;
- (void)setUseFastPathShadow:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uiImage;
- (id)uiImageToRender;
- (bool)useFastPathShadow;

@end