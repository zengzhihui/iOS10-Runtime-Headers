/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSDictionary, NSNumber, NSURL;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSURL * URL;
@property(readonly) BOOL isBinary;
@property(copy) NSString * fileName;
@property(copy) NSString * fileFormat;
@property(copy) NSURL * localURL;
@property(copy) NSNumber * fileSize;
@property(copy) NSDictionary * XProperties;

+ (id)relations;

- (void)setIsBinary:(BOOL)arg1;
- (void)setXProperties:(id)arg1;
- (id)XProperties;
- (void)setFileSize:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFileName:(id)arg1;
- (BOOL)isBinary;
- (id)fileFormat;
- (int)entityType;
- (id)localURL;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileSize;
- (id)URL;
- (id)UUID;
- (void)setURL:(id)arg1;
- (id)fileName;

@end