/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBDrawable : NSObject <RBDrawableStatistics, _RBDrawableDelegate> {
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    <RBDrawableDelegate> * _delegate;
    RBDevice * _device;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > { 
        struct __compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > { 
            struct Drawable {} *__value_; 
        } __ptr_; 
    }  _drawable;
    int  _initialState;
    unsigned long long  _pixelFormat;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)>="_p"@? {}  _statistics_handler;
    struct spin_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _statistics_handler_lock;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) double GPUDuration;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (nonatomic) <RBDrawableDelegate> *delegate;
@property (nonatomic, readonly) RBDevice *device;
@property (nonatomic) int initialState;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly, copy) NSDictionary *statistics;
@property (nonatomic, copy) id /* block */ statisticsHandler;
@property (nonatomic, retain) <MTLTexture> *texture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)GPUDuration;
- (void)_RBDrawableStatisticsDidChange;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (id)delegate;
- (id)device;
- (void)dumpTexture:(id)arg1 name:(id)arg2;
- (void)finish;
- (id)initWithDevice:(id)arg1;
- (int)initialState;
- (unsigned long long)pixelFormat;
- (void)renderDisplayList:(id)arg1 flags:(unsigned int)arg2;
- (void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
- (double)scale;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialState:(int)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStatisticsHandler:(id /* block */)arg1;
- (void)setTexture:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)statistics;
- (id /* block */)statisticsHandler;
- (id)texture;

@end