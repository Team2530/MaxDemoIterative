#include "DriveTrain.h"
#include <Commands/DriveWithJoystick.h>
#include <Drive/DifferentialDrive.h>

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
	double stickY2 = DriveFunction(stickY);
	double stickZ2 = DriveFunction(stickZ);
	robotDrive->ArcadeDrive(stickY2, stickZ2);
}

void DriveTrain::Stop() {
	robotDrive->ArcadeDrive(0, 0);
}

double DriveTrain::DriveFunction(double inSpeed) {
	double outSpeed = .5*pow(inSpeed, 3) + .5*inSpeed;
	return outSpeed;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
