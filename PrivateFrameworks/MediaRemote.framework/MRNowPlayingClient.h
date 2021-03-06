/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    void * _activePlayer;
    void * _client;
    NSMutableArray * _playerClients;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) void*activePlayer;
@property (nonatomic) void*client;
@property (nonatomic, readonly) NSArray *playerClients;

- (void*)activePlayer;
- (void*)client;
- (void)dealloc;
- (id)description;
- (id)initWithPlayerPath:(void*)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(void*)arg1;
- (id)playerClients;
- (void)removePlayer:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (void)setActivePlayer:(void*)arg1;
- (void)setClient:(void*)arg1;

@end
