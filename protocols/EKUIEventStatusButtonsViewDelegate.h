/* Generated by RuntimeBrowser.
 */

@protocol EKUIEventStatusButtonsViewDelegate <NSObject>

@required

- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(void *)arg1 didSelectAction:(void *)arg2 ifCancelled:(void *)arg3; // needs 3 arg types, found 7: EKUIEventStatusButtonsView *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (UIFont *)eventStatusButtonsViewButtonFont:(EKUIEventStatusButtonsView *)arg1;
- (double)eventStatusButtonsViewButtonFontSize:(EKUIEventStatusButtonsView *)arg1;
- (void)statusButtonsDidLayout;

@end
