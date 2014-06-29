/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCaptureFileOutputRecordingDelegateAVCaptureFileOutputPauseResumeDelegate;
@class NSURL, NSArray;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	<AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate>* _delegate;
	NSURL* _outputFileURL;
	bool _receivedDidStartRecording;
	bool _receivedDidStopRecording;
	int _didStopRecordingError;
	NSArray* _metadata;
	NSArray* _connections;

}

@property (readonly) NSURL * outputFileURL;                                                                                  //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSArray * metadata;                                                                                       //@synthesize metadata=_metadata - In the implementation block
@property (readonly) <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * connections;                                                                                  //@synthesize connections=_connections - In the implementation block
@property (assign) bool receivedDidStartRecording;                                                                           //@synthesize receivedDidStartRecording=_receivedDidStartRecording - In the implementation block
@property (assign) bool receivedDidStopRecording;                                                                            //@synthesize receivedDidStopRecording=_receivedDidStopRecording - In the implementation block
@property (assign) int didStopRecordingError;                                                                                //@synthesize didStopRecordingError=_didStopRecordingError - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)outputFileURL;
-(bool)receivedDidStartRecording;
-(void)setReceivedDidStartRecording:(bool)arg1 ;
-(bool)receivedDidStopRecording;
-(void)setReceivedDidStopRecording:(bool)arg1 ;
-(int)didStopRecordingError;
-(void)setDidStopRecordingError:(int)arg1 ;
-(id)connections;
-(void)dealloc;
-(id)delegate;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
@end
