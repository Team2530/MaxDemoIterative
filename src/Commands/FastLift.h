#ifndef FastLift_H
#define FastLift_H

#include "Robot.h"

class FastLift : public Command {
public:
	FastLift(Robot* r);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Robot* robot;
};

#endif  // FastLift_H
