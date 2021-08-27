
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 27 Aug 2021 14:03:11 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack100000000,
ColorBlack50666666,
ColorBlack20Cccccc,
ColorBrand100Ff3d54,
ColorWhite100Ffffff,
EffectDepth1Color,
EffectDepth2Color
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
