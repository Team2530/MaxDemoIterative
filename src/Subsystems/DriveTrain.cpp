#include "DriveTrain.h"
#include <Commands/DriveWithJoystick.h>

DriveTrain::DriveTrain(Robot *r) :
		Subsystem("ExampleSubsystem"),
		robot(r) {
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveWithJoystick(robot));
}

void DriveTrain::Drive(frc::Joystick*stick) {
	robotDrive.ArcadeDrive(stick->GetY(), -stick->GetZ());
}

void DriveTrain::Stop() {
	robotDrive.ArcadeDrive(0, 0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
