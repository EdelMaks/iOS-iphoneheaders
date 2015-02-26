/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/NSCopying.h>
#import <BaseBoard/BSXPCCoding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableSettings, NSHashTable, NSString;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	BSMutableSettings* _changes;
	NSHashTable* _flagRemovals;
	NSHashTable* _objectRemovals;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newHashTableWithInitialCapacity:(unsigned long long)arg1 ;
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3 ;
-(void)_enumerateSettingsInTable:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)allSettings;
-(unsigned long long)_diffTypesForSetting:(unsigned long long)arg1 ;
-(id)descriptionOfSettingsWithMultilinePrefix:(id)arg1 providerBlock:(/*^block*/id)arg2 ;
-(void)applyToSettings:(id)arg1 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
@end
