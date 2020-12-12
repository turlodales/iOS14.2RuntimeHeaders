/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface RMConnectionClientCachedMessage : NSObject {
    NSData * _data;
    NSString * _name;
    id /* block */  _streamingCallback;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id /* block */ streamingCallback;

- (void).cxx_destruct;
- (id)data;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2 streamingCallback:(id /* block */)arg3;
- (id)name;
- (id /* block */)streamingCallback;

@end