/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIStorePageDataConsumer : SSVURLDataConsumer {

	Class _storePageClass;

}

@property (assign,nonatomic) Class storePageClass;              //@synthesize storePageClass=_storePageClass - In the implementation block
-(id)init;
-(Class)storePageClass;
-(id)_groupingPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_roomComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_multiRoomComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_chartPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_artistPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_bannerRoomComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_customPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_newPageComponentContextWithDictionary:(id)arg1 ;
-(id)_newCustomPageComponentForBlockType:(id)arg1 context:(id)arg2 ;
-(id)_newFeaturedContentComponentForKind:(int)arg1 context:(id)arg2 ;
-(void)setStorePageClass:(Class)arg1 ;
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)storePageWithDictionary:(id)arg1 ;
@end

