/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSSecureCoding.h>

@class TIDocumentState, TITextInputTraits;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

	TIDocumentState* _documentState;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,retain) TIDocumentState * documentState;                  //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(void)createDocumentStateIfNecessary;
@end

