/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Gif.qldisplay/Gif
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSArray;

@interface QLAnimatedImage : NSObject {

	UIImage* _image;
	NSArray* _durations;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * durations;              //@synthesize durations=_durations - In the implementation block
-(id)frames;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)image;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
-(id)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(id)arg1 ;
@end

