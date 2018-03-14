/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Joystick.h"
#include "XboxController.h"
#include <Buttons/JoystickButton.h>
class Robot;
class OI {
public:

	Joystick* GetJoystick();

	Joystick* stick;

	XboxController *Xbox;
	OI(Robot* r);
private:
	Robot* robot;

	//X-box buttons
	JoystickButton *RB;
	JoystickButton *LB;

	//Joystick buttons
	JoystickButton *B3;
};
