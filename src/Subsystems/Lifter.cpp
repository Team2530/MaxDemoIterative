#include "Lifter.h"
#include "WPILib.h"

Lifter::Lifter() : Subsystem("LifterSubsystem") {
	lifterMotor = new VictorSP (kliftermotor);
}

void Lifter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Lifter::Stop(){
	lifterMotor->SetSpeed(0.0);

}

void Lifter::Fast(){
	lifterMotor->SetSpeed(1);

}

void Lifter::Slow(){
	lifterMotor->SetSpeed(0.5);

}
// Put methods for controlling this subsystem
// here. Call these from Commands.
