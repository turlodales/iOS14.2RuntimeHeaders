/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying> {
    NSData * _personalizationVector;
    NSString * _version;
}

@property (nonatomic, readonly) bool hasPersonalizationVector;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSData *personalizationVector;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPersonalizationVector;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personalizationVector;
- (bool)readFrom:(id)arg1;
- (void)setPersonalizationVector:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
