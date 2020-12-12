/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddBankAccountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    NSString * _accountCountryCode;
    PKBankAccountInformation * _bankInformation;
    NSMutableDictionary * _cellHasPastedContent;
    NSArray * _cellPlaceholderText;
    NSArray * _cellText;
    NSMutableDictionary * _cells;
    <PKAddBankAccountInformationViewControllerDelegate> * _delegate;
    UIButton * _deleteBankInformationButton;
    PKAccount * _featureAccount;
    PKFindBankAccountInformationFooterView * _footerView;
    bool  _hasInteractedWithCell;
    bool  _isEditingBankInformation;
    bool  _offerKeychainPreFill;
    bool  _prefilledFromKeychain;
    unsigned long long  _state;
    PKTableHeaderView * _tableHeader;
    NSMutableDictionary * _userEnteredValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddBankAccountInformationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool offerKeychainPreFill;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPaymentFundingSourceWithCompletion:(id /* block */)arg1;
- (bool)_allCellsHavePastedContent;
- (id)_bankInformationTextForRow:(unsigned long long)arg1;
- (id)_cellHasPastedContent;
- (bool)_cellValuesAreValid;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2;
- (void)_deleteBankInformation;
- (id)_footerView;
- (id)_headerSubTitle;
- (id)_headerTitle;
- (void)_hideHeaderActivitySpinner;
- (bool)_isAccountNumberCellValid;
- (bool)_isCellValidAtRow:(unsigned long long)arg1;
- (bool)_isRoutingNumberCellValid;
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1;
- (unsigned long long)_minTextLengthForRow:(unsigned long long)arg1;
- (double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2;
- (id)_placeholderTextForRow:(unsigned long long)arg1;
- (void)_reloadTableSection;
- (unsigned long long)_rowWithTextField:(id)arg1;
- (void)_setCellHasPastedContent:(bool)arg1 forRow:(unsigned long long)arg2;
- (void)_setIdleTimerDisabled:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setNavigationBarItemsHidden:(bool)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)_setTableFooterView;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2;
- (void)_showHeaderActivitySpinner;
- (void)_showHowToFindAccountInformationViewController:(id)arg1;
- (id)_textForRow:(unsigned long long)arg1;
- (void)_updateBankAccountInformationWithValues:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateHeaderAndNavigationItems;
- (id)_userEnteredTextForCellAtRow:(unsigned long long)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 featureAccount:(id)arg4;
- (id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4 featureAccount:(id)arg5;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)offerKeychainPreFill;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)setOfferKeychainPreFill:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidClear:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end