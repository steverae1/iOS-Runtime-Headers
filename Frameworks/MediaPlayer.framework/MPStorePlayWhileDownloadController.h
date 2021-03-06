/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, SSDownloadHandler, SSDownloadManager;

@interface MPStorePlayWhileDownloadController : NSObject <SSDownloadHandlerDelegate, UIAlertViewDelegate> {
    NSMutableSet *_cellularRestrictedAlertViews;
    SSDownloadHandler *_downloadHandler;
    SSDownloadManager *_downloadManager;
    NSObject<OS_dispatch_queue> *_downloadSessionQueue;
    NSMutableArray *_downloadSessions;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_closeSessionForAsset:(id)arg1;
- (id)_downloadSessionWithID:(id)arg1;
- (id)_init;
- (id)_openSessionWithProperties:(id)arg1 options:(id)arg2;
- (id)_openSessionWithProperties:(id)arg1 style:(int*)arg2;
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)arg1;
- (BOOL)_showNoNetworkDialogForMediaItem:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)canOpenSessionWithMediaItem:(id)arg1;
- (void)dealloc;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (id)init;
- (BOOL)isSessionRequiredToPlayMediaItem:(id)arg1;
- (id)openSessionWithMediaItem:(id)arg1 options:(id)arg2;
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)arg1;

@end
