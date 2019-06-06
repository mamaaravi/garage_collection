#pragma once
#include "Taxi.h"
#include <vector>

class Garage
{
	vector<Car>cars;
	vector<Taxi>taxis;
public:
	Garage() = default;
	Garage(vector<Car>c, vector<Taxi>t);
	void Input(ifstream&in);
	void Output();
	void Output(ofstream&out);
	void Add();
	void Delete();
	void MaxPriced();
	~Garage();
};