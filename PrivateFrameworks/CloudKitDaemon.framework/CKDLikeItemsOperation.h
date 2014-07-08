/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, CKShareID;

@interface CKDLikeItemsOperation : CKDOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemLikedProgressBlock;

    NSArray *_itemIDsToLike;
    NSArray *_itemIDsToUnlike;
    CKShareID *_shareID;
}

@property(copy) id itemLikedProgressBlock;
@property(retain) NSArray * itemIDsToLike;
@property(retain) NSArray * itemIDsToUnlike;
@property(retain) CKShareID * shareID;


- (void)_handleLike:(id)arg1 withResponse:(id)arg2;
- (id)itemLikedProgressBlock;
- (void)setItemLikedProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)itemIDsToUnlike;
- (id)itemIDsToLike;
- (void)setItemIDsToUnlike:(id)arg1;
- (void)setItemIDsToLike:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void)main;
- (void)finishWithError:(id)arg1;
- (void).cxx_destruct;

@end