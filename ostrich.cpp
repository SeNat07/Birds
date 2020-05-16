#include <iostream>
#include "ostrich.h"

using namespace std;

namespace ostrich {

	Ostrich::Ostrich() {
		setSpecies("������");
		setFavoriteFood("������, �����, �������");
		setSize("�������");
	}

	string Ostrich::whatLovesToEat() {
		return "����� ��� �����:  " + getFavoriteFood();
	}

	void Ostrich::info() {
		cout << "���:" << setw(20) << getSpecies() << endl;
		cout << "������:" << setw(18) << getSize() << endl;
		cout << "������ ������:" << setw(7) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}