/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPublisher : PBCodable <NSCopying> {
    NSMutableArray * _collectionIds;
    int  _errorState;
    struct { 
        unsigned int has_errorState : 1; 
        unsigned int has_numCollections : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_collectionIds : 1; 
        unsigned int read_name : 1; 
        unsigned int read_photo : 1; 
        unsigned int read_publisherDescriptions : 1; 
        unsigned int read_publisherId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocalizedString * _name;
    unsigned int  _numCollections;
    GEOPDCaptionedPhoto * _photo;
    NSMutableArray * _publisherDescriptions;
    GEOPDMapsIdentifier * _publisherId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *collectionIds;
@property (nonatomic) int errorState;
@property (nonatomic) bool hasErrorState;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNumCollections;
@property (nonatomic, readonly) bool hasPhoto;
@property (nonatomic, readonly) bool hasPublisherId;
@property (nonatomic, retain) GEOLocalizedString *name;
@property (nonatomic) unsigned int numCollections;
@property (nonatomic, retain) GEOPDCaptionedPhoto *photo;
@property (nonatomic, retain) NSMutableArray *publisherDescriptions;
@property (nonatomic, retain) GEOPDMapsIdentifier *publisherId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)collectionIdType;
+ (bool)isValid:(id)arg1;
+ (Class)publisherDescriptionType;

- (void).cxx_destruct;
- (int)StringAsErrorState:(id)arg1;
- (void)addCollectionId:(id)arg1;
- (void)addPublisherDescription:(id)arg1;
- (void)clearCollectionIds;
- (void)clearPublisherDescriptions;
- (void)clearUnknownFields:(bool)arg1;
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (id)collectionIds;
- (unsigned long long)collectionIdsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorState;
- (id)errorStateAsString:(int)arg1;
- (bool)hasErrorState;
- (bool)hasName;
- (bool)hasNumCollections;
- (bool)hasPhoto;
- (bool)hasPublisherId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)numCollections;
- (id)photo;
- (id)publisherDescription;
- (id)publisherDescriptionAtIndex:(unsigned long long)arg1;
- (id)publisherDescriptions;
- (unsigned long long)publisherDescriptionsCount;
- (id)publisherId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setErrorState:(int)arg1;
- (void)setHasErrorState:(bool)arg1;
- (void)setHasNumCollections:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNumCollections:(unsigned int)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPublisherDescriptions:(id)arg1;
- (void)setPublisherId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
