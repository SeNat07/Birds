#include <iostream>
#include "penguin.h"

using namespace std;

namespace penguin {

	Penguin::Penguin() {
		setSpecies("�������");
		setFavoriteFood("����, ��������");
		setSize("�������");
	}

	string Penguin::whatLovesToEat() {
		return "����� ��� �����:  " + getFavoriteFood();
	}

	void Penguin::info() {
		cout << "���:" << setw(21) << getSpecies() << endl;
		cout << "������:" << setw(18) << getSize() << endl;
		cout << "������ ������:" << setw(7) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}