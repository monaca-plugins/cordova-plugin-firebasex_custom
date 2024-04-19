#import "AppDelegate.h"
// #import <GoogleSignIn/GoogleSignIn.h>

/*
* Modifications copyright (C) 2023 Asial Corporation.
*/

@import UserNotifications;
@import AuthenticationServices;

@interface AppDelegate (FirebasePlugin) <UIApplicationDelegate, ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>
+ (AppDelegate *_Nonnull) instance;
@property (nonatomic, strong) NSNumber * _Nonnull applicationInBackground;
@end
