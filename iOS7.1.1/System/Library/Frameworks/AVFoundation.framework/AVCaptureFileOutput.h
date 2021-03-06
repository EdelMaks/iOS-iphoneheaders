/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;

}

@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) bool recording; 
@property (nonatomic,readonly) SCD_Struct_CM4 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_CM4 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(id)outputFileURL;
-(SCD_Struct_CM4)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(bool)pausesRecordingOnInterruption;
-(bool)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(bool)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(bool)arg1 ;
-(SCD_Struct_CM4)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_CM4)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopRecording;
@end

