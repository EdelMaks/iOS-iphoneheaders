/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXParagraph : NSObject
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readRunsTo:(id)arg1 state:(id)arg2 ;
+(void)readRunsFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5 ;
+(void)readRFrom:(xmlNode*)arg1 to:(id)arg2 targetRun:(id)arg3 state:(id)arg4 ;
+(void)readSimpleFieldFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readHyperlinkFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readTrackingFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(void)readAnnotationFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
@end
