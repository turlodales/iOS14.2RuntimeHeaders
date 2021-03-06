/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (bool)hasRowId;
+ (const char *)sqliteCreateTableStatement;

- (bool)currentIndexEof;
- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;

@end
