/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell {
    UICollectionView * _categoriesCollectionView;
    WFActionDrawerCategoriesCollectionViewManager * _categoriesCollectionViewManager;
    UICollectionViewFlowLayout * _categoriesFlowLayout;
    WFActionDrawerCategoriesMetrics * _metrics;
    bool  _shouldStackVertically;
}

@property (nonatomic) UICollectionView *categoriesCollectionView;
@property (nonatomic, retain) WFActionDrawerCategoriesCollectionViewManager *categoriesCollectionViewManager;
@property (nonatomic) UICollectionViewFlowLayout *categoriesFlowLayout;
@property (nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (nonatomic) bool shouldStackVertically;

- (void).cxx_destruct;
- (void)adjustForVerticalStacking;
- (id)categoriesCollectionView;
- (id)categoriesCollectionViewManager;
- (id)categoriesFlowLayout;
- (void)configureWithContentTypeCategories:(id)arg1 coordinator:(id)arg2 metrics:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)metrics;
- (void)setCategoriesCollectionView:(id)arg1;
- (void)setCategoriesCollectionViewManager:(id)arg1;
- (void)setCategoriesFlowLayout:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setShouldStackVertically:(bool)arg1;
- (bool)shouldStackVertically;

@end
