#ifndef GoStraight_H
#define GoStraight_H

//#include "../CommandBase.h"
#include <Commands/Command.h>
#include <Subsystems/DriveTrain.h>
#include <Robot.h>
#include <RobotMap.h>
#include <Joystick.h>

class GoStraight : public CommandBase {
private:
	//Joystick *stick;
public:
	GoStraight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // GoStraight_H
