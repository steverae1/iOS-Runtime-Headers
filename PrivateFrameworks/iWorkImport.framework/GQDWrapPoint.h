/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDDrawable;

@interface GQDWrapPoint : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    } mPoint;
    int mZIndex;
}

- (id).cxx_construct;
- (int)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;
- (int)zIndex;

@end
