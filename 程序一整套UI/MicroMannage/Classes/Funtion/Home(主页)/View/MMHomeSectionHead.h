//
//  MMHomeSectionHeadView.h
//  MicroMannage
//
//  Created by 倪望龙 on 2017/3/7.
//  Copyright © 2017年 xunyijia. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^functionClick)();
@interface MMHomeSectionHead : UITableViewHeaderFooterView
@property(nonatomic,strong)NSString *title;
@property(nonatomic,strong)NSString *subTitle;
@property(nonatomic,strong)UIImage *subImage;

@property(nonatomic,copy)functionClick functionBlock;
-(void)setFunctionBlock:(functionClick)functionBlock;

-(void)setTitle:(NSString *)title SubTitle:(NSString *)subTitle SubImage:(UIImage *)subImage FunctionBlock:(functionClick)functionBlock;
@end
