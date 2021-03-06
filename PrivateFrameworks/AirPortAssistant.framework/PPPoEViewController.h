/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class PPPoEConnectionUIViewController, UIActivityIndicatorView, UILabel, UIView;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
    id previousNavDelegate;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *spinnerWithStatusAdjacentView;
    UIView *tableHeaderContainerView;
}

@property(retain) UIView * justTextContainerView;
@property UILabel * justTextLabel;
@property(retain) PPPoEConnectionUIViewController * pppoeConnectionUIViewController;
@property(retain) UIView * spinnerWithStatusAdjacentView;
@property(retain) UIView * tableHeaderContainerView;

- (void)dealloc;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)pppoeConnectionUIViewController;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPppoeConnectionUIViewController:(id)arg1;
- (void)setSpinnerWithStatusAdjacentView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (id)spinnerWithStatusAdjacentView;
- (id)tableHeaderContainerView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
