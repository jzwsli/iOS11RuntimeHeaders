/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLSecurity : NSObject

+ (id)_secTask:(struct __SecTask { }*)arg1 grantedEntitlements:(id)arg2;
+ (bool)canSkipUserPromptsForProcessWithName:(id)arg1 identifier:(int)arg2;
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;
+ (bool)connection:(id)arg1 hasEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valueForEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valuesForEntitlements:(id)arg2;
+ (bool)connectionIsEntitledForPhotoKit:(id)arg1;
+ (bool)containsPhotoKitEntitlement:(id)arg1;
+ (bool)isEntitledForCloudSharingData;
+ (bool)isEntitledForPhotoKit;
+ (bool)secTask:(struct __SecTask { }*)arg1 hasEntitlement:(id)arg2;

@end