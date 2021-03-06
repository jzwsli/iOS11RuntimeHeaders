/* Generated by RuntimeBrowser.
 */

@protocol FCAppConfiguration <NFCopying>

@required

- (long long)analyticsEndpointMaxPayloadSize;
- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (long long)appConfigRefreshRate;
- (double)articleDiversificationSimilarityExpectationEnd;
- (double)articleDiversificationSimilarityExpectationStart;
- (double)articleDiversificationUniquePublisherExpectationSlope;
- (double)articleDiversificationUniquePublisherExpectationYIntercept;
- (long long)articleRapidUpdatesTimeout;
- (long long)autoRefreshMinimumInterval;
- (long long)autoScrollToTopFeedTimeout;
- (NSString *)breakingNewsChannelID;
- (NSString *)briefingsTagID;
- (bool)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
- (long long)corryBarMaxArticleCountForArticleList;
- (long long)corryBarMaxArticleCountForSingleArticle;
- (FCCoverArticlesConfiguration *)coverArticlesConfig;
- (NSNumber *)currentTreatment;
- (bool)diversifyOptionalTopStories;
- (NSString *)editorialChannelID;
- (NSString *)editorialGemsSectionID;
- (NSString *)embedConfigurationAssetID;
- (long long)endOfArticleMaxInaccessiblePaidArticleCount;
- (double)endOfArticleMinPaidHeadlineRatio;
- (NSDictionary *)endpointConfigsByEnvironment;
- (NSString *)experimentalizableFieldPostfix;
- (long long)expiredPaidSubscriptionGroupCutoffTime;
- (NSString *)exploreArticleID;
- (NSArray *)externalAnalyticsConfigurations;
- (NSString *)featuredStoriesTagID;
- (FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
- (NSString *)forYouRecordConfigID;
- (NSArray *)hiddenFeedIDs;
- (FCIAdConfiguration *)iAdConfig;
- (double)interstitialAdLoadDelay;
- (bool)isOrderFeedEndpointEnabled;
- (bool)isPrivateDataEncryptionAllowed;
- (bool)isPrivateDataEncryptionMigrationDesired;
- (long long)maximumNumberOfExpiredPaidSubscriptionGroups;
- (long long)maximumPaidSubscriptionGroupSizeiPad;
- (long long)maximumPaidSubscriptionGroupSizeiPhone;
- (long long)maximumTimesHeadlineInPaidSubscriptionGroup;
- (NSArray *)mediaSharingBlacklistedChannelIDs;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)minimumDurationBetweenForYouGroupsWeekday;
- (long long)minimumDurationBetweenForYouGroupsWeekend;
- (long long)minimumDurationBetweenTrendingGroupsWeekday;
- (long long)minimumDurationBetweenTrendingGroupsWeekend;
- (long long)minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
- (double)minimumTrendingUnseenRatio;
- (long long)newFavoriteNotificationAlertsFrequency;
- (long long)notificationArticleCacheTimeout;
- (long long)notificationArticleWithRapidUpdatesCacheTimeout;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (FCNotificationsConfiguration *)notificationsConfig;
- (NSArray *)onboardingFeedIDs;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (NSString *)personalizationBundleIdMappingResourceId;
- (NSString *)personalizationFavorabilityResourceId;
- (FCPersonalizationTreatment *)personalizationTreatmentForFeldsparID:(NSString *)arg1;
- (NSString *)personalizationUrlMappingResourceId;
- (NSString *)personalizationWhitelistResourceId;
- (FCPrefetchConfiguration *)prefetchConfig;
- (double)prerollLoadingTimeout;
- (NSArray *)presubscribedFeedIDs;
- (bool)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
- (NSArray *)recommendedCategories;
- (long long)savedArticlesCutoffTime;
- (long long)savedArticlesMaximumCountCellular;
- (long long)savedArticlesMaximumCountWiFi;
- (long long)savedArticlesOpenedCutoffTime;
- (NSString *)savedStoriesTagID;
- (long long)stateRestorationAllowedTimeWindow;
- (long long)subscriptionsGlobalMeteredCount;
- (long long)subscriptionsGracePeriodForTokenVerificationSeconds;
- (long long)subscriptionsPlacardGlobalMaximumPerDay;
- (long long)subscriptionsPlacardPublisherFrequencyInSeconds;
- (bool)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
- (double)tileProminenceScoreBalanceValue;
- (NTPBTodayConfig *)todayConfigWithQueueConfigs:(NSArray *)arg1 maxSlotCount:(unsigned long long)arg2;
- (NSArray *)topLevelCuratedTagIDs;
- (NSArray *)topLevelRecommendedChannelTagIDs;
- (NSArray *)topLevelRecommendedTopicTagIDs;
- (FCTopStoriesConfiguration *)topStoriesConfig;
- (NSArray *)topStoriesPublishDates;
- (unsigned long long)trendingStyle;
- (NSString *)trendingTagID;
- (long long)trendingTopicsRefreshRate;
- (bool)universalLinksEnabled;
- (bool)usAndUKUseAUWhatsNewFeatures;
- (bool)useSecureConnectionForAssets;
- (NSString *)widgetConfigID;
- (long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
- (unsigned int)widgetMinimumNumberOfTimesPreseenToBeSeen;

@end
