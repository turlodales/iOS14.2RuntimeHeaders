/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListCell : UITableViewCell {
    bool  _enabled;
    <PXNavigationListItem> * _listItem;
    long long  _separatorStyleWorkaround57597636;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) <PXNavigationListItem> *listItem;
@property (nonatomic) long long separatorStyleWorkaround57597636;

+ (id)_symbolConfigurationForFont:(id)arg1;
+ (id)detailTextLabelFont;
+ (id)textLabelFont;

- (void).cxx_destruct;
- (id)_currentCellColor;
- (void)_updateCellStyle;
- (bool)enabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)listItem;
- (long long)separatorStyleWorkaround57597636;
- (void)setEnabled:(bool)arg1;
- (void)setListItem:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setSeparatorStyleWorkaround57597636:(long long)arg1;

@end
