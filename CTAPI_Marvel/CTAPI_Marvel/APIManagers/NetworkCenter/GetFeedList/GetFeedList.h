//
//  GetFeedList.h
//  APIManagers
//
//  Created by casa's script.
//  Copyright © 2019年 casa. All rights reserved.
//

#import <CTNetworking/CTNetworking.h>

extern NSString * const kGetFeedListParamKey<#API param name#>;

@interface GetFeedList : CTAPIBaseManager <CTAPIManager, CTPagableAPIManager>

@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, assign, readonly) NSUInteger currentPageNumber;
@property (nonatomic, assign, readonly) BOOL isLastPage;

- (void)loadNextPage;

@end
