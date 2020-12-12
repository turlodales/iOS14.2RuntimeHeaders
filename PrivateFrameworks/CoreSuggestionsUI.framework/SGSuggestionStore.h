/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGSuggestionStore : SGList <SGListDelegate> {
    bool  _modified;
    long long  _notificationsLockCount;
    <SGSuggestionDelegate> * _suggestionDelegate;
    NSMutableArray * _suggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (nonatomic, copy) NSArray *suggestions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSuggestion:(id)arg1;
- (id)init;
- (void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)lockNotifications;
- (void)removeSuggestion:(id)arg1;
- (id)sectionWithItem:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestions;
- (void)unlockNotifications;
- (void)updateSuggestion:(id)arg1;

@end