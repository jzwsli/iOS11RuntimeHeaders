/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewProviderManaging> {
    NSMutableDictionary * _cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableArray * _loadedCards;
    NSArray * _providers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *loadedCards;
@property (nonatomic, retain) NSArray *providers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)loadCardSectionViewsFromCard:(id)arg1 providerHelper:(id)arg2 completion:(id /* block */)arg3;
- (id)loadedCards;
- (id)providers;
- (void)setProviders:(id)arg1;
- (id)viewConfigurationForCardSection:(id)arg1;

@end