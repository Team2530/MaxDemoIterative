#include "FastLift.h"

FastLift::FastLift(Robot* r) : robot(r) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&robot->lifter);
}

// Called just before this Command runs the first time
void FastLift::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void FastLift::Execute() {
	robot->lifter.Fast();

}

// Make this return true when this Command no longer needs to run execute()
bool FastLift::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FastLift::End() {
	robot->lifter.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FastLift::Interrupted() {
	robot->lifter.Stop();
}
