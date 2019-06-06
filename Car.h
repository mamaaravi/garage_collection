#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Car
{
protected:
	string model;
	int price;
	int expl;
public:
	Car() = default;
	Car(string m, int p, int e);
	bool operator<(const Car&);
	bool operator>(const Car&);
	bool operator==(const Car&);
	void Input();
	void Input(ifstream&in);
	void Output();
	void Output(ofstream&out);
	string GetModel() { return model; }
	~Car();
};