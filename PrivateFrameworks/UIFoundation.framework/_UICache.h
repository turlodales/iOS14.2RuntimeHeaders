/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UICache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    bool  _clearsCacheOnApplicationBackground;
    bool  _clearsCacheOnLowMemoryWarnings;
    NSObject<OS_dispatch_source> * _memoryWarningsSource;
    id  _noteObserver;
}

@property (nonatomic) bool clearsCacheOnApplicationBackground;
@property (nonatomic) bool clearsCacheOnLowMemoryWarnings;

- (id)cacheKeys;
- (bool)clearsCacheOnApplicationBackground;
- (bool)clearsCacheOnLowMemoryWarnings;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retainedObjectForKey:(id)arg1;
- (void)setClearsCacheOnApplicationBackground:(bool)arg1;
- (void)setClearsCacheOnLowMemoryWarnings:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end