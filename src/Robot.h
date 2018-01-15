/*
 * Robot.h
 *
 *  Created on: Jan 15, 2018
 *      Author: Team 2530
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_
#include "WPILib.h"
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <Drive/DifferentialDrive.h>
#include <Joystick.h>
#include <Spark.h>
#include <Subsystems/DriveTrain.h>
#include <OI.h>
#include <Subsystems/Lifter.h>

class Robot : public frc::TimedRobot {
public:
	DriveTrain driveTrain;
	OI oi;
	Lifter lifter;

	Robot();

	void RobotInit();

	void DisabledInit() override;

	void DisabledPeriodic() override;


	void AutonomousInit() override;

	void AutonomousPeriodic();

	void TeleopInit();

	void TeleopPeriodic();

	void TestPeriodic();

private:
	//frc::LiveWindow& m_lw = *LiveWindow::GetInstance();
	//frc::SendableChooser<std::string> m_chooser;
	//const std::string kAutoNameDefault = "Default";
	//const std::string kAutoNameCustom = "My Auto";
	//std::string m_autoSelected;
};






#endif /* SRC_ROBOT_H_ */
