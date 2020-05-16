#ifndef FLIGHTLESS_BIRD_H
#define FLIGHTLESS_BIRD_H
#include <iostream>
#include "bird.h"

class FlightlessBird : public Bird {
	public:
		FlightlessBird();

		string getCanFly();
		void setCanFly(bool canFlyValue) { canFly = canFlyValue; }

	private:
		bool canFly;
};
#endif

