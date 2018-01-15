#include "DriveWithJoystick.h"
#include "Subsystems/DriveTrain.h"
#include <Robot.h>
#include <OI.h>

DriveWithJoystick::DriveWithJoystick(Robot *r) : Command("DriveWithJoystick"), robot(r) {
	// Use Requires() here to declare subsystem dependencies
	Requires(&robot->driveTrain);
}

// Called just before this Command runs the first time
void DriveWithJoystick::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
	robot->driveTrain.Drive(&robot->oi.stick);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystick::End() {
	robot->driveTrain.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystick::Interrupted() {
	robot->driveTrain.Stop();
}
