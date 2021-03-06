//
//  LZWeekChooseView.h
//  MoblieCQUPT_iOS
//
//  Created by 李展 on 2017/8/21.
//  Copyright © 2017年 Orange-W. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LZWeekChooseViewDelegate <NSObject>

@required

- (void)eventWhenScrollSubViewWithIndex:(NSInteger)index;

@end

@interface LZWeekChooseView : UIView

@property (weak,nonatomic) id<LZWeekChooseViewDelegate> eventDelegate;

- (instancetype)initWithFrame:(CGRect)frame andControllers:(NSArray <UIViewController *> *)controllers;

@end
