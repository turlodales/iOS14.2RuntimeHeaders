/* Generated by RuntimeBrowser.
 */

@protocol SPUISearchHeaderDelegate <NSObject>

@required

- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)performWebSearch;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(bool)arg3;
- (void)removeCompletionAndHighlightAsTyped:(bool)arg1;
- (void)returnKeyPressed;

@end
