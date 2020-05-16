#ifndef HUMMINGBIRD_H
#define HUMMINGBIRD_H
#include <iostream>
#include "flying_bird.h"

using namespace std;

namespace hummingbird {
	class Hummingbird : public FlyingBird {
	public:
		Hummingbird();
		void info();

		string whatLovesToEat();
		string getFavoriteFood() { return favoriteFood; }
		void setFavoriteFood(string favoriteFoodValue) { favoriteFood = favoriteFoodValue; }

		string getSize() { return size; }
		void setSize(string sizeValue) { size = sizeValue; }

	private:
		string favoriteFood;
		string size;
	};
}
#endif