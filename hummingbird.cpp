#include <iostream>
#include "hummingbird.h"

using namespace std;

namespace hummingbird {

	Hummingbird::Hummingbird() {
		setSpecies("�������");
		setFavoriteFood("������� ������ ������");
		setSize("���������");
	}

	string Hummingbird::whatLovesToEat() {
		return "����� ��� �����:  " + getFavoriteFood();
	}

	void Hummingbird::info() {
		cout << "���:" << setw(21) << getSpecies() << endl;
		cout << "������:" << setw(20) << getSize() << endl;
		cout << "������ ������:" << setw(6) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}