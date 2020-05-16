#include <iostream>
#include "ostrich.h"

using namespace std;

namespace ostrich {

	Ostrich::Ostrich() {
		setSpecies("Страус");
		setFavoriteFood("Огурец, тыква, кабачок");
		setSize("Большой");
	}

	string Ostrich::whatLovesToEat() {
		return "Какую еду любит:  " + getFavoriteFood();
	}

	void Ostrich::info() {
		cout << "Вид:" << setw(20) << getSpecies() << endl;
		cout << "Размер:" << setw(18) << getSize() << endl;
		cout << "Умение летать:" << setw(7) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}