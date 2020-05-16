# include <iostream>
#include "ostrich.h"

using namespace std;

namespace ostrich {

	Ostrich::Ostrich() // ������������� ���������-������
	{
		setSpecies("������");
		setFavoriteFood("������, �����, �������");
		setSize("�������");
	}
	string Ostrich::whatLovesToEat() {
		return "����� ��� �����: " + getFavoriteFood();
	}
	void Ostrich::info()
	{
		cout << "���:" << setw(48) << getSpecies() << "\n";
		cout << "������:" << setw(12) << getSize() << "\n";
		cout << "������ ������" << getCanFly() << endl;
		cout << whatLovesToEat() << "\n";
	}

}