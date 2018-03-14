/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalCertificateResponse : PBCodable <NSCopying> {
    NSData * _certificate;
}

@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, readonly) bool hasCertificate;

- (void).cxx_destruct;
- (id)certificate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCertificate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)writeTo:(id)arg1;

@end