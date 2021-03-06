/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLQuadView : CLKUIQuadView {
    int  _backingHeight;
    int  _backingWidth;
    unsigned int  _colorRenderbuffer;
    EAGLContext * _context;
    unsigned int  _defaultFramebuffer;
    CLKUIGLQuadRenderer * _renderer;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_discardContents;
- (void)_display;
- (void)_handleQuadArrayChange:(id)arg1;
- (void)_resizeFramebuffer;
- (void)_setupGL;
- (id)_snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
