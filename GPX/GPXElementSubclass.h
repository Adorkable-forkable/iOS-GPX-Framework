//
//  GPXElementSubclass.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"
#import "TBXML.h"

@interface GPXElement ()

// Tag

+ (NSString * _Nullable)tagName;
+ (NSArray * _Nullable)implementClasses;


// Initializing a Element

- (id _Nonnull)initWithXMLElement:(TBXMLElement * _Nonnull)element parent:(GPXElement * _Nullable)parent;


// Parsing
- (NSString * _Nullable)valueOfAttributeNamed:(NSString * _Nonnull)name xmlElement:(TBXMLElement* _Nonnull)element;
- (NSString * _Nullable)valueOfAttributeNamed:(NSString * _Nonnull)name xmlElement:(TBXMLElement* _Nonnull)element required:(BOOL)required;
- (NSString * _Nullable)textForSingleChildElementNamed:(NSString * _Nonnull)name xmlElement:(TBXMLElement * _Nonnull)element;
- (NSString * _Nullable)textForSingleChildElementNamed:(NSString * _Nonnull)name xmlElement:(TBXMLElement * _Nonnull)element required:(BOOL)required;
- (GPXElement * _Nullable)childElementOfClass:(Class _Nonnull )class xmlElement:(TBXMLElement * _Nonnull)element;
- (GPXElement * _Nullable)childElementOfClass:(Class _Nonnull )class xmlElement:(TBXMLElement * _Nonnull)element required:(BOOL)required;
- (GPXElement * _Nullable)childElementNamed:(NSString * _Nonnull)name class:(Class _Nonnull )class xmlElement:(TBXMLElement * _Nonnull)element;
- (GPXElement * _Nonnull)childElementNamed:(NSString * _Nonnull)name class:(Class _Nonnull )class xmlElement:(TBXMLElement * _Nonnull)element required:(BOOL)required;
- (void)childElementsOfClass:(Class _Nonnull)class xmlElement:(TBXMLElement * _Nonnull)element eachBlock:(void (^_Nonnull)(GPXElement * _Nonnull element))eachBlock;


// Generating

- (void)gpx:(NSMutableString * _Nonnull)gpx indentationLevel:(NSInteger)indentationLevel;
- (void)addOpenTagToGpx:(NSMutableString * _Nonnull)gpx indentationLevel:(NSInteger)indentationLevel;
- (void)addChildTagToGpx:(NSMutableString * _Nonnull)gpx indentationLevel:(NSInteger)indentationLevel;
- (void)addCloseTagToGpx:(NSMutableString * _Nonnull)gpx indentationLevel:(NSInteger)indentationLevel;

- (void)gpx:(NSMutableString * _Nonnull)gpx addPropertyForValue:(NSString *_Nonnull)value tagName:(NSString * _Nonnull)tagName indentationLevel:(NSInteger)indentationLevel;
- (void)gpx:(NSMutableString * _Nonnull)gpx addPropertyForValue:(NSString * _Nonnull)value tagName:(NSString * _Nonnull)tagName attribute:(NSString * _Nullable)attribute indentationLevel:(NSInteger)indentationLevel;
- (void)gpx:(NSMutableString * _Nonnull)gpx addPropertyForValue:(NSString * _Nullable)value defaultValue:(NSString * _Nullable)defaultValue tagName:(NSString * _Nonnull)tagName indentationLevel:(NSInteger)indentationLevel;
- (void)gpx:(NSMutableString * _Nonnull)gpx addPropertyForValue:(NSString * _Nullable)value defaultValue:(NSString * _Nullable)defaultValue tagName:(NSString * _Nonnull)tagName attribute:(NSString * _Nullable)attribute indentationLevel:(NSInteger)indentationLevel;
- (NSString * _Nonnull)indentForIndentationLevel:(NSInteger)indentationLevel;

@end
