/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntityDeletionContext : NSObject {
    bool  _callWillDeleteFromDatabase;
    NSString * _deleteInfoSQL;
    NSMutableDictionary * _deleteStatementsByClassName;
    unsigned long long  _deletedObjectCount;
    NSMutableDictionary * _deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableSet * _deletedObjectTypeSet;
    bool  _insertDeletedObjects;
    NSNumber * _lastInsertedDeletedObjectPersistentID;
    NSMutableDictionary * _localSourceIDsByOriginalSourceID;
    bool  _preserveStartAndEndDates;
    HDProfile * _profile;
    id /* block */  _recursiveDeleteAuthorizationBlock;
    NSString * _startAndEndDatesSQL;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic) bool callWillDeleteFromDatabase;
@property (nonatomic, readonly) unsigned long long deletedObjectCount;
@property (nonatomic, readonly, copy) NSSet *deletedObjectTypeSet;
@property (nonatomic) bool insertDeletedObjects;
@property (nonatomic, readonly) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (nonatomic) bool preserveStartAndEndDates;
@property (nonatomic, copy) id /* block */ recursiveDeleteAuthorizationBlock;
@property (nonatomic, readonly) HDDatabaseTransaction *transaction;

- (void).cxx_destruct;
- (bool)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id*)arg4;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id*)arg2;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id*)arg2;
- (bool)_startAndEndDatesForSampleWithPersistentID:(long long)arg1 startTimestampOut:(double*)arg2 endTimestampOut:(double*)arg3 database:(id)arg4 error:(id*)arg5;
- (bool)callWillDeleteFromDatabase;
- (struct _HDObjectDeletionInfo { bool x1; long long x2; long long x3; long long x4; })deleteInfoForObjectWithUUID:(id)arg1 error:(id*)arg2;
- (bool)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3;
- (bool)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id*)arg7;
- (unsigned long long)deletedObjectCount;
- (id)deletedObjectTypeSet;
- (void)finish;
- (id)initWithProfile:(id)arg1 transaction:(id)arg2;
- (bool)insertDeletedObjects;
- (id)lastInsertedDeletedObjectPersistentID;
- (bool)preserveStartAndEndDates;
- (id /* block */)recursiveDeleteAuthorizationBlock;
- (void)setCallWillDeleteFromDatabase:(bool)arg1;
- (void)setInsertDeletedObjects:(bool)arg1;
- (void)setPreserveStartAndEndDates:(bool)arg1;
- (void)setRecursiveDeleteAuthorizationBlock:(id /* block */)arg1;
- (id)transaction;

@end
