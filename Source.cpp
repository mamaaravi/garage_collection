#include "Garage.h"
using namespace std;


int main()
{
	ifstream in;
	try
	{
		string s;
		in.open("indata.txt");
		if (!in) throw s;
		cout << "File is open." << endl;
	}
	catch (string s)
	{
		cout << "No file found. ";
		system("pause");
		return 0;
	}
	ofstream out("outdata.txt");
	Garage G;
	G.Input(in);
	G.Output();
	/*G.Add();
	G.Output();
	G.MaxPriced();*/
	//G.Delete();
	G.Output();
	system("pause");
	return 0;
}