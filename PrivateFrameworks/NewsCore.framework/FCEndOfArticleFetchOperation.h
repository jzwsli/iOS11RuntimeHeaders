/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndOfArticleFetchOperation : FCFetchOperation {
    FCCloudContext * _context;
    <FCFeedPersonalizing> * _feedPersonalizer;
    bool  _fetchAllTopics;
    bool  _fetchPublisherHeadlines;
    bool  _fetchRelatedHeadlines;
    FCHeadline * _headline;
    unsigned long long  _minimumPublisherHeadlineCount;
    unsigned long long  _minimumRelatedHeadlineCount;
    FCFeedTransformationPersonalizedSort * _personalizationTransform;
    double  _screenScale;
    unsigned long long  _totalPublisherHeadlineCount;
    unsigned long long  _totalRelatedHeadlineCount;
    FCFeedTransformationUnreadFirst * _unreadTransformation;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property bool fetchAllTopics;
@property bool fetchPublisherHeadlines;
@property bool fetchRelatedHeadlines;
@property (nonatomic, retain) FCHeadline *headline;
@property unsigned long long minimumPublisherHeadlineCount;
@property unsigned long long minimumRelatedHeadlineCount;
@property (nonatomic, retain) FCFeedTransformationPersonalizedSort *personalizationTransform;
@property (nonatomic) double screenScale;
@property unsigned long long totalPublisherHeadlineCount;
@property unsigned long long totalRelatedHeadlineCount;
@property (nonatomic, retain) FCFeedTransformationUnreadFirst *unreadTransformation;

- (void).cxx_destruct;
- (void)_fetchThumbnailsForHeadlines:(id)arg1 callbackQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_filterHeadlines:(id)arg1 completion:(id /* block */)arg2;
- (void)_streamingHeadlinesForArticleIDs:(id)arg1 endOfArticleTransform:(id)arg2 callbackQueue:(id)arg3 minimumResultCount:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)_streamingHeadlinesForFeedItems:(id)arg1 tagsByID:(id)arg2;
- (id)context;
- (id)feedPersonalizer;
- (bool)fetchAllTopics;
- (bool)fetchPublisherHeadlines;
- (bool)fetchRelatedHeadlines;
- (id)headline;
- (id)initWithContext:(id)arg1 headline:(id)arg2;
- (unsigned long long)minimumPublisherHeadlineCount;
- (unsigned long long)minimumRelatedHeadlineCount;
- (void)performOperation;
- (id)personalizationTransform;
- (void)prepareOperation;
- (double)screenScale;
- (void)setContext:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchAllTopics:(bool)arg1;
- (void)setFetchPublisherHeadlines:(bool)arg1;
- (void)setFetchRelatedHeadlines:(bool)arg1;
- (void)setHeadline:(id)arg1;
- (void)setMinimumPublisherHeadlineCount:(unsigned long long)arg1;
- (void)setMinimumRelatedHeadlineCount:(unsigned long long)arg1;
- (void)setPersonalizationTransform:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setTotalPublisherHeadlineCount:(unsigned long long)arg1;
- (void)setTotalRelatedHeadlineCount:(unsigned long long)arg1;
- (void)setUnreadTransformation:(id)arg1;
- (unsigned long long)totalPublisherHeadlineCount;
- (unsigned long long)totalRelatedHeadlineCount;
- (id)unreadTransformation;

@end
