//
//  GPXConst.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#include <Foundation/Foundation.h>
#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

extern NSString *const kGPXInvalidGPXFormatNotification;
extern NSString *const kGPXDescriptionKey;
