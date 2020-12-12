/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebOpenSafariAction : NSObject <AMSUIWebActionRunnable> {
    NSURL * _URL;
    NSString * _callbackScheme;
    AMSUIWebClientContext * _context;
    ASWebAuthenticationSession * _session;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSString *callbackScheme;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASWebAuthenticationSession *session;
@property (readonly) Class superclass;

+ (id)resultFromURL:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)callbackScheme;
- (id)context;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (id)session;
- (void)setCallbackScheme:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setURL:(id)arg1;

@end