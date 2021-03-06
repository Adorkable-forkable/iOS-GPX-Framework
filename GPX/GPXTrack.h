//
//  GPXTrack.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"

@class GPXExtensions;
@class GPXLink;
@class GPXTrackSegment;
@class GPXTrackPoint;


/** trk represents a track - an ordered list of points describing a path.
 */
@interface GPXTrack : GPXElement


/// ---------------------------------
/// @name Accessing Properties
/// ---------------------------------

/** GPS name of track. */
@property (strong, nonatomic) NSString * _Nullable name;

/** GPS comment for track. */
@property (strong, nonatomic) NSString * _Nullable comment;

/** User description of track. */
@property (strong, nonatomic) NSString * _Nullable desc;

/** Source of data. Included to give user some idea of reliability and accuracy of data. */
@property (strong, nonatomic) NSString * _Nullable source;

/** Links to external information about track. */
@property (strong, nonatomic, readonly) NSArray * _Nonnull links;

/** GPS track number. */
@property (nonatomic, assign) NSInteger number;

/** Type (classification) of track. */
@property (strong, nonatomic) NSString * _Nullable type;

/** You can add extend GPX by adding your own elements from another schema here. */
@property (strong, nonatomic) GPXExtensions * _Nullable extensions;

/** A Track Segment holds a list of Track Points which are logically connected in order.
    To represent a single GPS track where GPS reception was lost, or the GPS receiver was turned off, 
    start a new Track Segment for each continuous span of track data. */
@property (strong, nonatomic, readonly) NSArray<GPXTrackSegment*> * _Nonnull tracksegments;


/// ---------------------------------
/// @name Creating Link
/// ---------------------------------

/** Creates and returns a new link element.
 @param href URL of hyperlink
 @return A newly created link element.
 */
- (GPXLink * _Nonnull)newLinkWithHref:(NSString * _Nonnull)href;


/// ---------------------------------
/// @name Adding Link
/// ---------------------------------

/** Inserts a given GPXLink object at the end of the link array.
 @param link The GPXLink to add to the end of the link array.
 */
- (void)addLink:(GPXLink * _Nonnull)link;

/** Adds the GPXLink objects contained in another given array to the end of the link array.
 @param array An array of GPXLink objects to add to the end of the link array.
 */
- (void)addLinks:(NSArray<GPXLink*> * _Nonnull)array;


/// ---------------------------------
/// @name Adding Link
/// ---------------------------------

/** Removes all occurrences in the link array of a given GPXLink object.
 @param link The GPXLink object to remove from the link array.
 */
- (void)removeLink:(GPXLink * _Nonnull)link;


/// ---------------------------------
/// @name Creating Tracksegment
/// ---------------------------------

/** Creates and returns a new tracksegment element.
 @return A newly created tracksegment element.
 */
- (GPXTrackSegment * _Nonnull)newTrackSegment;


/// ---------------------------------
/// @name Adding Tracksegment
/// ---------------------------------

/** Inserts a given GPXTrackSegment object at the end of the tracksegment array.
 @param tracksegment The GPXTrackSegment to add to the end of the tracksegment array.
 */
- (void)addTracksegment:(GPXTrackSegment * _Nonnull)tracksegment;

/** Adds the GPXTrackSegment objects contained in another given array to the end of the tracksegment array.
 @param array An array of GPXTrackSegment objects to add to the end of the tracksegment array.
 */
- (void)addTracksegments:(NSArray<GPXTrackSegment*> * _Nonnull)array;


/// ---------------------------------
/// @name Adding Tracksegment
/// ---------------------------------

/** Removes all occurrences in the tracksegment array of a given GPXTrackSegment object.
 @param tracksegment The GPXTrackSegment object to remove from the tracksegment array.
 */
- (void)removeTracksegment:(GPXTrackSegment * _Nonnull)tracksegment;


/// ---------------------------------
/// @name Creating Trackpoint
/// ---------------------------------

/** Creates and returns a new trackpoint element.
 @param latitude The latitude of the point.
 @param longitude The longitude of the point.
 @return A newly created trackpoint element.
 */
- (GPXTrackPoint * _Nonnull)newTrackpointWithLatitude:(CGFloat)latitude longitude:(CGFloat)longitude;

@end
