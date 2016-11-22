#ifndef Chassis_H
#define Chassis_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "SPI.h"
class Chassis: public Subsystem
{
private:
	Talon* foreleft;
	Talon* foreright;
	Talon* rearleft;
	Talon* rearright;
	ADXRS450_Gyro* gyro;
	RobotDrive* robot;
	SPI *sp;

public:
	Chassis();
	void InitDefaultCommand();
	void ArcadeDrive(float speed, float turn);
	void Mecanum();

};

#endif
