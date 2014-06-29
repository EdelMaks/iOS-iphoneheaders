/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
@interface FaceWrapper : NSObject {

	bool imageMirrored;
	int x;
	int y;
	int size;
	int imageWidth;
	int imageHeight;
	long long screenOrientation;

}

@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) int imageHeight; 
@property (assign,nonatomic) int x; 
@property (assign,nonatomic) int y; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) long long screenOrientation; 
@property (assign,nonatomic) bool imageMirrored; 
-(void)setImageMirrored:(bool)arg1 ;
-(CGRect)getFaceCoordsInImage;
-(int)getFaceTopBottomLocationInImage;
-(int)getFaceLeftRightLocationInImage;
-(CGRect)getFaceCoordsOnScreen:(CGRect)arg1 ;
-(void)swap:(int*)arg1 with:(int*)arg2 ;
-(int)getFaceLocationOnScreen;
-(bool)isLargeFace;
-(int)computeFaceLocationUsingLeftRightLoc:(int)arg1 andTopBottomLoc:(int)arg2 ;
-(void)setScreenOrientation:(long long)arg1 ;
-(long long)screenOrientation;
-(bool)imageMirrored;
-(int)getFaceLocationInImage;
-(int)size;
-(void)setSize:(int)arg1 ;
-(int)x;
-(void)setX:(int)arg1 ;
-(int)y;
-(void)setY:(int)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(int)imageWidth;
-(int)imageHeight;
@end
