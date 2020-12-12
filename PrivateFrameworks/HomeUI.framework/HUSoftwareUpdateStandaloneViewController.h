/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate> {
    bool  _allowRefresh;
    bool  _showDoneButtonInNavBar;
    NAFuture * _softwareUpdateFetchFuture;
    HUSoftwareUpdateItemModuleController * _softwareUpdateItemModuleController;
}

@property (nonatomic) bool allowRefresh;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (nonatomic) bool showDoneButtonInNavBar;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_kickoffSoftwareUpdate;
- (void)_setupRefreshControl;
- (void)_triggerRefresh:(id)arg1;
- (bool)allowRefresh;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemModuleControllers;
- (id)keyCommands;
- (void)setAllowRefresh:(bool)arg1;
- (void)setShowDoneButtonInNavBar:(bool)arg1;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSoftwareUpdateItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (bool)showDoneButtonInNavBar;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateItemModuleController;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end