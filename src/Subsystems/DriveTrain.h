#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <Joystick.h>
#include "WPILib.h"

class Robot;

class DriveTrain: public Subsystem {
private:
	frc::VictorSP frontLeftMotor { 1 };
	frc::VictorSP frontRightMotor { 0 };
	frc::VictorSP backLeftMotor { 2 };
	frc::VictorSP backRightMotor { 3 };
	frc::SpeedControllerGroup leftSide { frontLeftMotor, backLeftMotor };
	frc::SpeedControllerGroup rightSide { frontRightMotor, backRightMotor };
	frc::DifferentialDrive robotDrive { leftSide, rightSide };
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Robot* robot;

public:
	DriveTrain(Robot* r);
	void InitDefaultCommand();
	void Drive(frc::Joystick*stick);
	void Stop();
};

#endif  // DriveTrain_H
