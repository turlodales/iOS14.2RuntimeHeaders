/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAssetLoader : NSObject <NSSecureCoding> {
    struct AssetData { 
        NSString *name; 
        struct vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > > { 
            struct array<float, 3> {} *__begin_; 
            struct array<float, 3> {} *__end_; 
            struct __compressed_pair<std::__1::array<float, 3> *, std::__1::allocator<std::__1::array<float, 3> > > { 
                struct array<float, 3> {} *__value_; 
            } __end_cap_; 
        } positions; 
        struct vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > > { 
            struct array<float, 2> {} *__begin_; 
            struct array<float, 2> {} *__end_; 
            struct __compressed_pair<std::__1::array<float, 2> *, std::__1::allocator<std::__1::array<float, 2> > > { 
                struct array<float, 2> {} *__value_; 
            } __end_cap_; 
        } texcoords; 
        struct vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > > { 
            struct array<float, 2> {} *__begin_; 
            struct array<float, 2> {} *__end_; 
            struct __compressed_pair<std::__1::array<float, 2> *, std::__1::allocator<std::__1::array<float, 2> > > { 
                struct array<float, 2> {} *__value_; 
            } __end_cap_; 
        } texcoords2; 
        struct vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > > { 
            struct array<float, 3> {} *__begin_; 
            struct array<float, 3> {} *__end_; 
            struct __compressed_pair<std::__1::array<float, 3> *, std::__1::allocator<std::__1::array<float, 3> > > { 
                struct array<float, 3> {} *__value_; 
            } __end_cap_; 
        } normals; 
        struct vector<std::__1::array<float, 4>, std::__1::allocator<std::__1::array<float, 4> > > { 
            struct array<float, 4> {} *__begin_; 
            struct array<float, 4> {} *__end_; 
            struct __compressed_pair<std::__1::array<float, 4> *, std::__1::allocator<std::__1::array<float, 4> > > { 
                struct array<float, 4> {} *__value_; 
            } __end_cap_; 
        } colors; 
        NSMutableArray *materials; 
        struct vector<GroupData, std::__1::allocator<GroupData> > { 
            struct GroupData {} *__begin_; 
            struct GroupData {} *__end_; 
            struct __compressed_pair<GroupData *, std::__1::allocator<GroupData> > { 
                struct GroupData {} *__value_; 
            } __end_cap_; 
        } groups; 
    }  _buffer;
    NSString * _extension;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtension:(id)arg1;
- (void)loadMDLAsset:(id)arg1 preserveTopology:(bool)arg2;
- (id)loadURL:(id)arg1;

@end
