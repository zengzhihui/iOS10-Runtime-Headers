/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface UIPeripheralHostState : NSObject  {
    struct UIPeripheralAnimationGeometry { 
        struct CGPoint { 
            float x; 
            float y; 
        } outPosition; 
        struct CGPoint { 
            float x; 
            float y; 
        } inPosition; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
        struct CGAffineTransform { 
            float a; 
            float b; 
            float c; 
            float d; 
            float tx; 
            float ty; 
        } transform; 
        float targetFrameHeightDelta; 
    } _geometry;
    NSDictionary *_screenGeometry;
    BOOL _inPositionIsDestination;
}

@property struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; } geometry;
@property(retain) NSDictionary * screenGeometry;
@property BOOL inPositionIsDestination;

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1 inPositionIsDestination:(BOOL)arg2;

- (void)dealloc;
- (BOOL)inPositionIsDestination;
- (id)screenGeometry;
- (void)setScreenGeometry:(id)arg1;
- (void)setInPositionIsDestination:(BOOL)arg1;
- (void)setGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometry;

@end