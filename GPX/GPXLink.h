//
//  GPXLink.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"


/** A link to an external resource (Web page, digital photo, video clip, etc) with additional information.
 */
@interface GPXLink : GPXElement


/// ---------------------------------
/// @name Accessing Properties
/// ---------------------------------

/** Text of hyperlink. */
@property (strong, nonatomic) NSString * _Nullable text;

/** Mime type of content (image/jpeg) */
@property (strong, nonatomic) NSString * _Nullable mimetype;

/** URL of hyperlink. */
@property (strong, nonatomic) NSString * _Nonnull href;


/// ---------------------------------
/// @name Create Link
/// ---------------------------------

/** Creates and returns a new link element.
 @param href URL of hyperlink
 @return A newly created link element.
 */
+ (GPXLink * _Nonnull)linkWithHref:(NSString *_Nonnull)href;

@end
