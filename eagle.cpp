#include <iostream>
#include "eagle.h"

using namespace std;

namespace eagle {

	Eagle::Eagle() {
		setSpecies("Орёл");
		setFavoriteFood("Грызуны средней величины");
		setSize("Средний");
	}

	string Eagle::whatLovesToEat() {
		return "Какую еду любит:  " + getFavoriteFood();
	}

	void Eagle::info() {
		cout << "Вид:" << setw(18) << getSpecies() << endl;
		cout << "Размер:" << setw(18) << getSize() << endl;
		cout << "Умение летать:" << setw(6) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}