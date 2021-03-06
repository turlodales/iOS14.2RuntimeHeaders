/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIChoice : RUIElement {
    unsigned long long  _choiceType;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long choiceType;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)choiceType;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (id)tintColor;
- (id)title;
- (unsigned long long)typeForChoiceString:(id)arg1;

@end
