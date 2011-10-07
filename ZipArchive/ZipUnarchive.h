//
//  ZipUnarchive.h
//  ZipArchive
//
//  Created by Sheng Luo on 10/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZipArchive.h"

@interface ZipUnarchive : NSObject {
@private
	zipFile		_zipFile;
	unzFile		_unzFile;
	
	NSString*   _password;
	id			_delegate;
}

@property (nonatomic, retain) id delegate;

- (id)initWithContentsOfFile:(NSString *)path;
- (id)initWithContentsOfFile:(NSString *)path usingPassword:(NSString *)password;
-(BOOL) UnzipFileTo:(NSString*) path overWrite:(BOOL) overwrite;

@end
