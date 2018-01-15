#include "SlowLift.h"

SlowLift::SlowLift(Robot* r) : robot(r)  {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&robot->lifter);
}

// Called just before this Command runs the first time
void SlowLift::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SlowLift::Execute() {
	robot->lifter.Slow();
}

// Make this return true when this Command no longer needs to run execute()
bool SlowLift::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SlowLift::End() {
	robot->lifter.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SlowLift::Interrupted() {
	robot->lifter.Stop();
}
