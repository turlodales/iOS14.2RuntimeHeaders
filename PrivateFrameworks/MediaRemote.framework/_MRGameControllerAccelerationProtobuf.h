/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {
    NSData * _data;
    struct { 
        unsigned int w : 1; 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int z : 1; 
    }  _has;
    float  _w;
    float  _x;
    float  _y;
    float  _z;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
