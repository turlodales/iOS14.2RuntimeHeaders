/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXPBProactiveSuggestionLayoutConfig : PBCodable <NSCopying> {
    int  _applicableLayoutType;
    struct { 
        unsigned int applicableLayoutType : 1; 
    }  _has;
}

@property (nonatomic) int applicableLayoutType;
@property (nonatomic) bool hasApplicableLayoutType;

- (int)StringAsApplicableLayoutType:(id)arg1;
- (int)applicableLayoutType;
- (id)applicableLayoutTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplicableLayoutType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicableLayoutType:(int)arg1;
- (void)setHasApplicableLayoutType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
