#include <iostream>
#include "hummingbird.h"

using namespace std;

namespace hummingbird {

	Hummingbird::Hummingbird() {
		setSpecies("Колибри");
		setFavoriteFood("Сладкий нектар цветов");
		setSize("Маленький");
	}

	string Hummingbird::whatLovesToEat() {
		return "Какую еду любит:  " + getFavoriteFood();
	}

	void Hummingbird::info() {
		cout << "Вид:" << setw(21) << getSpecies() << endl;
		cout << "Размер:" << setw(20) << getSize() << endl;
		cout << "Умение летать:" << setw(6) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}