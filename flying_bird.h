#ifndef FLYING_BIRD_H
#define FLYING_BIRD_H
#include <iostream>
#include "bird.h"

class FlyingBird : public Bird {
	public:
		FlyingBird();
		string getCanFly();
		void setCanFly(bool canFlyValue) { canFly = canFlyValue; }

	private:
		bool canFly;

};

#endif
