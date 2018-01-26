#include "DriveTrain.h"
#include <Commands/DriveWithJoystick.h>
#include <Drive/DifferentialDrive.h>
#include <SmartDashboard/SmartDashboard.h>

DriveTrain::DriveTrain(Robot *r) :
		Subsystem("ExampleSubsystem"),
		robot(r) {
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveWithJoystick(robot));
}

void DriveTrain::Drive(frc::Joystick*stick) {
	double stickY = stick->GetY();
	double stickZ = stick->GetZ();
	Smartdashboard::putData("Y", stickY);
	Smartdashboard::putData("Z", stickZ);
	double stickY2 = DriveFunctionY(stickY);
	double stickZ2 = DriveFunctionZ(stickZ);
	Smartdashboard::putData("Y2", stickY2);
	Smartdashboard::putData("Z2", stickZ2);
	robotDrive.ArcadeDrive(stickY2, -stickZ2);
}

void DriveTrain::Stop() {
	robotDrive.ArcadeDrive(0, 0);
}

double DriveTrain::DriveFunctionY(double inSpeed) {
	double outSpeed = .25*pow(inSpeed, 3) + .75*inSpeed;
	return outSpeed;
}

double DriveTrain::DriveFunctionZ(double inSpeed) {
	double outSpeed = .8*pow(inSpeed, 3) + .2*inSpeed;
	return outSpeed;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
