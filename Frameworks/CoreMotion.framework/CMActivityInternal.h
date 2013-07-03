/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityInternal : NSObject <NSCopying> {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        float tilt; 
        double timestamp; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    } fActivity;
}


- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })arg1;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end