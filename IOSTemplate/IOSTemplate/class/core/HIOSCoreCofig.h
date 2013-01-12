//
//  HIOSCoreCofig.h
//  IOSTemplate
//
//  Created by Hament Deng on 13-1-12.
//  Copyright (c) 2013年 Hament Deng. All rights reserved.
//

#import <Foundation/Foundation.h>


/*文件路径相关*/

/*返回Mainbundle 的 UIIMage*/
#define useBundleImage(file,extention) [UIImage imageWithContentsOfFile:fileBundlePath(file,extention)]

/*获取Mainbundle 里面文件路径*/
#define fileBundlePath(file,extention) [[NSBundle mainBundle]pathForResource:file ofType:extention]

/*设置userdefaults里面某key的值 */
#define SetUserDefaultsForKey(key,value)   [[NSUserDefaults standardUserDefaults] setObject:value forKey:key];

/*获取userdefaults里面某key的值*/
#define GetUserDefaultsWithKey(key)  [[NSUserDefaults standardUserDefaults] valueForKey:key]



@interface HIOSCoreCofig : NSObject

@end
