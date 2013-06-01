//
//  MagicalRecord+Setup.h
//  Magical Record
//
//  Created by Saul Mora on 3/7/12.
//  Copyright (c) 2012 Magical Panda Software LLC. All rights reserved.
//

#import "MagicalRecord.h"

@interface MagicalRecord (Setup)

+ (void) setupCoreDataStack;
+ (void) setupCoreDataStackWithInMemoryStore;

+ (void) setupAutoMigratingCoreDataStack;
+ (void) setupAutoMigratingCoreDataStackWithSqliteStoreNamed:(NSString *)storeName;
+ (void) setupCoreDataStackWithAutoMigratingSqliteStoreNamed:(NSString *)storeName  __deprecated;

+ (void) setupManuallyMigratingCoreDataStack;
+ (void) setupManuallyMigratingCoreDataStackWithSqliteStoreNamed:(NSString *)storeName;

+ (void) setupCoreDataStackWithStoreAtURL:(NSURL *)url;

+ (void) setupCoreDataStackWithStoreNamed:(NSString *)storeName;

@end
