/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseTableViewController : UIViewController <MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryBrowseSectionHeaderViewDelegate, MusicLibraryViewConfigurationConsuming, MusicMediaPickerSearchDelegate, MusicSplitInitialStateProviding, MusicTableViewDelegate, UITableViewDataSource, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    MusicAsynchronousPropertyLoadingController * _asynchronousPropertyLoadingController;
    MusicClientContext * _clientContext;
    NSArray * _contentDescriptors;
    UIColor * _defaultSelectionTintColor;
    <MusicLibraryBrowseTableViewControllerDelegate> * _delegate;
    struct { 
        unsigned int didFinishContentHeightAnimation : 1; 
        unsigned int willBeginContentHeightAnimation : 1; 
    }  _delegateRespondsToSelector;
    bool  _didIgnoreEntityProviderInvalidationDuringEditing;
    id /* block */  _editingChangesCommitBlock;
    MusicEditingEntityProvider * _editingEntityProvider;
    bool  _editingWasCancelled;
    MusicEntityViewDescriptor * _entityViewDescriptor;
    unsigned long long  _firstSectionHeaderIndex;
    bool  _hasValidFirstSectionHeaderIndex;
    MusicEntityValueContext * _itemEntityValueContext;
    long long  _lastSelectionBehavior;
    MusicLibraryBrowseTableViewConfiguration * _libraryViewConfiguration;
    unsigned long long  _numberOfEntities;
    MPAVController * _player;
    double  _previousWidth;
    unsigned long long  _referenceCountForIgnoringEntityProviderInvalidation;
    unsigned long long  _referenceCountForRunningEditingStateAnimations;
    NSMutableArray * _reusableItemCoalescingEntityValueProviders;
    NSMutableArray * _reusableSectionCoalescingEntityValueProviders;
    NSMapTable * _sectionContentDescriptorToMaximumHeaderHeight;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
    MusicEntityValueContext * _selectedItemEntityValueContext;
    bool  _shouldReloadTableViewOnceStoppedIgnoringNotifications;
    MusicTableView * _tableView;
    <UIViewControllerPreviewing> * _viewControllerPreviewing;
    NSMapTable * _viewToDownloadInformationObserverToken;
    NSMutableArray * _visibleFlexibleHeaderViews;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double effectiveContentHeight;
@property (nonatomic, readonly) NSArray *entityProviderChangeRecords;
@property (nonatomic, readonly) MusicEntityViewDescriptor *entityViewDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicLibraryViewConfiguration *libraryViewConfiguration;
@property (nonatomic, readonly) UIColor *sectionHeaderBackgroundColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MusicTableView *tableView;

- (void).cxx_destruct;
- (void)_beginEntityProviderInvalidation;
- (double)_calculateTableViewMaximumRowHeight;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)_configureForEntityViewDescriptorProperties;
- (void)_configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)_dequeueItemCoalescingEntityValueProvider;
- (id)_dequeueSectionCoalescingEntityValueProvider;
- (void)_didFinishContentHeightAnimation;
- (void)_didFinishEditingStateChangeAnimation;
- (id)_effectiveEntityProvider;
- (void)_endIgnoringEntityProviderInvalidation;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleEntityPlayabilityControllerDidChangeNotification:(id)arg1;
- (void)_handleEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_handleEntityViewDescriptorDisplayPropertiesDidChangeNotification:(id)arg1;
- (void)_handleEntityViewDescriptorDisplayValuesDidChangeNotification:(id)arg1;
- (void)_handleSectionContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_invalidateIndexBarDataSource;
- (id)_itemEntityValueContext;
- (void)_recycleItemCoalescingEntityValueProvider:(id)arg1;
- (void)_recycleSectionCoalescingEntityValueProvider:(id)arg1;
- (void)_registerForNotificationsForContentDescriptors;
- (void)_reloadTableViewData;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (void)_setSelectedIndexPath:(id)arg1 entityValueContext:(id)arg2;
- (void)_uninstallEditingEntityProviderIfAppropriate;
- (void)_unregisterForNotificationsForContentDescriptors;
- (void)_updateEntityDisabledStateForView:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updateEntityDisabledStateForVisibleItems;
- (void)_updateNumberOfEntities;
- (void)_updatePropertiesFromContentDescriptors;
- (bool)_wantsPersistentSelection;
- (void)_willBeginContentHeightAnimation;
- (void)_willBeginEditingStateChangeAnimation;
- (void)cancelEditing;
- (id)clientContext;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)description;
- (void)didEndDisplayingBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (double)effectiveContentHeight;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endEditingWithCommitBlock:(id /* block */)arg1;
- (id)entityProviderChangeRecords;
- (id)entityViewDescriptor;
- (bool)getContentOffset:(struct CGPoint { double x1; double x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (void)handleContentDescriptorDidInvalidate;
- (void)handleContentSizeCategoryDidChange;
- (void)handleEntityProviderDidInvalidate;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3;
- (long long)handleSelectionOfCellForEntityValueContext:(id)arg1;
- (long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertEntityValueProviders:(id)arg1;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (unsigned long long)numberOfIndexBarEntries;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)sectionHeaderBackgroundColor;
- (void)sectionHeaderViewDidSelectButton:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)showInitialStateForSplitViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectAddButtonForCell:(id)arg2 events:(unsigned long long)arg3;
- (void)tableView:(id)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableViewDataDidReload;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)tableViewTintColorDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDisplayBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end