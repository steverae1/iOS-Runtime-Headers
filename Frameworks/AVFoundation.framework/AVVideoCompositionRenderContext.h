/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoComposition, AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject {
    AVVideoCompositionRenderContextInternal *_internal;
}

@property(readonly) struct { float x1; float x2; float x3; float x4; } edgeWidths;
@property(readonly) BOOL highQualityRendering;
@property(readonly) struct { int x1; int x2; } pixelAspectRatio;
@property(readonly) float renderScale;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } renderTransform;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) AVVideoComposition * videoComposition;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;

- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (struct { float x1; float x2; float x3; float x4; })edgeWidths;
- (void)finalize;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;
- (BOOL)highQualityRendering;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3;
- (struct __CVBuffer { }*)newPixelBuffer;
- (struct { int x1; int x2; })pixelAspectRatio;
- (float)renderScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })renderTransform;
- (struct CGSize { float x1; float x2; })size;
- (id)videoComposition;

@end