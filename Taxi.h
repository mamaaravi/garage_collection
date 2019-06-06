#pragma once
#include "Car.h"

class Taxi :public Car
{
	string firm;
	int time;
public:
	Taxi() :Car() {};
	Taxi(string n, int p, int e, string f, int t);
	void Input();
	void Input(ifstream&in);
	void Output();
	string GetModel() { return model; }
	void Output(ofstream&out);
	~Taxi();
};