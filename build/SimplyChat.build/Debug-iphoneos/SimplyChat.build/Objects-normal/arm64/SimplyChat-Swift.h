// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import JSQMessagesViewController;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC10SimplyChat11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
@property (nonatomic, strong) NSURL * __nonnull applicationDocumentsDirectory;
@property (nonatomic, strong) NSManagedObjectModel * __nonnull managedObjectModel;
@property (nonatomic, strong) NSPersistentStoreCoordinator * __nonnull persistentStoreCoordinator;
@property (nonatomic, strong) NSManagedObjectContext * __nonnull managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC10SimplyChat11SCLoginPage")
@interface SCLoginPage : UIViewController
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
@property (nonatomic, strong) UIButton * __null_unspecified loginButton;
- (void)viewDidLoad;
- (void)loginButtonOnClick:(UIButton * __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;

SWIFT_CLASS("_TtC10SimplyChat9SCMessage")
@interface SCMessage : NSObject <JSQMessageData>
@property (nonatomic, copy) NSString * __null_unspecified senderId_;
@property (nonatomic, copy) NSString * __null_unspecified senderDisplayName_;
@property (nonatomic, strong) NSDate * __nonnull date_;
@property (nonatomic) BOOL isMediaMessage_;
@property (nonatomic) NSInteger hash_;
@property (nonatomic, copy) NSString * __nonnull text_;
- (nonnull instancetype)initWithSenderId:(NSString * __nonnull)senderId senderDisplayName:(NSString * __nullable)senderDisplayName isMediaMessage:(BOOL)isMediaMessage hash:(NSInteger)hash text:(NSString * __nonnull)text OBJC_DESIGNATED_INITIALIZER;
- (NSString * __null_unspecified)senderId;
- (NSString * __null_unspecified)senderDisplayName;
- (NSDate * __null_unspecified)date;
- (BOOL)isMediaMessage;
- (NSUInteger)messageHash;
- (NSString * __null_unspecified)text;
@end

@class FAuthData;
@class UIImage;
@class JSQMessagesBubbleImage;
@class Firebase;
@class UIBarButtonItem;
@class JSQMessagesCollectionView;
@class NSIndexPath;
@class UICollectionView;
@class UICollectionViewCell;
@class NSAttributedString;
@class JSQMessagesCollectionViewFlowLayout;

SWIFT_CLASS("_TtC10SimplyChat23SCMessageViewController")
@interface SCMessageViewController : JSQMessagesViewController
@property (nonatomic, strong) FAuthData * __nullable user;
@property (nonatomic, copy) NSArray<SCMessage *> * __nonnull messages;
@property (nonatomic, copy) NSDictionary<NSString *, UIImage *> * __nonnull avatars;
@property (nonatomic, strong) JSQMessagesBubbleImage * __null_unspecified outgoingBubbleImageView;
@property (nonatomic, strong) JSQMessagesBubbleImage * __null_unspecified incomingBubbleImageView;
@property (nonatomic, copy) NSString * __null_unspecified senderImageUrl;
@property (nonatomic) BOOL batchMessages;
@property (nonatomic, strong) Firebase * __null_unspecified ref;
@property (nonatomic, strong) Firebase * __null_unspecified messagesRef;
- (void)setupFirebase;
- (void)sendMessage:(NSString * __null_unspecified)text sender:(NSString * __null_unspecified)sender;
- (void)tempSendMessage:(NSString * __null_unspecified)text sender:(NSString * __null_unspecified)sender;
- (void)setupAvatarImage:(NSString * __nonnull)name imageUrl:(NSString * __nullable)imageUrl incoming:(BOOL)incoming;
- (void)setupAvatarColor:(NSString * __nonnull)name incoming:(BOOL)incoming;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)receivedMessagePressed:(UIBarButtonItem * __nonnull)sender;
- (void)didPressSendButton:(UIButton * __null_unspecified)button withMessageText:(NSString * __null_unspecified)text senderId:(NSString * __null_unspecified)senderId senderDisplayName:(NSString * __null_unspecified)senderDisplayName date:(NSDate * __null_unspecified)date;
- (void)didPressAccessoryButton:(UIButton * __null_unspecified)sender;
- (id <JSQMessageData> __null_unspecified)collectionView:(JSQMessagesCollectionView * __null_unspecified)collectionView messageDataForItemAtIndexPath:(NSIndexPath * __null_unspecified)indexPath;
- (NSInteger)collectionView:(UICollectionView * __nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * __nonnull)collectionView:(UICollectionView * __nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (NSAttributedString * __null_unspecified)collectionView:(JSQMessagesCollectionView * __null_unspecified)collectionView attributedTextForMessageBubbleTopLabelAtIndexPath:(NSIndexPath * __null_unspecified)indexPath;
- (CGFloat)collectionView:(JSQMessagesCollectionView * __null_unspecified)collectionView layout:(JSQMessagesCollectionViewFlowLayout * __null_unspecified)collectionViewLayout heightForMessageBubbleTopLabelAtIndexPath:(NSIndexPath * __null_unspecified)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10SimplyChat14ViewController")
@interface ViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
