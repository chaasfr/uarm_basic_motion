#include <robotarm.h>



//L motor amplitude: 25-90
//R motor amplitude: 0 - 98
//Rot motor amplitude: 0 - 165
robotarm rarm;           
int incoming;
bool first=true;
int i=1;
void setup() 
{
	Serial.begin(19200);
	Serial.println("initiating servos...");
	rarm.init();  // attach the servos
	Serial.println("initiated");
	delay(500);
	Serial.println("Ready");
}

void loop()
{
	incoming=0;
	if(first)
	{
		Serial.println("Controls:");
		Serial.println("1 - sweep left motor");
		Serial.println("2 - sweep base motor");
		Serial.println("3 - sweep risght motor");
		Serial.println("4 - test function");
		Serial.println("5 - go back to initial pos");
		Serial.println("6 - read current angles");
		Serial.println("7 - increase left motor angle by 1°");
		Serial.println("8 - increase rotation motor angle by 1°");
		Serial.println("9 - increase right motor angle by 1°");
		Serial.println("0 - change orientation clockwise / counterclockwise");
		first=false;
	}
	if (Serial.available())
	{
		rarm.stabilize();
		incoming = Serial.read();
		handleInput(incoming);
	}
}

void handleInput(int incoming)
{
	switch(incoming)
	{
		case '1':
			Serial.println("		sweepL");
			sweepL();
			first=true;
			break;

		case '2':
			Serial.println("		sweepRot");
			sweepRot();
			first=true;
			break;
		case '3':
			Serial.println("		sweepR");
			sweepR();
			first=true;
			break;
		case '4':
			Serial.println("		test");
			test();
			first=true;
			break;
		case '5':
			Serial.println("		resetPos");
			resetPos();
			break;
		case '6':
			Serial.println("		read");
			read();
			if (i==1) Serial.println("going clockwise");
			if(i==-1) Serial.println("going counterclockwise");
			rarm.getPosition();
			break;
		case '7':
			rarm.setAngle(SERVO_L,rarm.readAngle(SERVO_L)+i);
			Serial.print("new SERVO_L angle = ");
			Serial.println(rarm.readAngle(SERVO_L));
			break;
		case '8':
			rarm.setAngle(SERVO_ROT,rarm.readAngle(SERVO_ROT)+i);
			Serial.print("new SERVO_ROT angle = ");
			Serial.println(rarm.readAngle(SERVO_ROT));
			break;
		case '9':
			rarm.setAngle(SERVO_R,rarm.readAngle(SERVO_R)+i);
			Serial.print("new SERVO_R angle = ");
			Serial.println(rarm.readAngle(SERVO_R));
			break;
		case '0':
			if(i==1)
			{
				i=-1;
				Serial.println("changed to counterclockwise");
				break;
			}
			if(i==-1)
			{
				i=1;
				Serial.println("changed to clockwise");
				break;
			}
		default:
			Serial.println("me so sorry, I don't understand this command !");
			break;
	}	
}

void read()
{
	Serial.print("ServoL= ");
	Serial.println(rarm.readAngle(SERVO_L));
	Serial.print("ServoR= ");
	Serial.println(rarm.readAngle(SERVO_R));
	Serial.print("ServoRot= ");
	Serial.println(rarm.readAngle(SERVO_ROT));
}

void resetPos()
{
//	rarm.setAngle(SERVO_L,0);
//	delay(15);
//	rarm.setAngle(SERVO_R,0);
//	delay(15);
//	rarm.setAngle(SERVO_ROT,90);
	rarm.setPosition(0,0,0);
}

void test()
{
	Serial.println("stretch 10cm");
	delay(3000);
	rarm.setPosition(100,0,0);
	rarm.getPosition();
	Serial.println("up 5cm");
	delay(3000);          // Wait 1 second

	rarm.setPosition(100,50,0);
	rarm.getPosition();
	Serial.println("back to origin");
	delay(3000);          // Wait 1 second

	rarm.setPosition(0,0,0);
	rarm.getPosition();
	delay(1000);          // Wait 1 second
}

void sweepL()
{
	delay(500);
	for(int pos = 92; pos>=1; pos-=1)   
	{           
		Serial.println(pos);                     
		rarm.setAngle(SERVO_L, pos);              // tell servo to go to position in variable 'pos' 	
		delay(15);                       // waits 15ms for the servo to reach the position 
	}
	delay(1000);
	for(int pos =1 ; pos < 100; pos += 1) 
	{                                  // in steps of 1 degree 
		Serial.println(pos);
		rarm.setAngle(SERVO_L, pos);              // tell servo to go to position in variable 'pos' 
		delay(15);                       // waits 15ms for the servo to reach the position 
	}
}

void sweepR()
{
	int angleR;
	delay(500);
	for(int pos = 120; pos>=1; pos-=1)      
	{
		angleR = constrain(pos, 25, 120);
		angleR = constrain(angleR, rarm.readAngle(SERVO_L) - 90, angleR);	// behind  -120+30 = -90           
		Serial.println(angleR);                     
		rarm.setAngle(SERVO_R, pos);              // tell servo to go to position in variable 'pos' 	
		delay(15);                       // waits 15ms for the servo to reach the position 
	}
	delay(1000);
	for(int pos = 0; pos < 120; pos += 1) 
	{                                  // in steps of 1 degree 
		Serial.println(pos);
		rarm.setAngle(SERVO_R, pos);              // tell servo to go to position in variable 'pos' 
		delay(15);                       // waits 15ms for the servo to reach the position 
	}
}

void sweepRot()
{
	delay(500);
	for(int pos = 90; pos < 160; pos += 1)  
	{                                  // steps of 1 degree 
		Serial.println(pos);
		rarm.setAngle(SERVO_ROT, pos);              // tell servo to go to position in variable 'pos' 
		delay(15);                       // waits 15ms for the servo to reach the position 
	} 
	Serial.println("  REVERSE  ");
	delay(1000);
	for(int pos = 160; pos>=20; pos-=1)     
	{           
		Serial.println(pos);                     
		rarm.setAngle(SERVO_ROT, pos);              // tell servo to go to position in variable 'pos' 	
		delay(15);                       // waits 15ms for the servo to reach the position 
	}
	delay(500);
	rarm.setAngle(SERVO_ROT, 90);
	delay(500);
}
