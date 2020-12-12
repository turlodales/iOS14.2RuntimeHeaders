/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int state : 1; 
        unsigned int status : 1; 
        unsigned int isRetrying : 1; 
        unsigned int isUsingSystemPairing : 1; 
    }  _has;
    bool  _isRetrying;
    bool  _isUsingSystemPairing;
    NSData * _pairingData;
    int  _state;
    int  _status;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end