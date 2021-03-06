/* Generated by RuntimeBrowser.
 */

@protocol VKInteractiveMapDelegate <NSObject>

@required

- (void)map:(id <VKInteractiveMap>)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didBecomePitched:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 flyoverModeWillChange:(int)arg2;
- (VKOverlayPainter *)map:(id <VKInteractiveMap>)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (<VKTrackableAnnotationPresentation> *)map:(id <VKInteractiveMap>)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapDidBecomeFullyDrawn:(id <VKInteractiveMap>)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id <VKInteractiveMap>)arg1;
- (void)mapDidChangeVisibleRegion:(id <VKInteractiveMap>)arg1;
- (void)mapDidFailLoadingTiles:(id <VKInteractiveMap>)arg1 withError:(NSError *)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; })arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id <VKInteractiveMap>)arg1;
- (void)mapDidFinishLoadingTiles:(id <VKInteractiveMap>)arg1;
- (void)mapDidStartLoadingTiles:(id <VKInteractiveMap>)arg1;
- (void)mapLabelsDidLayout:(id <VKInteractiveMap>)arg1;

@optional

- (void)map:(id <VKInteractiveMap>)arg1 didChangeOrientation:(double)arg2 snapped:(BOOL)arg3;
- (void)map:(id <VKInteractiveMap>)arg1 didUpdateContainsOverlay:(BOOL)arg2;
- (void)mapDidReloadStylesheet:(id <VKInteractiveMap>)arg1;

@end
