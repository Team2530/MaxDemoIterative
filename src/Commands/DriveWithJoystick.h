#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "Commands/Command.h"

class Robot;

class DriveWithJoystick : public Command {
public:
	DriveWithJoystick(Robot *r);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Robot* robot;
};

#endif  // DriveWithJoystick_H
