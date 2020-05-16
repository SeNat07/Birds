#include "flightless_bird.h"

using namespace std;

FlightlessBird::FlightlessBird() {
	setCanFly(false);
}

string FlightlessBird::getCanFly() {
	if (canFly) {
		return "Да";
	} else {
		return "Нет";
	}
}