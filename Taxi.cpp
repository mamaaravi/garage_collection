#include "Taxi.h"

Taxi::Taxi(string n, int p, int e, string f, int t): Car(n, p, e)
{
	f = firm;
	t = time;
}

void Taxi::Input()
{
	cout << "Enter model: "; cin >> model;
	cout << "Enter price: "; cin >> price;
	cout << "Enter exploitation: "; cin >> expl;
	cout << "Enter firm: "; cin >> firm;
	cout << "Enter time of work: "; cin >> time;
}

void Taxi::Input(ifstream & in)
{
	in >> model;
	in >> price;
	in >> expl;
	in >> firm;
	in >> time;
}

void Taxi::Output()
{
	cout << "Taxi " << model << " $" << price << " Exploited for " << expl<<" totally and "<<time << " years by firm "<<firm << endl;

}

void Taxi::Output(ofstream & out)
{
	out << "Taxi " << model << " $" << price << " Exploited for " << expl << " totally and " << time << " years by firm " << firm << endl;
}

Taxi::~Taxi()
{
}
