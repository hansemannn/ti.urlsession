/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-Present by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import "TiModule.h"
#import "ComAppceleratorUrlSessionSessionConfigurationProxy.h"

@interface ComAppceleratorUrlSessionSessionProxy : TiProxy {
@private
    ComAppceleratorUrlSessionSessionConfigurationProxy *sessionConfiguration;
    NSURLSession* session;
}

- (NSURLSession*)session;
- (id)_initWithPageContext:(id<TiEvaluator>)context andArguments:(NSDictionary*)args;

@end