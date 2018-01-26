//
//  GPXCopyright.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"


/** Information about the copyright holder and any license governing use of this file. 
    By linking to an appropriate license, you may place your data into the public domain or grant additional usage rights.
 */
@interface GPXCopyright : GPXElement


/// ---------------------------------
/// @name Accessing Properties
/// ---------------------------------

/** Year of copyright. */
@property (strong, nonatomic) NSDate * _Nullable year;

/** Link to external file containing license text. */
@property (strong, nonatomic) NSString * _Nullable license;

/** Copyright holder (TopoSoft, Inc.) */
@property (strong, nonatomic) NSString * _Nullable author;


/// ---------------------------------
/// @name Create Copyright
/// ---------------------------------

/** Creates and returns a new copyright element.
 @param author Copyright holder (TopoSoft, Inc.)
 @return A newly created copyright element.
 */
+ (GPXCopyright * _Nonnull)copyroghtWithAuthor:(NSString * _Nonnull)author;

@end
