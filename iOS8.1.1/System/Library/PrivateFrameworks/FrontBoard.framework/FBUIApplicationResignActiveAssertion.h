/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSDisplay;

@interface FBUIApplicationResignActiveAssertion : NSObject {

	BOOL _relinquished;
	FBSDisplay* _display;
	long long _reason;

}

@property (nonatomic,retain) FBSDisplay * display;              //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) long long reason;                  //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(FBSDisplay *)display;
-(long long)reason;
-(void)relinquish;
-(id)initWithReason:(long long)arg1 forDisplay:(id)arg2 ;
-(void)setReason:(long long)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

