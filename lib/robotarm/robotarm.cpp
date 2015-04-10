#include "robotarm.h"

robotarm::robotarm()
{
	heightLst		= 0;
	height			= 0;
	stretch			= 0;
	rotation		= 0;
}

void robotarm::init()
{
	//define Servo pins
	servoR.attach(SERVO_R,D150A_SERVO_MIN_PUL,D150A_SERVO_MAX_PUL);
	servoL.attach(SERVO_L,D150A_SERVO_MIN_PUL,D150A_SERVO_MAX_PUL);
	servoRot.attach(SERVO_ROT,D150A_SERVO_MIN_PUL,D150A_SERVO_MAX_PUL);
}

void robotarm::setPosition(double _stretch, double _height, int _armRot)
{
	_armRot = -_armRot;
	// input limit
	_stretch = constrain(_stretch, ARM_STRETCH_MIN,   ARM_STRETCH_MAX)+55;		// +55, set zero -stretch 
	_height  = constrain(_height,  ARM_HEIGHT_MIN,    ARM_HEIGHT_MAX);
	_armRot  = constrain(_armRot,  ARM_ROTATION_MIN,  ARM_ROTATION_MAX) + 90;		// +90, change -90~90 to 0~180
	// angle calculation
	double stretch2height2 = _stretch * _stretch + _height * _height;              // 
	double angleA = (acos( (stretch2height2 - ARM_A2B2) / ARM_2AB )) * RAD_TO_DEG; // angle between the upper and the lower
	double angleB = (atan(_height/_stretch)) * RAD_TO_DEG;                         // 
	double angleC = (acos((ARM_A2 + stretch2height2 -ARM_B2)/(2 * ARM_A * sqrt(stretch2height2)))) * RAD_TO_DEG; // 
	int angleL = angleB + angleC - FIXED_OFFSET_L; 
	int angleR = angleA - angleB - angleC - FIXED_OFFSET_R;        // 
                      // 
	// angle limit
	angleL = constrain(angleL, MIN_POS_L+FIXED_OFFSET_L, MAX_POS_L+FIXED_OFFSET_L);
	angleR = constrain(angleR, MIN_POS_R+FIXED_OFFSET_R, MAX_POS_R+FIXED_OFFSET_R);
	angleR = constrain(angleR, angleL - 90, angleR);	// behind  -120+30 = -90
	if(angleL<15)	angleR = constrain(angleR, 70, angleR);			// front down
	// set servo position
	servoR.write(angleR);
	delay(angleR);
	servoL.write(angleL);
	delay(angleL);
	servoRot.write(_armRot);
	delay(_armRot);

	Serial.print("angleL= ");
	Serial.println(angleL-FIXED_OFFSET_L);
	Serial.print("angleR= ");
	Serial.println(angleR-FIXED_OFFSET_R);	
	Serial.print("angleRot= ");
	Serial.println(_armRot);	

}

void robotarm::getPosition()
{
	double angleL=(readAngle(SERVO_L))*DEG_TO_RAD;
	double angleR=(readAngle(SERVO_R))*DEG_TO_RAD;
	double angleRot=readAngle(SERVO_ROT);
	double stretch = ARM_A*cos(angleL) + ARM_B*cos(angleR);
	double height = ARM_A*sin(angleL) - ARM_B*sin(angleR);
	Serial.print("current position: (");
	Serial.print(stretch);
	Serial.print(", ");
	Serial.print(height);
	Serial.print(", ");
	Serial.print(angleRot);
	Serial.println(")");
	
}

void robotarm::setAngle(char _servo,double _angle)
{
	switch(_servo)
	{
		case SERVO_L:
			servoL.write(_angle+FIXED_OFFSET_L);
			break;
		case SERVO_R:
			servoR.write(_angle+FIXED_OFFSET_R);
			break;
		case SERVO_ROT:
			servoRot.write(_angle);
			break;
		default:
			Serial.println("no servo with this name.");
			break;
	}
}

int robotarm::readAngle(char _servo)
{
	switch(_servo)
	{
		case SERVO_L:
			return (servoL.read()-FIXED_OFFSET_L);
		case SERVO_R:
			return (servoR.read()-FIXED_OFFSET_R);
		case SERVO_ROT:
			return servoRot.read();
		default: break;
	}
}

void robotarm::detachServo(char _servo)
{
	switch(_servo)
	{
		case SERVO_L:
			servoL.detach();
			break;
		case SERVO_R:
			servoR.detach();
			break;
		case SERVO_ROT:
			servoRot.detach();
			break;
		default: break;
	}
}

void robotarm::stabilize()
{
	setAngle(SERVO_L,readAngle(SERVO_L));
	setAngle(SERVO_R,readAngle(SERVO_R));
	setAngle(SERVO_ROT,readAngle(SERVO_ROT));
}
