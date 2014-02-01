//
//  ModelController.h
//  TEST
//
//  Created by Francesc Basullas on 01/02/14.
//  Copyright (c) 2014 Francesc Basullas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
