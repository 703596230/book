//
//  AppDelegate.h
//  book
//
//  Created by 赵玄飞 on 2018/3/23.
//  Copyright © 2018年 赵玄飞. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

