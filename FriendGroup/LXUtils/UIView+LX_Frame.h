//
//  UIView+LX_Frame.h
//  AliPayHome
//
//  Created by chenergou on 2017/10/31.
//  Copyright © 2017年 漫漫. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LX_Frame)
@property (assign, nonatomic) CGFloat lx_x;
@property (assign, nonatomic) CGFloat lx_y;
@property (assign, nonatomic) CGFloat lx_width;
@property (assign, nonatomic) CGFloat lx_height;

@property (assign, nonatomic) CGFloat lx_left;
@property (assign, nonatomic) CGFloat lx_top;
@property (assign, nonatomic) CGFloat lx_right;
@property (assign, nonatomic) CGFloat lx_bottom;

@property (assign, nonatomic) CGSize lx_size;
@property (assign, nonatomic) CGFloat lx_centerX;
@property (assign, nonatomic) CGFloat lx_centerY;


/**
 * Removes all subviews.
 */
- (void)lx_removeAllSubviews;

/**
 * The view controller whose view contains this view.
 */
- (UIViewController*)lx_ViewController;
@end
