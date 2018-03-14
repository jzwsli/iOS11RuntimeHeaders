/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCDeviceAuthenticationChallenge : NSObject {
    long long  _challengeType;
    NSString * _codeToEnterOnDevice;
    id /* block */  _continuation;
}

@property (nonatomic, readonly) long long challengeType;
@property (nonatomic, readonly, copy) NSString *codeToEnterOnDevice;

+ (id)_challengeWithCodeToEnterLocally:(id /* block */)arg1;
+ (id)_challengeWithCodeToEnterOnDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (void)cancel;
- (long long)challengeType;
- (id)codeToEnterOnDevice;
- (void)userEnteredCodeLocally:(id)arg1;

@end