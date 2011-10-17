/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UIGestureRecognizer;

@interface UIKeyboardLayoutEmoji_iPad : UIKeyboardLayoutEmoji <UIGestureRecognizerDelegate> {
    UIGestureRecognizer *_longPressForMenu;
    UIGestureRecognizer *_translateRecognizer;
    UIButton *_spaceButton;
    UIButton *_dismissButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _spaceFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _dismissFrame;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } spaceFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } dismissFrame;


- (void)generateControlKeyRects;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dismissFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spaceFrame;
- (void)showSplitControlMenu:(id)arg1;
- (void)dismissTranslateDetected:(id)arg1;
- (void)spaceUp;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })categoryFrame;
- (struct CGSize { float x1; float x2; })rightControlSize;
- (struct CGSize { float x1; float x2; })leftControlSize;
- (void)updateControlButtonImages;
- (void)dismiss;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end