/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABCardContentPluginManager : NSObject {

	NSString* _pluginsDirectory;

}

@property (nonatomic,readonly) NSString * pluginsDirectory;              //@synthesize pluginsDirectory=_pluginsDirectory - In the implementation block
-(id)bundleNameForLabel:(id)arg1 ;
-(Class)contentProviderForBundleName:(id)arg1 ;
-(id)pluginsDirectory;
-(Class)contentProviderClassForPerson:(void*)arg1 ;
-(void)dealloc;
@end

