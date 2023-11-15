#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int AdditivePersistence(int num) {

	int ctr = 0;

	if (num < 10)
	{
		return 0;
	}

	stringstream convert;
	convert << num;
	string y = convert.str();
	int total_num, n;
	
	do
	{
		total_num = 0;
		ctr++; 

		for (int x = 0; x < y.length(); x++)
		{
			n = int(y[x]) - 48;
			total_num += n;
		}

		stringstream convert;
		convert << total_num;
		y = convert.str();
	} while (total_num >= 10);
	
	return ctr;
}

int main() {

	cout << "Additive persistence of 4 is " << AdditivePersistence(4) << endl;
	cout << "\nAdditive persistence of 125 is " << AdditivePersistence(125) << endl;
	cout << "\nAdditive persistence of 5489 is " << AdditivePersistence(5489) << endl;
	cout << "\nAdditive persistence of 36024 is " << AdditivePersistence(36024) << endl;
	return 0;
}
