//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class OWSStorage;
@class TSStorageManager;

@interface OWSFailedMessagesJob : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStorageManager:(TSStorageManager *)storageManager NS_DESIGNATED_INITIALIZER;

- (void)run;

/**
 * Database extensions required for class to work.
 */
+ (void)asyncRegisterDatabaseExtensionsWithStorageManager:(OWSStorage *)storage;

#ifdef DEBUG
/**
 * Only use the sync version for testing, generally we'll want to register extensions async
 */
- (void)blockingRegisterDatabaseExtensions;
#endif

@end

NS_ASSUME_NONNULL_END
