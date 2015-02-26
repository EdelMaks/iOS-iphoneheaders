/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKWorldDelegate.h>
#import <VectorKit/VKAnimationRunner.h>
#import <VectorKit/VKCameraControllerDelegate.h>
#import <VectorKit/VKCameraDelegate.h>

@protocol MDRenderTarget, MDMapControllerDelegate;
@class VKDispatch, VKWorld, VKCamera, VKScene, VKLayoutContext, NSMutableArray, VKMemoryObserver, NSArray, NSString;

@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate> {

	VKDispatch* _dispatch;
	VKWorld* _world;
	VKCamera* _camera;
	VKScene* _scene;
	VKLayoutContext* _layoutContext;
	id<MDRenderTarget> _displayTarget;
	BOOL _needsLayout;
	unsigned _wantsLayout;
	unsigned _needsRepaint;
	BOOL _userIsGesturing;
	BOOL _iconsShouldAlignToPixels;
	NSMutableArray* _cameraControllers;
	float _debugFramesPerSecond;
	BOOL _rendersInBackground;
	NSMutableArray* _animations[2];
	VKMemoryObserver* _memoryObserver;
	BOOL _isInBackground;
	BOOL _isHidden;
	VKEdgeInsets _edgeInsets;
	VKEdgeInsets _fullyOccludedEdgeInsets;
	VKEdgeInsets _labelEdgeInsets;
	BOOL _deallocing;
	BOOL _needsInitialization;
	unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> >* _renderQueue;
	MapCamera* _mapCamera;
	RenderTree* _mapScene;
	Matrix<float, 4, 1> _bgColor;
	id<MDMapControllerDelegate> _mapDelegate;

}

@property (nonatomic,readonly) VKWorld * world;                                    //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) NSArray * cameraControllers;                        //@synthesize cameraControllers=_cameraControllers - In the implementation block
@property (nonatomic,readonly) VKCamera * camera;                                  //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) float debugFramesPerSecond;                           //@synthesize debugFramesPerSecond=_debugFramesPerSecond - In the implementation block
@property (assign,nonatomic) long long targetDisplay; 
@property (assign,nonatomic) VKEdgeInsets edgeInsets; 
@property (assign,nonatomic) VKEdgeInsets fullyOccludedEdgeInsets;                 //@synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets - In the implementation block
@property (assign,nonatomic) VKEdgeInsets labelEdgeInsets; 
@property (assign,nonatomic) id<MDMapControllerDelegate> mapDelegate;              //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (nonatomic,readonly) BOOL needsInitialization;                           //@synthesize needsInitialization=_needsInitialization - In the implementation block
@property (nonatomic,readonly) Matrix<float bgColor;                               //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,getter=isGesturing,nonatomic) BOOL gesturing; 
@property (assign,nonatomic) BOOL iconsShouldAlignToPixels;                        //@synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setNeedsDisplay;
-(BOOL)isHidden;
-(void)setNeedsLayout;
-(void)setHidden:(BOOL)arg1 ;
-(VKEdgeInsets)edgeInsets;
-(void)animationDidStop:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)forceLayout;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)willEnterForeground;
-(void)cameraDidChange:(id)arg1 ;
-(BOOL)canRender;
-(long long)targetDisplay;
-(void)setTargetDisplay:(long long)arg1 ;
-(void)updateCameraForFrameResize;
-(BOOL)updateDisplayLinkStatus;
-(void)didEnterBackground;
-(float)debugFramesPerSecond;
-(void)clearSceneIsEffectivelyHidden:(BOOL)arg1 ;
-(BOOL)isGesturing;
-(void)setGesturing:(BOOL)arg1 ;
-(BOOL)iconsShouldAlignToPixels;
-(void)setIconsShouldAlignToPixels:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 device:(const shared_ptr<ggl::Device>Ref)arg2 inBackground:(BOOL)arg3 ;
-(void)setMapDelegate:(id<MDMapControllerDelegate>)arg1 ;
-(BOOL)rendersInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(void)initializeWithRenderer:(GLRenderer*)arg1 ;
-(VKCamera *)camera;
-(void)transferAnimationsTo:(id)arg1 ;
-(Matrix<float)bgColor;
-(void)runAnimation:(id)arg1 ;
-(void)edgeInsetsDidEndAnimating;
-(void)edgeInsetsWillBeginAnimating;
-(void)setFullyOccludedEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)fullyOccludedEdgeInsets;
-(void)setLabelEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)labelEdgeInsets;
-(void)updateWithTimestamp:(double)arg1 ;
-(BOOL)currentSceneRequiresMSAA;
-(BOOL)wantsTimerTick;
-(void)resetRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)layoutRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)didPresent;
-(id<MDMapControllerDelegate>)mapDelegate;
-(void)addCameraController:(id)arg1 ;
-(void)gglWillDrawWithTimestamp;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(VKWorld *)world;
-(void)animationDidResume:(id)arg1 ;
-(void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2 ;
-(void)adoptAnimation:(id)arg1 ;
-(BOOL)wantsRender;
-(void)animateWithTimestamp:(double)arg1 ;
-(void)_queueUpdateDisplayLinkStatus;
-(void)worldLayoutDidChange:(id)arg1 ;
-(void)worldDisplayDidChange:(id)arg1 ;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2 ;
-(void)removeCameraController:(id)arg1 ;
-(void)setDebugFramesPerSecond:(float)arg1 ;
-(BOOL)needsInitialization;
-(NSArray *)cameraControllers;
@end
