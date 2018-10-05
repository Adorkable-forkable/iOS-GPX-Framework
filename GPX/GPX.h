//
//  GPX.h
//  GPX
//
//  Created by Ian Grossberg on 9/27/18.
//

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

//! Project version number for GPX.
FOUNDATION_EXPORT double GPXVersionNumber;

//! Project version string for GPX.
FOUNDATION_EXPORT const unsigned char GPXVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GPX/PublicHeader.h>


#import "GPXRoot.h"

#import "GPXAuthor.h"
#import "GPXBounds.h"
#import "GPXConst.h"
#import "GPXEmail.h"
#import "GPXLink.h"
#import "GPXMetadata.h"
#import "GPXPerson.h"
#import "GPXPoint.h"
#import "GPXPointSegment.h"
#import "GPXRoute.h"
#import "GPXRoutePoint.h"
#import "GPXTrack.h"
#import "GPXTrackPoint.h"
#import "GPXTrackSegment.h"
#import "GPXWaypoint.h"

#import "GPXExtensions.h"

//#import "GPXElementSubclass.h"

#import "GPXParser.h"
