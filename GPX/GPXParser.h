//
//  GPXParser.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

@class GPXRoot;

#include <Foundation/Foundation.h>
#include <UIKit/UIKit.h>


/** Instances of this class parse GPX documents.
 */
@interface GPXParser : NSObject


/// ---------------------------------
/// @name Parsing
/// ---------------------------------

/** Parsing the GPX content referenced by the given URL.
 
 @param url An NSURL object specifying a URL. The URL must be fully qualified and refer to a scheme that is supported by the NSURL class.
 @return An initialized GPXRoot object or nil if an error occurs.
 */
+ (GPXRoot * _Nullable)parseGPXAtURL:(NSURL * _Nonnull)url;

/** Parsing the GPX content referenced by the given File path.
 
 @param path The absolute path of the file from which to read GPX data.
 @return An initialized GPXRoot object or nil if an error occurs.
 */
+ (GPXRoot * _Nullable)parseGPXAtPath:(NSString * _Nonnull)path;

/** Parsing the GPX content referenced by the given GPX string.
 
 @param string The GPX string.
 @return An initialized GPXRoot object or nil if an error occurs.
 */
+ (GPXRoot * _Nullable)parseGPXWithString:(NSString* _Nonnull)string;

/** Parsing the GPX content referenced by the given data.
 
 @param data The data from which to read GPX data.
 @return An initialized GPXROot object or nil if an error occurs.
 */
+ (GPXRoot * _Nullable)parseGPXWithData:(NSData* _Nonnull)data;

@end
