/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface PLImportFileManager : NSObject
+(BOOL)isImportDirectoryFolderName:(id)arg1 ;
+(BOOL)isCameraDirectoryFolderName:(id)arg1 ;
-(id)_dcimDirectory;
-(id)_DCIMFolderNameWithNumber:(int)arg1 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(int*)arg1 ;
-(id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1 ;
@end
