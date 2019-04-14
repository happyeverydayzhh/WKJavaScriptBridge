//
//  SHRMWebViewHandleFactory.h
//  Hybrid-framework
//
//  Created by 王凯 on 2018/12/7.
//  Copyright © 2018 王凯. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SHRMWebViewEngine;
@protocol SHRMWebViewProtocol;

@interface SHRMWebViewHandleFactory : NSObject
@property (nonatomic, weak) id<SHRMWebViewProtocol> webViewBridge;
- (void)handleMsgCommand:(NSArray *)arguments;
- (instancetype)initWithWebViewEngine:(SHRMWebViewEngine *)webViewEngine;
@end

NS_ASSUME_NONNULL_END
