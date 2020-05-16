#include <iostream>
#include "ostrich.h"
#include "hummingbird.h"
#include "penguin.h"
#include "eagle.h" 

using namespace std;
using namespace ostrich;
using namespace hummingbird;
using namespace eagle;
using namespace penguin;

void shapka()
{
	cout << "Тема №5. Наследование. Реализация дерева наследования в языке С++.\n";
	cout << "Выполнила студентка группы ИСТбд-12 Седых Наталья \n";
	cout << "Задание: Для выполнения лабораторных заданий реализуйте дерево наследования\n";
	cout << "для предложенного варианта «домашние животные» или свой вариант дерева (что более предпочтительно).\n\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	shapka();

	Ostrich o;
	cout << endl << "Ostrich" << endl;
	o.info();

	Hummingbird h; // переменная типа "корова"
	cout << endl << "Hummingbird" << endl;
	h.info();

	Eagle e; // переменная типа "орёл"
	cout << endl << "Eagle" << endl;
	e.info();

	Penguin p; // переменная типа "пингвин"
	cout << endl << "Penguin" << endl;
	p.info();

	return 0;
}