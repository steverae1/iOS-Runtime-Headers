/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@class AXUIAlertStyleProvider, AXUIServiceManager, NSMutableDictionary, NSString;

@interface AXUIDisplayManager : NSObject {
    NSMutableDictionary *_activeContentViewControllers;
    int _activeInterfaceOrientation;
    NSMutableDictionary *_activeWindows;
    NSMutableDictionary *_alertQueues;
    AXUIAlertStyleProvider *_defaultAlertStyleProvider;
    unsigned int _numberOfAttemptsToInitializeActiveInterfaceOrientation;
    NSMutableDictionary *_passiveContentViewControllers;
    NSMutableDictionary *_passiveWindows;
    AXUIServiceManager *_serviceManager;
    NSString *_systemServerActionHandlerIdentifier;
    NSMutableDictionary *_visibleAlertContexts;
}

@property(retain) NSMutableDictionary * activeContentViewControllers;
@property int activeInterfaceOrientation;
@property(retain) NSMutableDictionary * activeWindows;
@property(retain) NSMutableDictionary * alertQueues;
@property(retain) AXUIAlertStyleProvider * defaultAlertStyleProvider;
@property unsigned int numberOfAttemptsToInitializeActiveInterfaceOrientation;
@property(retain) NSMutableDictionary * passiveContentViewControllers;
@property(retain) NSMutableDictionary * passiveWindows;
@property AXUIServiceManager * serviceManager;
@property(copy) NSString * systemServerActionHandlerIdentifier;
@property(retain) NSMutableDictionary * visibleAlertContexts;

+ (id)sharedDisplayManager;

- (void)_activeInterfaceOrientationDidChange:(int)arg1 duration:(double)arg2;
- (void)_addContentViewController:(id)arg1 toWindow:(id)arg2 forService:(id)arg3 context:(void*)arg4 completion:(id)arg5;
- (void)_attemptToInitializeActiveInterfaceOrientation;
- (void)_didHideOrDequeueAlertWithContext:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_handleNextAlertForType:(unsigned int)arg1;
- (BOOL)_hasVisibleAlertWithType:(unsigned int)arg1;
- (void)_hideAlertWithContext:(id)arg1 notifyDelegate:(BOOL)arg2;
- (double)_originalDurationForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 withAdjustedDuration:(double)arg3;
- (void)_removeContentViewController:(id)arg1 forService:(id)arg2;
- (void)_resetServiceManager;
- (void)_rotateWindow:(id)arg1 toInterfaceOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (BOOL)_serviceWantsToPreventAutorotation:(id)arg1;
- (void)_showAlertWithContext:(id)arg1;
- (void)_showOrEnqueueAlertWithContext:(id)arg1;
- (id)_transactionIdentifierForDisplayingAlertWithContext:(id)arg1 service:(id)arg2;
- (id)_transactionIdentifierForDisplayingContentViewController:(id)arg1 service:(id)arg2;
- (id)_windowWithUserInteractionEnabled:(BOOL)arg1 windowLevel:(float)arg2 createIfNeeded:(BOOL)arg3;
- (id)activeContentViewControllers;
- (int)activeInterfaceOrientation;
- (id)activeWindows;
- (id)alertQueues;
- (id)contentViewControllerWithUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)defaultAlertStyleProvider;
- (void)hideAlertWithIdentifier:(id)arg1 forService:(id)arg2;
- (id)init;
- (id)initWithServiceManager:(id)arg1;
- (unsigned int)numberOfAttemptsToInitializeActiveInterfaceOrientation;
- (id)passiveContentViewControllers;
- (id)passiveWindows;
- (id)serviceManager;
- (void)setActiveContentViewControllers:(id)arg1;
- (void)setActiveInterfaceOrientation:(int)arg1;
- (void)setActiveWindows:(id)arg1;
- (void)setAlertQueues:(id)arg1;
- (void)setContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 completion:(id)arg5;
- (void)setContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 forService:(id)arg3;
- (void)setDefaultAlertStyleProvider:(id)arg1;
- (void)setNumberOfAttemptsToInitializeActiveInterfaceOrientation:(unsigned int)arg1;
- (void)setPassiveContentViewControllers:(id)arg1;
- (void)setPassiveWindows:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setSystemServerActionHandlerIdentifier:(id)arg1;
- (void)setVisibleAlertContexts:(id)arg1;
- (id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned int)arg4 forService:(id)arg5;
- (id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned int)arg4 priority:(unsigned int)arg5 duration:(double)arg6 forService:(id)arg7;
- (id)systemServerActionHandlerIdentifier;
- (id)visibleAlertContexts;

@end