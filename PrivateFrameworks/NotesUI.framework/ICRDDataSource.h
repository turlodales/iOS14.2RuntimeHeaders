/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICRDDataSource : NSObject {
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _collectionViewDiffableDataSource;
    id  _firstRelevantItemIdentifier;
    bool  _isAddingOrRemovingPassword;
    NSArray * _sectionControllers;
    id /* block */  _willCollapseItemHandler;
    id /* block */  _willExpandItemHandler;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource;
@property (nonatomic, readonly) id firstRelevantItemIdentifier;
@property (nonatomic) bool isAddingOrRemovingPassword;
@property (nonatomic, retain) NSArray *sectionControllers;
@property (nonatomic, copy) id /* block */ willCollapseItemHandler;
@property (nonatomic, copy) id /* block */ willExpandItemHandler;

- (void).cxx_destruct;
- (id)associatedCellsForManagedObjectIDs:(id)arg1;
- (id)collectionView;
- (id)collectionViewDiffableDataSource;
- (void)dealloc;
- (id)firstRelevantItemIdentifier;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (bool)isAddingOrRemovingPassword;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)noteDidAddOrRemovePassword:(id)arg1;
- (void)noteWillAddOrRemovePassword:(id)arg1;
- (void)reindexDataAnimated:(bool)arg1;
- (void)reindexDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (id)sectionControllers;
- (void)setIsAddingOrRemovingPassword:(bool)arg1;
- (void)setSectionControllers:(id)arg1;
- (void)setWillCollapseItemHandler:(id /* block */)arg1;
- (void)setWillExpandItemHandler:(id /* block */)arg1;
- (id /* block */)willCollapseItemHandler;
- (void)willEnterForeground:(id)arg1;
- (id /* block */)willExpandItemHandler;

@end
