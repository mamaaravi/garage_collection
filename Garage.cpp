#include "Garage.h"

//template<class T>
//void OutputVector(vector<T>a, T)
//{
//	for (auto it = a.begin(); it != a.end(); ++it)
//	{
//		T temp;
//		temp = *it;
//		temp.Output();
//		cout << endl;
//	}
//}
//
//template<class T>
//void OutputVector(vector<T>a)
//{
//	for (auto it = a.begin(); it != a.end(); ++it)
//	{
//		T temp;
//		temp = *it;
//		temp.Output(out);
//		out << endl;
//	}
//}

Garage::Garage(vector<Car> c, vector<Taxi> t)
{
	c = cars; t = taxis;
}

void Garage::Input(ifstream & in)
{
	char ch;
	while (!in.eof())
	{
		in >> ch;
		try 
		{
			string s;
			if (ch != 'C'&&ch != 'T') throw s;
		}
		catch (string s)
		{
			cout << "Incorrect input." << endl;
			system("pause");
		}
		if (ch == 'C')
		{
			Car temp;
			temp.Input(in);
			cars.push_back(temp);
		}
		else if (ch == 'T')
		{
			Taxi temp;
			temp.Input(in);
			taxis.push_back(temp);
		}
	}
}

void Garage::Output()
{
	cout << "Cars: " << endl;
	for (auto it = cars.begin(); it != cars.end(); ++it)
	{
		Car temp;
		temp = *it;
		temp.Output();
		cout << endl;
	}
	cout << "Taxis: " << endl;
	for (auto it = taxis.begin(); it != taxis.end(); ++it)
	{
		Taxi temp;
		temp = *it;
		temp.Output();
		cout << endl;
	}
}

void Garage::Output(ofstream & out)
{
	out << "Cars: " << endl;
	for (auto it = cars.begin(); it != cars.end(); ++it)
	{
		Car temp;
		temp = *it;
		temp.Output(out);
		out << endl;
	}
	out << "Taxis: " << endl;
	for (auto it = taxis.begin(); it != taxis.end(); ++it)
	{
		Taxi temp;
		temp = *it;
		temp.Output(out);
		out << endl;
	}
}

void Garage::Add()
{
	while (1)
	{
		cout << "Press C if youb want to add a car." << endl 
			<< "Press T if you want to add a taxi." << endl
			<<"Press 0 to exit."<<endl;
		char ch;
		cin >> ch;
		if (ch == 'C')
		{
			Car temp;
			temp.Input();
			cars.push_back(temp);
		}
		else if (ch == 'T')
		{
			Taxi temp;
			temp.Input();
			taxis.push_back(temp);
		}
		else if (ch == '0') break;
		else cout << "Incorrect input." << endl;
	}
}

void Garage::Delete()
{
	string mod;
	cout << "Input a model you want to delete: ";
	cin >> mod;
	for (int i = 0; i < cars.size(); ++i)
	{
		if(mod==cars[i].GetModel())
			cars.erase(cars.begin()+i);
	}
	for (int i = 0; i < taxis.size(); ++i)
	{
		if (mod == taxis[i].GetModel())
			taxis.erase(taxis.begin() + i);
	}
}

void Garage::MaxPriced()
{
	Car MaxC = cars[0];
	Taxi MaxT = taxis[0];
	for (int i = 0; i < cars.size(); ++i)
	{
		if (cars[i]> MaxC)
			MaxC = cars[i];
	}
	for (int i = 0; i < taxis.size(); ++i)
	{
		if (taxis[i]> MaxT)
			MaxT = taxis[i];
	}
	if (MaxT > MaxC)
	{
		cout << "The most costly car is a Taxi." << endl;
		MaxT.Output();
	}
	else
	{
		cout << "The most costly car is not a Taxi." << endl;
		MaxC.Output();
	}
}

Garage::~Garage()
{
}


