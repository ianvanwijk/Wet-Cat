#include <Servo.h>

Servo servoTilt;
Servo servoPan;
int posTilt = 90;
int posPan = 90;

int pinLaser = 13;
int laserOn = LOW;

int coordinatesCalibration[4][4] = {
	{ 7, 44, 0, 0 },
	{ 63, 49, 640, 0 },
	{ 63, 77, 640, 480 },
	{ 7, 66, 0, 300 }
};

int calibrateMode = 0;
String commandString = "";

int commandPos = 0;
int totalCommand[3];

void setup() 
{ 
	servoTilt.attach(10);
	servoPan.attach(9);
	
	servoTilt.write(posTilt);
	servoPan.write(posPan);

	pinMode(pinLaser, OUTPUT);
	digitalWrite(pinLaser, laserOn);

	Serial.begin(9600);

	coordinatesCalibration[0][0] = 7;
	coordinatesCalibration[0][1] = 44;
	coordinatesCalibration[0][2] = 0;
	coordinatesCalibration[0][3] = 0;

	coordinatesCalibration[1][0] = 63;
	coordinatesCalibration[1][1] = 49;
	coordinatesCalibration[1][2] = 640;
	coordinatesCalibration[1][3] = 0;

	coordinatesCalibration[2][0] = 63;
	coordinatesCalibration[2][1] = 77;
	coordinatesCalibration[2][2] = 640;
	coordinatesCalibration[2][3] = 480;

	coordinatesCalibration[3][0] = 7;
	coordinatesCalibration[3][1] = 66;
	coordinatesCalibration[3][2] = 0;
	coordinatesCalibration[3][3] = 300;
} 

void loop() 
{
	int command;
	command = Serial.read();
	
	// Arrow Up
	if(command == 65) {
		if(posTilt > 0) {
			posTilt -= 1;
			
			servoTilt.write(posTilt);
		}
	}
	// Arrow Down
	if(command == 66) {
		if(posTilt < 180) {
			posTilt += 1;
			
			servoTilt.write(posTilt);
		}
	}
	// Arrow Right
	if(command == 68) {
		if(posPan > 0) {
			posPan -= 1;
			
			servoPan.write(posPan);
		}
	}
	// Arrow Left
	if(command == 67) {
		if(posPan < 180) {
			posPan += 1;
			
			servoPan.write(posPan);
		}
	}
	
	// q
	if(command == 'q') {
		Serial.println("Left Top:");
		printCoordinates(coordinatesCalibration[0][0], coordinatesCalibration[0][1]);
		printCoordinates(coordinatesCalibration[0][2], coordinatesCalibration[0][3]);
	}
	// w
	if(command == 'w') {
		Serial.println("Right Top:");
		printCoordinates(coordinatesCalibration[1][0], coordinatesCalibration[1][1]);
		printCoordinates(coordinatesCalibration[1][2], coordinatesCalibration[1][3]);
	}
	// e
	if(command == 'e') {
		Serial.println("Right Bottom:");
		printCoordinates(coordinatesCalibration[2][0], coordinatesCalibration[2][1]);
		printCoordinates(coordinatesCalibration[2][2], coordinatesCalibration[2][3]);
	}
	// r
	if(command == 'r') {
		Serial.println("Left Bottom:");
		printCoordinates(coordinatesCalibration[3][0], coordinatesCalibration[3][1]);
		printCoordinates(coordinatesCalibration[3][2], coordinatesCalibration[3][3]);
	}

	if(command == 'l') {
		if(laserOn == LOW) {
			laserOn = HIGH;
			digitalWrite(pinLaser, laserOn);
		}
		else {
			laserOn = LOW;
			digitalWrite(pinLaser, laserOn);
		}
	}
	
	if(isDigit(command)) {
		commandString += (char) command;
	}
	
	if(command == ';') {
//		Serial.println(";");
		
		totalCommand[commandPos] = commandString.toInt();

		commandPos = 0;

		commandString = "";
	}
	else {
		if(command == ',') {
			if(commandPos > 2) {
				Serial.println("error;");
				totalCommand[0] = 0;
			}
//			Serial.print(",");
			
			totalCommand[commandPos] = commandString.toInt();
			commandPos++;

			commandString = "";
		}
		return; 
	}
	
	// Marker 3
	if(totalCommand[0] == 51) {
		coordinatesCalibration[0][0] = posPan;
		coordinatesCalibration[0][1] = posTilt;
		
		coordinatesCalibration[0][2] = totalCommand[1];
		coordinatesCalibration[0][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// Marker 4
	if(totalCommand[0] == 52) {
		coordinatesCalibration[1][0] = posPan;
		coordinatesCalibration[1][1] = posTilt;
		
		coordinatesCalibration[1][2] = totalCommand[1];
		coordinatesCalibration[1][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// Marker 5
	if(totalCommand[0] == 53) {
		coordinatesCalibration[2][0] = posPan;
		coordinatesCalibration[2][1] = posTilt;
		
		coordinatesCalibration[2][2] = totalCommand[1];
		coordinatesCalibration[2][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// Marker 6
	if(totalCommand[0] == 54) {
		coordinatesCalibration[3][0] = posPan;
		coordinatesCalibration[3][1] = posTilt;
		
		coordinatesCalibration[3][2] = totalCommand[1];
		coordinatesCalibration[3][3] = totalCommand[2];
		
		Serial.println("done;");
	}

	// 1
	if(totalCommand[0] == 1) {
		setServoPos(totalCommand[1], totalCommand[2]);

		Serial.println("done;");
	}
}

void printCoordinates(int pX, int pY) {
	Serial.print("( ");
	Serial.print(pX, DEC);
	Serial.print(", ");
	Serial.print(pY, DEC);
	Serial.println(") ");
}

void setServoPos(int pX, int pY) {
	posPan = pX;
	posTilt = pY;

	servoPan.write(posPan);
	servoTilt.write(posTilt);
}
