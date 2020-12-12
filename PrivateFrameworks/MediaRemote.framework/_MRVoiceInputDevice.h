/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
    unsigned int  _deviceID;
    struct { 
        unsigned int deviceID : 1; 
        unsigned int recordingState : 1; 
    }  _has;
    int  _recordingState;
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