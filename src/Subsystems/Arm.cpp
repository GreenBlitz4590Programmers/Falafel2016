#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm() :
		Subsystem("Arm")
{
	ds=new DoubleSolenoid(DS_1_ARM);
}

void Arm::InitDefaultCommand()
{

}

void Arm::Open(){
	ds->Set(ds->kForward);
}
void Arm::Open(){
	ds->Set(ds->kReverse);
}

