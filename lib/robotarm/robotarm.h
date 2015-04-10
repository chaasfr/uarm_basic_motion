#include "VarSpeedServo.h"
#include <Arduino.h>

#ifndef robotarm_h
#define robotarm_h

/****************  Macro definitions  ****************/
#define ARM_A                   148    // upper arm
#define ARM_B                   160    // lower arm
#define ARM_2AB                 47360  // 2*A*B
#define ARM_A2                  21904  // A^2
#define ARM_B2                  25600  // B^2
#define ARM_A2B2                47504  // A^2 + B^2

#define ARM_STRETCH_MIN         0
#define ARM_STRETCH_MAX         210
#define ARM_HEIGHT_MIN          -180
#define ARM_HEIGHT_MAX          150
#define ARM_ROTATION_MIN        -90
#define ARM_ROTATION_MAX        90

#define D150A_SERVO_MIN_PUL     700
#define D150A_SERVO_MAX_PUL     2300

#define INIT_POS_L              67
#define MIN_POS_L		10
#define MAX_POS_L		90
#define FIXED_OFFSET_L          5

#define INIT_POS_R              92
#define MIN_POS_R		25
#define MAX_POS_R		150
#define FIXED_OFFSET_R          15

#define INIT_POS_ROT		90
#define MIN_POS_ROT		0
#define MAX_POS_ROT		165
#define FIXED_OFFSET_ROT	0
/*****************  Port definitions  *****************/
#define SERVO_ROT               8     //
#define SERVO_R                 13    //
#define SERVO_L                 11    //

class robotarm
{
public:
	robotarm();
	void init();    // initialize the uArm position
	void setPosition(double _stretch, double _height, int _armRot); 
	void setAngle(char _servo, double _angle);
	void stabilize();
	int readAngle(char _servo); // angle read = last value given to the servo
	void detachServo(char _servo);
	void getPosition();

private:
	/*****************  Define variables  *****************/
	int heightLst;
	int height;
	int stretch; 
	int rotation; 
	/***************  Create servo objects  ***************/
	VarSpeedServo servoR;
	VarSpeedServo servoL;
	VarSpeedServo servoRot;

};

#endif

