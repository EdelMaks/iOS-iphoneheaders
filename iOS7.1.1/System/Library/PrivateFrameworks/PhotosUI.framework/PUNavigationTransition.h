/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition {

	double _pushDuration;
	double _popDuration;
	UINavigationController* _navigationController;
	long long __operation;

}

@property (nonatomic,readonly) double pushDuration;                                             //@synthesize pushDuration=_pushDuration - In the implementation block
@property (nonatomic,readonly) double popDuration;                                              //@synthesize popDuration=_popDuration - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,setter=_setOperation:,nonatomic) long long _operation;                        //@synthesize _operation=__operation - In the implementation block
+(bool)shouldCrossFadeBottomBarsForNavigationController:(id)arg1 ;
+(id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4 ;
-(double)transitionDuration:(id)arg1 ;
-(void)completeTransition:(bool)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(id)navigationController;
-(void).cxx_destruct;
-(id)initWithPushDuration:(double)arg1 popDuration:(double)arg2 ;
-(double)pushDuration;
-(double)popDuration;
-(void)completeInteractiveOperation:(long long)arg1 finished:(bool)arg2 ;
-(long long)_operation;
-(void)_setOperation:(long long)arg1 ;
-(id)initWithDuration:(double)arg1 ;
-(void)setNavigationController:(id)arg1 ;
-(void)transitionWillAnimateOperation:(long long)arg1 interactive:(bool)arg2 ;
-(void)transitionWillStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3 ;
-(void)transitionDidStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3 ;
@end

