//
//  NSDictionary+FZParametersSign.h
//  FangZhou
//
//  Created by wtw on 16/6/12.
//  Copyright © 2016年 rocedar. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kNetWorkingRequestTypePostString;
extern NSString * const kNetWorkingRequestTypeGetString;

/**
 *  颐邦项目参数字典转换成含有签名的参数字典
 */
@interface NSDictionary (FZParametersSign)


/**
 *  颐邦项目参数添加签名
 *
 *  @param interfaceString 接口地址
 *  @param PostOrGet       是使用POST还是GET方法，方法不同，生成的签名不同
 *
 *  @return 添加加密字段后的参数字典
 */
- (NSDictionary *)parametersSignedWithInterfaceString:(NSString *)interfaceString methodType:(NSString *)PostOrGet;


/**
 *  颐邦项目参数签名字符串
 *
 *  @param interfaceString 接口地址
 *  @param PostOrGet       是使用POST还是GET方法，方法不同，生成的签名不同
 *
 *  @return 参数加密后的签名字符串
 */

- (NSString *)parametersSignedStringWithInterfaceString:(NSString *)interfaceString methodType:(NSString *)PostOrGet;

/**
 *  返回签名参数
 *
 *  @param method     请求方法 (POST, GET)
 *  @param urlString  接口地址
 *  @param signString 签名字段
 *
 *  @return 签名参数
 */
- (NSDictionary *)dictionaryWithMethod:(NSString *)method urlString:(NSString *)urlString sign:(NSString *)signString;

- (NSString *)queryString;

@end
