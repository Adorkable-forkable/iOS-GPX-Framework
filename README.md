[![Version](http://cocoapod-badges.herokuapp.com/v/iOS-GPX-Framework/badge.png)](http://cocoadocs.org/docsets/iOS-KML-Framework)
[![Platform](http://cocoapod-badges.herokuapp.com/p/iOS-GPX-Framework/badge.png)](http://cocoadocs.org/docsets/iOS-KML-Framework)
 
[![License](http://img.shields.io/:license-mit-blue.svg)](http://opensource.org/licenses/mit-license.php)
[![Build](https://travis-ci.org/Pierre-Loup/iOS-GPX-Framework.svg)](https://travis-ci.org/Pierre-Loup/iOS-GPX-Framework)

[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

iOS GPX Framework
============================

This is a iOS framework for parsing/generating GPX files.
This Framework parses the GPX from a URL or Strings and create Objective-C Instances of GPX structure. 


Installation
---------------------------------

iOS-GPX-Framework is available through [CocoaPods](http://cocoapods.org), to install
it simply add the following line to your `Podfile`:

```ruby
platform :ios, '6.0'
pod 'iOS-GPX-Framework', "~> 0.0"
```

Source files of the podified version are available at [github.com/Pierre-Loup/iOS-GPX-Framework](https://github.com/Pierre-Loup/iOS-GPX-Framework).

It is also available through [Carthage](https://github.com/Carthage/Carthage), to install it simply add the following line to your `Cartfile`:

```bash
github "adorkable-forkable/iOS-GPX-Framework" "master"
```

Source files of the Dynamic Framework and Carthage version are available at [github.com/adorkable-forkable/iOS-GPX-Framework](https://github.com/adorkable-forkable/iOS-GPX-Framework).
 
Usage
---------------------------------

```objc
//Import the umbrella header

#import "GPX.h"


//To parsing the GPX file, simply call the parse method :

GPXRoot *root = [GPXParser parseGPXWithString:gpx];


//You can generate the GPX :

GPXRoot *root = [GPXRoot rootWithCreator:@"Sample Application"];
    
GPXWaypoint *waypoint = [root newWaypointWithLatitude:35.658609f longitude:139.745447f];
waypoint.name = @"Tokyo Tower";
waypoint.comment = @"The old TV tower in Tokyo.";
    
GPXTrack *track = [root newTrack];
track.name = @"My New Track";
    
[track newTrackpointWithLatitude:35.658609f longitude:139.745447f];
[track newTrackpointWithLatitude:35.758609f longitude:139.745447f];
[track newTrackpointWithLatitude:35.828609f longitude:139.745447f];
```

# Usage with Swift
 
In order to use this library please use the dynamic framework target, either through [Carthage](https://github.com/Carthage/Carthage) or by pulling the repo, adding the project file to your project file/workspace, and adding the `GPX` dynamic framework target as a dependancy.
 
 
## Requirements

- iOS 6.0 or later

## Author

Watanabe Toshinori, t@flcl.jp

Cocoapod version created by [@Pierre-Loup](https://github.com/Pierre-Loup/)

Carthage version updated by [@yoiang](https://github.com/yoiang/)

## License

iOS-GPX-Framework is available under the MIT license. See the LICENSE file for more info.

It uses [TBXML](http://tbxml.co.uk/TBXML/TBXML_Free.html) Copyright (c) 2009 Tom Bradley
