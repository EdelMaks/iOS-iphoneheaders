/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebMultipleTextMatches <NSObject>
@required
-(unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5;
-(void)setMarkedTextMatchesAreHighlighted:(bool)arg1;
-(bool)markedTextMatchesAreHighlighted;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;
@end
