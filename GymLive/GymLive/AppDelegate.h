//
//  AppDelegate.h
//  GymLive
//
//  Created by Olexandr Matviichuk on 10/15/17.
//  Copyright © 2017 Olexandr Matviichuk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

