//#include <iostream>
#include "ostrich.h"
/*#include "hummingbird.h"
#include "penguin.h"
#include "eagle.h" */
#include "bird.h"
#include "flying_bird.h"
#include "flightless_bird.h"

using namespace std;
using namespace ostrich;
/*using namespace hummingbird;
using namespace eagle;
using namespace penguin;*/

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

	FlyingBird f;
	cout << endl << "Flying Bird " << f.getCanFly();

	Ostrich o;
	cout << endl << "Ostrich " << endl;
	o.info();
	return 0;
}
/*int main()
{
	setlocale(LC_ALL, "Russian");
	shapka();

	Ostrich o; // переменная типа "страус"
	o.info();
	o.Where_does_she_live();
	o.Can_a_bird_fly();
	o.Does_the_bird_live_in_the_forest();

	cout << endl;

	Hummingbird h; // переменная типа "корова"
	h.info();
	h.Where_does_she_live();
	h.Can_a_bird_fly();
	h.Does_the_bird_live_in_the_forest();

	cout << endl;

	Eagle e; // переменная типа "орёл"
	e.info();
	e.Where_does_she_live();
	e.Can_a_bird_fly();
	e.Does_the_bird_live_in_the_forest();

	cout << endl;

	Penguin p; // переменная типа "пингвин"
	p.info();
	p.Where_does_she_live();
	p.Can_a_bird_fly();
	p.Does_the_bird_live_in_the_forest();

	cout << endl;
	
	return 0;
} */
