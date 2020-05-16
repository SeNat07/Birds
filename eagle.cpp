#include <iostream>
#include "eagle.h"

using namespace std;

namespace eagle {

	Eagle::Eagle() {
		setSpecies("���");
		setFavoriteFood("������� ������� ��������");
		setSize("�������");
	}

	string Eagle::whatLovesToEat() {
		return "����� ��� �����:  " + getFavoriteFood();
	}

	void Eagle::info() {
		cout << "���:" << setw(18) << getSpecies() << endl;
		cout << "������:" << setw(18) << getSize() << endl;
		cout << "������ ������:" << setw(6) << getCanFly() << endl;
		cout << whatLovesToEat() << endl;
	}
}