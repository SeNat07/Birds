#include <iostream>
#include "penguin.h"

using namespace std;

namespace penguin {

	Penguin::Penguin() {
		setSpecies("Пингвин");
		setFavoriteFood("Рыба, кальмары");
		setSize("Средний");
	}

	string Penguin::whatLovesToEat() {
		return "Какую еду любит:  " + getFavoriteFood();
	}

	void Penguin::info() {
		cout << "Вид:" << setw(21) << getSpecies() << endl;
		cout << "Размер:" << setw(18) << getSize() << endl;
		cout << "Умение летать:" << setw(7) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}