#import "DeviceTool.h"
#import <UIKit/UIKit.h>
#import <sys/utsname.h>

@implementation DeviceTool

+ (NSString *)deviceModel {
    struct utsname systemInfo;
    uname(&systemInfo);
    return [NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
}

+ (NSString *)systemVersion {
    return [[UIDevice currentDevice] systemVersion];
}

@end
