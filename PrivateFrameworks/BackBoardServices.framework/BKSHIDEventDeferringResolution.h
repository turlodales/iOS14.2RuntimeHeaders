/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    int  _pid;
    BKSHIDEventDeferringToken * _token;
    long long  _versionedPID;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) BKSHIDEventDisplay *display;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *token;
@property (nonatomic, readonly) long long versionedPID;

+ (id)build:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDisplay:(id)arg1 environment:(id)arg2 versionedPID:(long long)arg3 pid:(int)arg4 token:(id)arg5;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedResolution:(id /* block */)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)pid;
- (id)token;
- (long long)versionedPID;

@end