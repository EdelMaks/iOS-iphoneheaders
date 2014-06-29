/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property (assign) bool autofocus; 
@property (assign) bool disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (copy) NSString * type; 
@property (copy) NSString * value; 
@property (readonly) bool willValidate; 
@property (copy) NSString * accessKey; 
-(int)structuralComplexityContribution;
-(void)setType:(id)arg1 ;
-(id)type;
-(void)setValue:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(id)form;
-(bool)disabled;
-(void)setDisabled:(bool)arg1 ;
-(id)accessKey;
-(void)setAccessKey:(id)arg1 ;
-(bool)autofocus;
-(void)setAutofocus:(bool)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(bool)formNoValidate;
-(void)setFormNoValidate:(bool)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(bool)willValidate;
-(id)validity;
-(id)validationMessage;
-(id)labels;
-(bool)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)click;
@end
