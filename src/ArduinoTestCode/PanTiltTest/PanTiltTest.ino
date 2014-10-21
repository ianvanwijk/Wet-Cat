#include <Servo.h>

Servo servoTilt;
Servo servoPan;
int posTilt = 90;
int posPan = 90;

int pinLaser = 13;
int laserOn = LOW;

int coordinatesCalibration[4][4] = {
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 }
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

		Serial.print(totalCommand[0], DEC);
		Serial.print(',');
		Serial.print(totalCommand[1], DEC);
		Serial.print(',');
		Serial.print(totalCommand[2], DEC);
		Serial.println(';');

		commandString = "";

		commandPos = 0;
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
	
	// 3
	if(totalCommand[0] == 51) {
		coordinatesCalibration[0][0] = posPan;
		coordinatesCalibration[0][1] = posTilt;
		
		coordinatesCalibration[0][2] = totalCommand[1];
		coordinatesCalibration[0][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// 4
	if(totalCommand[0] == 52) {
		coordinatesCalibration[1][0] = posPan;
		coordinatesCalibration[1][1] = posTilt;
		
		coordinatesCalibration[1][2] = totalCommand[1];
		coordinatesCalibration[1][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// 5
	if(totalCommand[0] == 53) {
		coordinatesCalibration[2][0] = posPan;
		coordinatesCalibration[2][1] = posTilt;
		
		coordinatesCalibration[2][2] = totalCommand[1];
		coordinatesCalibration[2][3] = totalCommand[2];
		
		Serial.println("done;");
	}
	// 6
	if(totalCommand[0] == 54) {
		coordinatesCalibration[3][0] = posPan;
		coordinatesCalibration[3][1] = posTilt;
		
		coordinatesCalibration[3][2] = totalCommand[1];
		coordinatesCalibration[3][3] = totalCommand[2];
		
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

