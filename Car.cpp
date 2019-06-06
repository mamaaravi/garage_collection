#include "Car.h"

Car::Car(string m, int p, int e)
{
	m = model; p = price; e = expl;
}

bool Car::operator<(const Car &c)
{
	if (price < c.price)
		return 1;
	else return 0;
}

bool Car::operator>(const Car &c)
{
	if (price > c.price)
		return 1;
	else return 0;
}

bool Car::operator==(const Car &c)
{
	if (model == c.model)
		return 1;
	else return 0;
}

void Car::Input()
{
	cout << "Enter model: "; cin >> model;
	cout << "Enter price: "; cin >> price;
	cout << "Enter exploitation: "; cin >> expl;
}

void Car::Input(ifstream & in)
{
	in >> model;
	in >> price;
	in >> expl;
}

void Car::Output()
{
	cout << "Car " << model << " $" << price << " Exploited for " << expl << " years."<<endl;
}

void Car::Output(ofstream & out)
{
	out << "Car " << model << " $" << price << " Exploited for " << expl << " years." << endl;
}

Car::~Car()
{
}
