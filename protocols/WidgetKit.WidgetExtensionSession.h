/* Generated by RuntimeBrowser.
 */

@protocol WidgetKit.WidgetExtensionSession

@required

- (void)attachPreviewAgentWithFrameworkPath:(void *)arg1 endpoint:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAuditToken *, NSError *, void*
- (void)getDescriptorsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPlaceholdersWithEnvironment:(void *)arg1 for:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CHKWidgetEnvironment *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimelineFor:(void *)arg1 into:(void *)arg2 environment:(void *)arg3 isPreview:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CHSWidget *, NSFileHandle *, CHKWidgetEnvironment *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleURLSessionEventsFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidate;

@end