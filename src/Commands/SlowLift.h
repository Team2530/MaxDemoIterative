#ifndef SlowLift_H
#define SlowLift_H

#include "Robot.h"

class SlowLift : public Command {
public:
	SlowLift(Robot* r);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Robot* robot;
};

#endif  // SlowLift_H
