#include "flying_bird.h"

using namespace std;

FlyingBird::FlyingBird()
{
	setCanFly(true);
}

string FlyingBird::getCanFly() {
	if (canFly) {
		return "��";
	}
	else {
		return "���";
	}
}
