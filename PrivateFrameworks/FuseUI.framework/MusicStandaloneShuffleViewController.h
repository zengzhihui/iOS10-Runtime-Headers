/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStandaloneShuffleViewController : UIViewController <MusicTableViewDelegate, UITableViewDataSource> {
    MusicShuffleActionEntityProvider * _shuffleActionEntityProvider;
    MusicEntityViewDescriptor * _shuffleEntityViewDescriptor;
    MusicEntityTracklistItemView * _shuffleItemView;
    MusicTableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicEntityViewDescriptor *shuffleEntityViewDescriptor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_shuffleEntityProviderDidInvalidateNotification:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithShuffleActionEntityProvider:(id)arg1;
- (void)setShuffleEntityViewDescriptor:(id)arg1;
- (id)shuffleEntityViewDescriptor;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewTintColorDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
