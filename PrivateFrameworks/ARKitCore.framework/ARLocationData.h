/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARLocationData : NSObject <ARDaemonSecureCoding, ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ecefFromlocation;
    CLLocation * _location;
    void _locationECEF;
    void _locationLLA;
    bool  _secure;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ecefFromlocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) void locationECEF;
@property (nonatomic, readonly) void locationLLA;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ecefFromlocation;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (void)enuFromLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSecure;
- (id)location;
- (void)locationECEF;
- (void)locationLLA;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end