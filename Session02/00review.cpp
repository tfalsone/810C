#include<iostream>
using namespace std;

int main(){
	for (double f = 0.0; f < 10; f += .1)
		cout << f << ' ';
	cout << '\n';
	
	int a = -5;
	unsigned int b = 5U;
	double d = 1.5;
	float f = 1.5f;
	
	system("pause");
	return (0);
}