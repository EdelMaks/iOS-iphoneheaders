/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBProcessDelegate;
@class NSObject, FBProcessState, NSString, FBWorkspace, NSHashTable, BSProcessDeathWatcher;

@interface FBProcess : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	FBProcessState* _state;
	NSString* _name;
	NSString* _jobLabel;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBWorkspace* _workspace;
	NSHashTable* _observers;
	id<FBProcessDelegate> _delegate;
	int _unsafe_pid;
	BSProcessDeathWatcher* _processDeathObserver;

}

@property (nonatomic,copy,readonly) FBProcessState * state; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,retain,readonly) FBWorkspace * workspace;                                                        //@synthesize workspace=_workspace - In the implementation block
@property (assign,getter=_queue_delegate,nonatomic) id<FBProcessDelegate> delegate; 
@property (assign,setter=_queue_setPid:,getter=_queue_pid,nonatomic) int queue_pid; 
@property (setter=_queue_setName:,getter=_queue_name,nonatomic,copy) NSString * queue_name; 
@property (setter=_queue_setJobLabel:,getter=_queue_jobLabel,nonatomic,copy) NSString * queue_jobLabel; 
@property (assign,setter=_queue_setRunning:,getter=_queue_isRunning,nonatomic) BOOL queue_running; 
@property (assign,setter=_queue_setTaskState:,getter=_queue_taskState,nonatomic) int queue_taskState; 
@property (assign,setter=_queue_setVisibility:,getter=_queue_visibility,nonatomic) int queue_visibility; 
-(BOOL)isSystemApplicationProcess;
-(BOOL)isApplicationProcess;
-(BOOL)isExtensionProcess;
-(void)dealloc;
-(void)setDelegate:(id<FBProcessDelegate>)arg1 ;
-(id)description;
-(FBProcessState *)state;
-(NSString *)bundleIdentifier;
-(id)_workspace;
-(NSString *)name;
-(void)removeObserver:(id)arg1 ;
-(id)_queue;
-(void)addObserver:(id)arg1 ;
-(FBWorkspace *)workspace;
-(int)_queue_pid;
-(void)_queue_setPid:(int)arg1 ;
-(id)_createWorkspace;
-(void)_queue_setName:(id)arg1 ;
-(id)_queue_name;
-(id)_queue_jobLabel;
-(void)_queue_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_updateStateWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_toggleProcessDeathObserver:(BOOL)arg1 ;
-(void)_queue_setTaskState:(int)arg1 ;
-(void)_queue_setVisibility:(int)arg1 ;
-(int)_queue_effectiveVisibilityForVisibility:(int)arg1 ;
-(void)_queue_callExitObservers;
-(void)_queue_processDidExit;
-(id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(NSString *)jobLabel;
-(id)_queue_delegate;
-(BOOL)_queue_isRunning;
-(void)_queue_setRunning:(BOOL)arg1 ;
-(void)_queue_setJobLabel:(id)arg1 ;
-(BOOL)_queue_isForeground;
-(int)_queue_taskState;
-(int)_queue_visibility;
@end
