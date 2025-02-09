#import "SentryUIViewControllerSwizzling.h"

NS_ASSUME_NONNULL_BEGIN

#if SENTRY_HAS_UIKIT

@interface
SentryUIViewControllerSwizzling (Test)

- (BOOL)shouldSwizzleViewController:(Class)class;

- (void)swizzleViewControllerSubClass:(Class)class;

- (void)swizzleRootViewControllerFromSceneDelegateNotification:(NSNotification *)notification;

- (void)swizzleRootViewControllerAndDescendant:(UIViewController *)rootViewController;

- (BOOL)swizzleRootViewControllerFromUIApplication:(id<SentryUIApplication>)app;
@end

#endif

NS_ASSUME_NONNULL_END
