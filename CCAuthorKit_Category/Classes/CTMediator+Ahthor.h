//
//  CTMediator+Ahthor.h
//  CCAuthorKit_Category
//
//  Created by 陈成 on 2018/4/19.
//

#import <CTMediator/CTMediator.h>
#import <CCAPIsKit/APIRequest.h>
@interface CTMediator (Ahthor)
- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;
@end
