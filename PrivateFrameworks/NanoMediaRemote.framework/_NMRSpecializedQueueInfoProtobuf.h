/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSpecializedQueueInfoProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _specializedQueues;
}

@property (nonatomic, retain) NSMutableArray *specializedQueues;

+ (Class)specializedQueuesType;

- (void).cxx_destruct;
- (void)addSpecializedQueues:(id)arg1;
- (void)clearSpecializedQueues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSpecializedQueues:(id)arg1;
- (id)specializedQueues;
- (id)specializedQueuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)specializedQueuesCount;
- (void)writeTo:(id)arg1;

@end
