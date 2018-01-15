/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

//#include <iostream>
//#include <string>
#include <Robot.h>
#include "WPILib.h"
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <Drive/DifferentialDrive.h>
#include <Joystick.h>
#include <Spark.h>
#include <Subsystems/DriveTrain.h>
#include <Commands/DriveWithJoystick.h>

Robot::Robot() :
		TimedRobot(), driveTrain(this), oi(this) {

}

	void Robot::RobotInit() {
		//m_chooser.AddDefault(kAutoNameDefault, kAutoNameDefault);
		//m_chooser.AddObject(kAutoNameCustom, kAutoNameCustom);
		//frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
	}

	void Robot::DisabledInit() {

	}

	void Robot::DisabledPeriodic() {

		frc::Scheduler::GetInstance()->Run();
	}

	/*
	 * This autonomous (along with the chooser code above) shows how to
	 * select
	 * between different autonomous modes using the dashboard. The sendable
	 * chooser code works with the Java SmartDashboard. If you prefer the
	 * LabVIEW Dashboard, remove all of the chooser code and uncomment the
	 * GetString line to get the auto name from the text box below the Gyro.
	 *
	 * You can add additional auto modes by adding additional comparisons to
	 * the
	 * if-else structure below with additional strings. If using the
	 * SendableChooser make sure to add them to the chooser code above as
	 * well.
	 */
	void Robot::AutonomousInit() {
		//m_autoSelected = m_chooser.GetSelected();
		// m_autoSelected = SmartDashboard::GetString(
		// 		"Auto Selector", kAutoNameDefault);
		//std::cout << "Auto selected: " << m_autoSelected << std::endl;
		/*
		if (m_autoSelected == kAutoNameCustom) {
			// Custom Auto goes here
		} else {
			// Default Auto goes here
		}*/
	}

	void Robot::AutonomousPeriodic() {
		/*if (m_autoSelected == kAutoNameCustom) {
			// Custom Auto goes here
		} else {
			// Default Auto goes here
		}*/
	}

	void Robot::TeleopInit() {
		Command* dfault = new DriveWithJoystick(this);
		dfault->Start();
	}

	void Robot::TeleopPeriodic() {
		frc::Scheduler::GetInstance()->Run();
		//robotDrive.ArcadeDrive(stick.GetY(), stick.GetX());
	}

	void Robot::TestPeriodic() {}

START_ROBOT_CLASS(Robot)
