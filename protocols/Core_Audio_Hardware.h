/* Generated by RuntimeBrowser.
 */

@protocol Core_Audio_Hardware

@required

- (void)add_property_listener:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)audio_object_get_property_data:(void *)arg1 token:(void *)arg2 at:(void *)arg3 with:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: unsigned int, struct Device_Token { unsigned int x1; }, struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)audio_object_get_property_info:(void *)arg1 token:(void *)arg2 at:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 12: unsigned int, struct Device_Token { unsigned int x1; }, struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned char, unsigned int, unsigned int, void*
- (void)audio_object_set_property_data:(void *)arg1 token:(void *)arg2 at:(void *)arg3 with:(void *)arg4 value:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: unsigned int, struct Device_Token { unsigned int x1; }, struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)create_aggregate_device:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, void*
- (void)create_device_for_client_io:(void *)arg1 with:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: struct Transport_Token { unsigned int x1; }, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct Device_Token { unsigned int x1; }, void*
- (void)create_io_client_for_endpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct Transport_Token { unsigned int x1; }, void*
- (void)destroy_aggregate_device:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)handle_io_message:(struct Transport_Token { unsigned int x1; })arg1 with:(struct Device_Token { unsigned int x1; })arg2 incoming:(Core_Audio_XPC_Raw_Transporter *)arg3;
- (void)handle_io_message:(void *)arg1 with:(void *)arg2 incoming:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: struct Transport_Token { unsigned int x1; }, struct Device_Token { unsigned int x1; }, Core_Audio_XPC_Raw_Transporter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, Core_Audio_XPC_Raw_Transporter *, void*
- (void)ping:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
