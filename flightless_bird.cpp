#include "flightless_bird.h"

using namespace std;

FlightlessBird::FlightlessBird() {
	setCanFly(false);
}

string FlightlessBird::getCanFly() {
	if (canFly) {
		return "��";
	} else {
		return "���";
	}
}