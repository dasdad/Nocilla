#import <Foundation/Foundation.h>

@class LSStubResponse;
@class LSStubResponseDSL;

@protocol LSHTTPBody;

typedef LSStubResponseDSL *(^ResponseWithBodyMethod)(id<LSHTTPBody>);
typedef LSStubResponseDSL *(^ResponseWithBodyFileMethod)(NSString *);
typedef LSStubResponseDSL *(^ResponseWithHeaderMethod)(NSString *, NSString *);
typedef LSStubResponseDSL *(^ResponseWithHeadersMethod)(NSDictionary *);

@interface LSStubResponseDSL : NSObject
- (id)initWithResponse:(LSStubResponse *)response;
- (ResponseWithBodyFileMethod)withBodyFile;

@property (nonatomic, strong, readonly) ResponseWithHeaderMethod withHeader;
@property (nonatomic, strong, readonly) ResponseWithHeadersMethod withHeaders;
@property (nonatomic, strong, readonly) ResponseWithBodyMethod withBody;

@end
