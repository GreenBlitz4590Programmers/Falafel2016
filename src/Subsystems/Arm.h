#ifndef Arm_H
#define Arm_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Arm: public Subsystem
{
private:

	DoubleSolenoid* ds;
public:
	Arm();
	void Open();
	void Close();
	void InitDefaultCommand();
};

#endif
