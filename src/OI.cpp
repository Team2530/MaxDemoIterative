/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <Commands/SlowLift.h>
#include <Commands/FastLift.h>
#include <WPILib.h>
#include <Subsystems/ControllerConstants.h>

OI::OI(Robot* r) : robot(r)
{
	//X-box commands here
	Xbox = new frc::XboxController(1);
	LB = new frc::JoystickButton(Xbox, ControllerConstants::xBoxButtonMap::kLBbutton);
	LB->WhileHeld(new SlowLift(robot));
	RB = new frc::JoystickButton(Xbox, ControllerConstants::xBoxButtonMap::kRBbutton);
	RB->WhileHeld(new FastLift(robot));

	//Joystick commands here
	stick = new frc::Joystick(0);
	B3 = new frc::JoystickButton(stick, 3);
	B3->WhileHeld(new GoStraight());

	// Process operator interface input here.
}
