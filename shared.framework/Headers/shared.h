#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedBoundingBox, SharedFrame, SharedUrlBarsEvaluatorResult, SharedStringTransformations, SharedStringTransformation, SharedStringTransformationDelete, SharedStringTransformationInsert, SharedStringTransformationKeep, SharedStringTransformationReplace, SharedFrameOcrResultDetection, SharedFrameOcrResult, SharedFrameOcrResultSuccess, SharedPhishingDetectorResult, SharedExecutor<T>, SharedPhishingDetectorResultAuthentic, SharedPhishingDetectorResultPhishing, SharedPhishingDetectorResultUnknown, NSObject, UIImage, SharedKotlinThrowable, SharedKotlinArray<T>;

@protocol SharedUrlParser, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoundingBox")))
@interface SharedBoundingBox : SharedBase
- (instancetype)initWithLeft:(int32_t)left top:(int32_t)top right:(int32_t)right bottom:(int32_t)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (SharedBoundingBox *)doCopyLeft:(int32_t)left top:(int32_t)top right:(int32_t)right bottom:(int32_t)bottom __attribute__((swift_name("doCopy(left:top:right:bottom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@end;

__attribute__((swift_name("UrlBarDetector")))
@protocol SharedUrlBarDetector
@required
- (BOOL)detectFrames:(NSArray<SharedFrame *> *)frames __attribute__((swift_name("detect(frames:)")));
@end;

__attribute__((swift_name("UrlBarsEvaluator")))
@protocol SharedUrlBarsEvaluator
@required
- (SharedUrlBarsEvaluatorResult *)evaluateCandidate:(NSString *)candidate domainToFrames:(NSDictionary<NSString *, NSArray<SharedFrame *> *> *)domainToFrames __attribute__((swift_name("evaluate(candidate:domainToFrames:)")));
@end;

__attribute__((swift_name("UrlBarsEvaluatorResult")))
@interface SharedUrlBarsEvaluatorResult : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlBarsEvaluatorResult.MoreThanOneUrlBar")))
@interface SharedUrlBarsEvaluatorResultMoreThanOneUrlBar : SharedUrlBarsEvaluatorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)moreThanOneUrlBar __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlBarsEvaluatorResult.NoUrlBar")))
@interface SharedUrlBarsEvaluatorResultNoUrlBar : SharedUrlBarsEvaluatorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noUrlBar __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlBarsEvaluatorResult.NotSure")))
@interface SharedUrlBarsEvaluatorResultNotSure : SharedUrlBarsEvaluatorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSure __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlBarsEvaluatorResult.OneUrlBar")))
@interface SharedUrlBarsEvaluatorResultOneUrlBar : SharedUrlBarsEvaluatorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oneUrlBar __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("UrlBarClassifier")))
@protocol SharedUrlBarClassifier
@required
- (float)processFrame:(SharedFrame *)frame __attribute__((swift_name("process(frame:)")));
@end;

__attribute__((swift_name("UrlParser")))
@protocol SharedUrlParser
@required
- (NSString * _Nullable)getHostUrl:(NSString *)url __attribute__((swift_name("getHost(url:)")));
- (NSString * _Nullable)getTopPrivateDomainUrl:(NSString *)url __attribute__((swift_name("getTopPrivateDomain(url:)")));
- (BOOL)isUrlText:(NSString *)text __attribute__((swift_name("isUrl(text:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlParserFactory")))
@interface SharedUrlParserFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlParserFactory.Companion")))
@interface SharedUrlParserFactoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedUrlParser>)get __attribute__((swift_name("get()")));
@end;

__attribute__((swift_name("StringTransformationsCalculator")))
@protocol SharedStringTransformationsCalculator
@required
- (SharedStringTransformations *)calculateFrom:(NSString *)from to:(NSString *)to __attribute__((swift_name("calculate(from:to:)")));
@end;

__attribute__((swift_name("StringTransformation")))
@interface SharedStringTransformation : SharedBase
@property (readonly) unichar c __attribute__((swift_name("c")));
@property (readonly) BOOL isModification __attribute__((swift_name("isModification")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTransformation.Delete")))
@interface SharedStringTransformationDelete : SharedStringTransformation
- (instancetype)initWithC:(unichar)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (unichar)component1 __attribute__((swift_name("component1()")));
- (SharedStringTransformationDelete *)doCopyC:(unichar)c __attribute__((swift_name("doCopy(c:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) unichar c __attribute__((swift_name("c")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTransformation.Insert")))
@interface SharedStringTransformationInsert : SharedStringTransformation
- (instancetype)initWithC:(unichar)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (unichar)component1 __attribute__((swift_name("component1()")));
- (SharedStringTransformationInsert *)doCopyC:(unichar)c __attribute__((swift_name("doCopy(c:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) unichar c __attribute__((swift_name("c")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTransformation.Keep")))
@interface SharedStringTransformationKeep : SharedStringTransformation
- (instancetype)initWithC:(unichar)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (unichar)component1 __attribute__((swift_name("component1()")));
- (SharedStringTransformationKeep *)doCopyC:(unichar)c __attribute__((swift_name("doCopy(c:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) unichar c __attribute__((swift_name("c")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTransformation.Replace")))
@interface SharedStringTransformationReplace : SharedStringTransformation
- (instancetype)initWithC:(unichar)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (unichar)component1 __attribute__((swift_name("component1()")));
- (SharedStringTransformationReplace *)doCopyC:(unichar)c __attribute__((swift_name("doCopy(c:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) unichar c __attribute__((swift_name("c")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTransformations")))
@interface SharedStringTransformations : SharedBase
- (instancetype)initWithFrom:(NSString *)from to:(NSString *)to transformations:(NSArray<SharedStringTransformation *> *)transformations __attribute__((swift_name("init(from:to:transformations:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedStringTransformation *> *)component3 __attribute__((swift_name("component3()")));
- (SharedStringTransformations *)doCopyFrom:(NSString *)from to:(NSString *)to transformations:(NSArray<SharedStringTransformation *> *)transformations __attribute__((swift_name("doCopy(from:to:transformations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t distance __attribute__((swift_name("distance")));
@property (readonly) NSString *from __attribute__((swift_name("from")));
@property (readonly) NSString *to __attribute__((swift_name("to")));
@property (readonly) NSArray<SharedStringTransformation *> *transformations __attribute__((swift_name("transformations")));
@end;

__attribute__((swift_name("FrameOcrResult")))
@interface SharedFrameOcrResult : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FrameOcrResult.Detection")))
@interface SharedFrameOcrResultDetection : SharedBase
- (instancetype)initWithText:(NSString *)text confidence:(float)confidence boundingBox:(SharedBoundingBox *)boundingBox __attribute__((swift_name("init(text:confidence:boundingBox:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SharedBoundingBox *)component3 __attribute__((swift_name("component3()")));
- (SharedFrameOcrResultDetection *)doCopyText:(NSString *)text confidence:(float)confidence boundingBox:(SharedBoundingBox *)boundingBox __attribute__((swift_name("doCopy(text:confidence:boundingBox:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoundingBox *boundingBox __attribute__((swift_name("boundingBox")));
@property (readonly) float confidence __attribute__((swift_name("confidence")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FrameOcrResult.Success")))
@interface SharedFrameOcrResultSuccess : SharedFrameOcrResult
- (instancetype)initWithDetections:(NSArray<SharedFrameOcrResultDetection *> *)detections __attribute__((swift_name("init(detections:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedFrameOcrResultDetection *> *)component1 __attribute__((swift_name("component1()")));
- (SharedFrameOcrResultSuccess *)doCopyDetections:(NSArray<SharedFrameOcrResultDetection *> *)detections __attribute__((swift_name("doCopy(detections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedFrameOcrResultDetection *> *detections __attribute__((swift_name("detections")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FrameOcrResult.Unavailable")))
@interface SharedFrameOcrResultUnavailable : SharedFrameOcrResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unavailable __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("OcrEngine")))
@protocol SharedOcrEngine
@required
- (void)analyzeFrame:(SharedFrame *)frame callback:(void (^)(SharedFrameOcrResult *))callback __attribute__((swift_name("analyze(frame:callback:)")));
@end;

__attribute__((swift_name("PhishingDetector")))
@protocol SharedPhishingDetector
@required
- (void)analyzeFrame:(SharedFrame *)frame __attribute__((swift_name("analyze(frame:)")));
- (void)deregisterCallback __attribute__((swift_name("deregisterCallback()")));
- (void)registerCallbackExecutor:(SharedExecutor<SharedPhishingDetectorResult *> *)executor consumer:(void (^)(SharedPhishingDetectorResult *))consumer __attribute__((swift_name("registerCallback(executor:consumer:)")));
@end;

__attribute__((swift_name("PhishingDetectorResult")))
@interface SharedPhishingDetectorResult : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhishingDetectorResult.Authentic")))
@interface SharedPhishingDetectorResultAuthentic : SharedPhishingDetectorResult
- (instancetype)initWithDomain:(NSString *)domain __attribute__((swift_name("init(domain:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedPhishingDetectorResultAuthentic *)doCopyDomain:(NSString *)domain __attribute__((swift_name("doCopy(domain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhishingDetectorResult.NoURLBar")))
@interface SharedPhishingDetectorResultNoURLBar : SharedPhishingDetectorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noURLBar __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhishingDetectorResult.Phishing")))
@interface SharedPhishingDetectorResultPhishing : SharedPhishingDetectorResult
- (instancetype)initWithDomain:(NSString *)domain closestAuthenticDomain:(NSString *)closestAuthenticDomain transformation:(NSArray<SharedStringTransformation *> *)transformation __attribute__((swift_name("init(domain:closestAuthenticDomain:transformation:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedStringTransformation *> *)component3 __attribute__((swift_name("component3()")));
- (SharedPhishingDetectorResultPhishing *)doCopyDomain:(NSString *)domain closestAuthenticDomain:(NSString *)closestAuthenticDomain transformation:(NSArray<SharedStringTransformation *> *)transformation __attribute__((swift_name("doCopy(domain:closestAuthenticDomain:transformation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *closestAuthenticDomain __attribute__((swift_name("closestAuthenticDomain")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@property (readonly) NSArray<SharedStringTransformation *> *transformation __attribute__((swift_name("transformation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhishingDetectorResult.TooManyURLBars")))
@interface SharedPhishingDetectorResultTooManyURLBars : SharedPhishingDetectorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tooManyURLBars __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhishingDetectorResult.Unknown")))
@interface SharedPhishingDetectorResultUnknown : SharedPhishingDetectorResult
- (instancetype)initWithDomain:(NSString *)domain __attribute__((swift_name("init(domain:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedPhishingDetectorResultUnknown *)doCopyDomain:(NSString *)domain __attribute__((swift_name("doCopy(domain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Executor")))
@interface SharedExecutor<T> : SharedBase
- (instancetype)initWithDispatchQueue:(NSObject * _Nullable)dispatchQueue __attribute__((swift_name("init(dispatchQueue:)"))) __attribute__((objc_designated_initializer));
- (void)executeAction:(void (^)(T _Nullable))action param:(T _Nullable)param __attribute__((swift_name("execute(action:param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Frame")))
@interface SharedFrame : SharedBase
- (instancetype)initWithUiImage:(UIImage *)uiImage __attribute__((swift_name("init(uiImage:)"))) __attribute__((objc_designated_initializer));
@property (readonly) UIImage *uiImage __attribute__((swift_name("uiImage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface SharedLogger : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger.Companion")))
@interface SharedLoggerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)logDMessage:(NSString *)message __attribute__((swift_name("logD(message:)")));
- (void)logEMessage:(NSString *)message throwable:(SharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("logE(message:throwable:)")));
- (void)logIMessage:(NSString *)message __attribute__((swift_name("logI(message:)")));
- (void)logVMessage:(NSString *)message __attribute__((swift_name("logV(message:)")));
- (void)logWMessage:(NSString *)message throwable:(SharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("logW(message:throwable:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
