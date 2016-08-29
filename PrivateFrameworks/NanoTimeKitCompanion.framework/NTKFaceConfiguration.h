/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _complications;
    NSMutableDictionary * _editModeConfigurations;
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyComplicationsDescription:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2;
- (void)_enumerateComplicationsWithBlock:(id /* block */)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* block */)arg1;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (id)complicationForSlot:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setName:(id)arg1;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;

@end