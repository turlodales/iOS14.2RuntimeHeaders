/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAssociationInsertionContext : NSObject {
    bool  _enforceSameSource;
    NSUUID * _parentUUID;
    bool  _permitPendingAssociations;
    HDProfile * _profile;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly) bool enforceSameSource;
@property (nonatomic, readonly, copy) NSUUID *parentUUID;
@property (nonatomic, readonly) bool permitPendingAssociations;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDDatabaseTransaction *transaction;

- (void).cxx_destruct;
- (bool)enforceSameSource;
- (id)initWithParentUUID:(id)arg1 enforceSameSource:(bool)arg2 permitPendingAssociations:(bool)arg3 profile:(id)arg4 transaction:(id)arg5;
- (id)parentUUID;
- (bool)permitPendingAssociations;
- (id)profile;
- (id)transaction;

@end
