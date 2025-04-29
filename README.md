# Binkonts

Binkonts is a lightweight and efficient Objective-C library that provides simple APIs 
to retrieve iOS device information, such as model name and system version.

## Installation

Add the following line to your Podfile:

```
pod 'Binkonts'
```

## Usage

```objc
#import <DeviceTool.h>

NSString *model = [DeviceTool deviceModel];
NSString *systemVersion = [DeviceTool systemVersion];
```

## License

Binkonts is available under the MIT license. See the LICENSE file for more info.
