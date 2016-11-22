#include "Chassis.h"
#include "../RobotMap.h"

Chassis::Chassis() :
		Subsystem("Chassis")
{
	    foreleft = new Talon(TALON_0_CHASSIS_FORELEFT);
	    foreright = new Talon(TALON_1_CHASSIS_FORERIGHT);
	    rearleft =  new Talon(TALON_2_CHASSIS_REARLEFT);
		rearright = new Talon(TALON_3_CHASSIS_REARRIGHT);
		gyro = new ADXRS450_Gyro(sp->Port::kOnboardCS0); //ask maarahot
		robot = new RobotDrive(foreleft, foreright, rearleft, rearright);



}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Chassis::ArcadeDrive(float speed, float turn){
	robot->ArcadeDrive(speed, turn, false);
	// Put methods for controlling this subsystem
}
// here. Call these from Commands.
//void Ch
