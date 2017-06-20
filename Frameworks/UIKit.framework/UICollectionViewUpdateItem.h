/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {
    NSIndexPath * _finalIndexPath;
    NSUUID * _identifier;
    NSIndexPath * _initialIndexPath;
    bool  _isAppendingSectionInsert;
    long long  _updateAction;
}

@property (getter=_action, nonatomic, readonly) long long action;
@property (nonatomic, retain) NSUUID *identifier;
@property (getter=_indexPath, nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic) bool isAppendingSectionInsert;
@property (getter=_isSectionOperation, nonatomic, readonly) bool isSectionOperation;
@property (getter=_newIndexPath, setter=_setNewIndexPath:, nonatomic, retain) NSIndexPath *newIndexPath;
@property (nonatomic, readonly) long long updateAction;

- (void).cxx_destruct;
- (long long)_action;
- (id)_indexPath;
- (bool)_isSectionOperation;
- (id)_newIndexPath;
- (void)_setNewIndexPath:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (bool)isAppendingSectionInsert;
- (bool)isEqualToUpdate:(id)arg1;
- (bool)isNOOP;
- (bool)isRevertedUpdateOf:(id)arg1;
- (id)revertedUpdate;
- (void)setIdentifier:(id)arg1;
- (void)setIsAppendingSectionInsert:(bool)arg1;
- (long long)updateAction;

@end