/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKGridLayoutManager : NSObject <NUIArrangementContainer, NUIGridArrangementDataSource> {
    NSArray * _alignments;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedFittingSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedGridSize;
    NUIGridArrangement * _gridArrangement;
    long long  _indexForFirstTrailingColumn;
    NSMapTable * _itemToRowMapping;
    NSDictionary * _itemsForIndex;
    NSArray * _itemsForRows;
    NSArray * _spacings;
    bool  _tableContainsRowHeaders;
    long long  _totalEqualColumns;
    NSArray * _verticalRowAlignments;
    double  _widthOfEqualFillColumns;
}

@property (nonatomic, retain) NSArray *alignments;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedFittingSize;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedGridSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NUIGridArrangement *gridArrangement;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexForFirstTrailingColumn;
@property (nonatomic, retain) NSMapTable *itemToRowMapping;
@property (nonatomic, retain) NSDictionary *itemsForIndex;
@property (nonatomic, retain) NSArray *itemsForRows;
@property (nonatomic, retain) NSArray *spacings;
@property (readonly) Class superclass;
@property (nonatomic) bool tableContainsRowHeaders;
@property (nonatomic) long long totalEqualColumns;
@property (nonatomic, retain) NSArray *verticalRowAlignments;
@property (nonatomic) double widthOfEqualFillColumns;

+ (id)arrayOfItemsForSection:(id)arg1;
+ (id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3;
+ (id)font;
+ (id)gridManagerWithAlignments:(id)arg1 rows:(id)arg2;
+ (double)leadingSectionSpacingForView:(id)arg1 view2:(id)arg2 index:(unsigned long long)arg3 alignmentSchema:(id)arg4 allEqual:(bool)arg5;
+ (id)verticalAlignmentsForItems:(id)arg1;

- (void).cxx_destruct;
- (id)addItemsToDictionary:(id)arg1 forSection:(id)arg2 row:(unsigned long long)arg3 truncationPriorities:(id)arg4;
- (id)alignments;
- (bool)allEqualColumns;
- (struct CGSize { double x1; double x2; })cachedFittingSize;
- (struct CGSize { double x1; double x2; })cachedGridSize;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)description;
- (long long)effectiveUserInterfaceLayoutDirection;
- (id)gridArrangement;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;
- (double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3;
- (bool)hasManyTrailingColumns;
- (long long)indexForFirstTrailingColumn;
- (id)initWithWithAlignments:(id)arg1 rows:(id)arg2;
- (id)itemToRowMapping;
- (id)itemsForIndex;
- (id)itemsForRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)numberOfColumns;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (void)placeViewsForSize:(struct CGSize { double x1; double x2; })arg1 forRow:(id)arg2 completion:(id /* block */)arg3;
- (void)setAlignments:(id)arg1;
- (void)setCachedFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedGridSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGridArrangement:(id)arg1;
- (void)setIndexForFirstTrailingColumn:(long long)arg1;
- (void)setItemToRowMapping:(id)arg1;
- (void)setItemsForIndex:(id)arg1;
- (void)setItemsForRows:(id)arg1;
- (void)setSpacings:(id)arg1;
- (void)setTableContainsRowHeaders:(bool)arg1;
- (void)setTotalEqualColumns:(long long)arg1;
- (void)setVerticalRowAlignments:(id)arg1;
- (void)setWidthOfEqualFillColumns:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeForFittingSize:(struct CGSize { double x1; double x2; })arg1 forRow:(id)arg2;
- (id)spacings;
- (id)spacingsForAlignments:(id)arg1 firstValidDataRow:(id)arg2;
- (bool)tableContainsRowHeaders;
- (long long)totalEqualColumns;
- (double)trailingSectionSpacingBasedOnTotalViewsInSection:(long long)arg1;
- (id)verticalRowAlignments;
- (double)widthOfEqualFillColumns;

@end