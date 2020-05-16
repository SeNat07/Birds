#ifndef OSTRICH_H
#define OSTRICH_H
# include <iostream>
# include "flightless_bird.h"

using namespace std;

namespace ostrich {
	class Ostrich : public FlightlessBird {
	public:
		Ostrich();
		void info();

		string whatLovesToEat();
		string getFavoriteFood() { return favoriteFood; }
		void setFavoriteFood (string favoriteFoodValue) { favoriteFood = favoriteFoodValue; }

		string getSize() { return size; }
		void setSize(string sizeValue) { size = sizeValue; }

	private:
		string favoriteFood;
		string size;
	};
}
#endif
