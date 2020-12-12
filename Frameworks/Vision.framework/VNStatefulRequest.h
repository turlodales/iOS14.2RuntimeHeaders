/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNStatefulRequest : VNImageBasedRequest {
    NSUUID * _requestUUID;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameAnalysisSpacing;
@property (readonly) long long minimumLatencyFrameCount;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } requestFrameAnalysisSpacing;
@property (readonly) NSUUID *requestUUID;

+ (Class)configurationClass;

- (void).cxx_destruct;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameAnalysisSpacing;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (long long)minimumLatencyFrameCount;
- (id)newDefaultRequestInstance;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestFrameAnalysisSpacing;
- (id)requestUUID;

@end