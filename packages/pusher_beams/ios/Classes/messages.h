// Autogenerated from Pigeon (v1.0.7), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class BeamsTokenProvider;

@interface BeamsTokenProvider : NSObject
@property(nonatomic, copy, nullable) NSString * authUrl;
@property(nonatomic, copy, nullable) NSString * sessionToken;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> * headers;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> * queryParams;
@end

/// The codec used by PusherBeamsApi.
NSObject<FlutterMessageCodec> *PusherBeamsApiGetCodec(void);

@protocol PusherBeamsApi
- (void)startWithError:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSString *)getDeviceIdWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)addDeviceInterestInterest:(NSString *)interest error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeDeviceInterestInterest:(NSString *)interest error:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSArray<NSString *> *)getDeviceInterestsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)setDeviceInterestsInterests:(NSArray<NSString *> *)interests error:(FlutterError *_Nullable *_Nonnull)error;
- (void)clearDeviceInterestsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)onInterestChangesCallbackId:(NSString *)callbackId error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setUserIdUserId:(NSString *)userId provider:(BeamsTokenProvider *)provider callbackId:(NSString *)callbackId error:(FlutterError *_Nullable *_Nonnull)error;
- (void)clearAllStateWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)stopWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void PusherBeamsApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<PusherBeamsApi> *_Nullable api);

/// The codec used by CallbackHandlerApi.
NSObject<FlutterMessageCodec> *CallbackHandlerApiGetCodec(void);

@interface CallbackHandlerApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)handleCallbackCallbackId:(NSString *)callbackId message:(NSDictionary *)message completion:(void(^)(NSError *_Nullable))completion;
@end
/// The codec used by CallbackCreatorApi.
NSObject<FlutterMessageCodec> *CallbackCreatorApiGetCodec(void);

@protocol CallbackCreatorApi
- (void)createCallbackCallbackId:(NSString *)callbackId error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void CallbackCreatorApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<CallbackCreatorApi> *_Nullable api);

NS_ASSUME_NONNULL_END