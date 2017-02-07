//
//  AppDelegate.h
//  GitDemo
//
//  Created by DayHR on 2017/2/7.
//  Copyright © 2017年 haiqinghua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

