# include <iostream>
#include "ostrich.h"

using namespace std;

namespace ostrich {

	Ostrich::Ostrich() // инициализация элементов-данных
	{
		setSpecies("Страус");
		setFavoriteFood("Огурец, тыква, кабачок");
		setSize("Большой");
	}
	string Ostrich::whatLovesToEat() {
		return "Какую еду любит: " + getFavoriteFood();
	}
	void Ostrich::info()
	{
		cout << "Вид:" << setw(48) << getSpecies() << "\n";
		cout << "Размер:" << setw(12) << getSize() << "\n";
		cout << "Умение летать" << getCanFly() << endl;
		cout << whatLovesToEat() << "\n";
	}

}