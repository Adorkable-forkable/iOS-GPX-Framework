//
//  GPXPerson.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"

@class GPXEmail;
@class GPXLink;


/** A person or organization.
 */
@interface GPXPerson : GPXElement


/// ---------------------------------
/// @name Accessing Properties
/// ---------------------------------

/** Name of person or organization. */
@property (strong, nonatomic) NSString * _Nullable name;

/** Email address. */
@property (strong, nonatomic) GPXEmail * _Nullable email;

/** Link to Web site or other external information about person. */
@property (strong, nonatomic) GPXLink * _Nullable link;

@end
