//
//  DeviceTool.h
//  GCSH
//
//  Created by Miedy on 2023/4/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
#define kLocationSuccess @"kLocationSuccess"
@interface DeviceTool : NSObject
+ (NSMutableDictionary *)getAllData;
+ (NSMutableArray *)getContactBookData;

+ (CGFloat)getStatusBarHight;
+ (NSArray *)getAddressBookInfo;
+ (NSNumber *)getDeviceType;
+ (NSString *)getDeviceType2;
+ (NSString *)getApplicationVersion;
+ (NSString *)getUUID;
#define  KEY_USERNAME_PASSWORD @"com.lr.true.usernamepassword"
+ (NSString *)getIDFA;
+ (NSString *)getIDFV;
+ (NSString *)getDeviceTypeFormatted;
+ (NSString *)getSystemVersion;
+ (NSString *)getSystem;
+ (NSString *)getLanguage;
+ (NSString *)getTimeZone;
+ (NSNumber *)getBootTime;
+ (BOOL)isVPNOn;
+ (void)getLongitudeAndLatitude;
+ (void)goToSettingPage;
+ (long long int)getUptimeWithoutResting;
+ (long long int)getUptimeWithResting;
+ (float)getScreenBrightness;
+ (NSNumber *)cpuCount;
+ (NSNumber *)ramAvailableSize;
+ (NSNumber *)ramTotalMemory;
+ (NSNumber *)cashAvailableSize;
+ (NSNumber *)cashTotalSize;
+ (NSNumber *)batteryLevel;
+ (BOOL)charging;
+ (NSString *)getScreenResolution;
+ (NSString *)getNetworkType;
+ (NSDictionary *)SIMInfo;
+ (NSDictionary *)WifiInfo;
+ (BOOL)debuggerAttached;
+ (BOOL)Jailbroken;
+ (BOOL)simulator;
+ (BOOL)getProxyStatus;
+ (NSString *)getDeviceName;
+ (NSString *)MD5ForUpper32Bate:(NSString *)str;
+ (NSString *)changeInduValue:(NSString *)getNumber;
+ (NSString *)getClientTime;
+ (NSString *)get16NumberNonce;
+ (NSInteger)compareVersion:(NSString *)v1 greaterThan:(NSString *)v2;
+ (NSData *)reSizeImageData:(UIImage *)sourceImage maxSizeWithKB:(CGFloat)maxSize;
+ (BOOL)isAllNum:(NSString *)string;
+ (NSComparisonResult)compareVersion:(NSString *)version1 withVersion:(NSString *)version2;
@end
NS_ASSUME_NONNULL_END
