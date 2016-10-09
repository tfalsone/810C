#include <iostream>
using namespace std;

int main()
{
	short a = 20000 + 20000;
	cout << a << endl;
	int secondsPerWeek = 7*24*60*60;
	cout << "secondsPerWeek = " << secondsPerWeek << endl;
	int secondsPerYear = secondsPerWeek * 52;
	cout << "secondsPerYear = " << secondsPerYear << endl;
	long age = 69;		//int fails at 69
	long int ageInSeconds = age * secondsPerYear;
	cout << "SIZE of long int = " << sizeof(ageInSeconds) << endl;
	cout << "ageInSeconds = " << ageInSeconds << endl;
	return 0;
}