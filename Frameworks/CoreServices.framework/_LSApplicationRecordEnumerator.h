/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    unsigned int  _bundleClass;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _bundleIdentifiersOrUnits;
    unsigned int  _container;
    unsigned long long  _options;
    NSURL * _volumeURL;
}

@property unsigned int bundleClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_applicationRecordWithContext:(struct LSContext { id x1; }*)arg1 bundleIdentifierOrUnit:(unsigned int)arg2;
- (bool)_evaluateBundleNoIO:(unsigned int)arg1 data:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; int x_1_1_6; struct LSVersionNumber { unsigned char x_7_2_1[32]; } x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned char x_1_1_21; unsigned char x_1_1_22; unsigned int x_1_1_23; unsigned short x_1_1_24; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; unsigned int x8; int x9; struct LSVersionNumber { unsigned char x_10_1_1[32]; } x10; struct LSVersionNumber { unsigned char x_11_1_1[32]; } x11; }*)arg2 context:(struct LSContext { id x1; }*)arg3;
- (bool)_getContainer:(unsigned int*)arg1 context:(struct LSContext { id x1; }*)arg2 error:(id*)arg3;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext { id x1; }*)arg3;
- (bool)_prepareWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (unsigned int)bundleClass;
- (id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2;
- (void)setBundleClass:(unsigned int)arg1;

@end