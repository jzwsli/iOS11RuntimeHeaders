/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureGraphConfiguration : NSObject <NSCoding> {
    long long  _audioConfiguration;
    long long  _device;
    long long  _mode;
    long long  _photoEncodingBehavior;
    unsigned long long  _previewConfiguration;
    NSArray * _previewFilters;
    long long  _previewSampleBufferVideoFormat;
    long long  _videoConfiguration;
    long long  _videoEncodingBehavior;
    CAMVideoThumbnailOutputConfiguration * _videoThumbnailOutputConfiguration;
}

@property (nonatomic, readonly) long long audioConfiguration;
@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) unsigned long long previewConfiguration;
@property (nonatomic, readonly) NSArray *previewFilters;
@property (nonatomic, readonly) long long previewSampleBufferVideoFormat;
@property (nonatomic, readonly) long long videoConfiguration;
@property (nonatomic, readonly) long long videoEncodingBehavior;
@property (nonatomic, readonly) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration;

- (void).cxx_destruct;
- (long long)audioConfiguration;
- (id)completeDescription;
- (id)description;
- (long long)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10;
- (id)initWithCoder:(id)arg1;
- (long long)mode;
- (long long)photoEncodingBehavior;
- (unsigned long long)previewConfiguration;
- (id)previewFilters;
- (long long)previewSampleBufferVideoFormat;
- (id)shortDescription;
- (long long)videoConfiguration;
- (long long)videoEncodingBehavior;
- (id)videoThumbnailOutputConfiguration;

@end
