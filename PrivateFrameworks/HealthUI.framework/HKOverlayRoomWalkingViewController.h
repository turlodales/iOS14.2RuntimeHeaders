/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController {
    NSMutableArray * _contextDelegates;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    NSString * _quantityTypeIdentifier;
}

- (void).cxx_destruct;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)showAllFiltersButtonTitle;
- (void)viewDidLoad;

@end