#include <iostream>
#include <math.h>
using namespace std;

unsigned long long fact(unsigned int n){
	if(n <= 1)
		return 1;
	return n * fact(n-1);
}

double choose(unsigned int n, unsigned int r){
	double c;
	//cout << fact(n) << '\t' << fact(r) << '\t';
	c = (fact(n)) / ((fact(r))*(fact(n - r)));
	return c;
}

int main()
{
	unsigned int n, r;
	cout << "Enter the first number: ";
	cin >> n;
	cout << "Enter the second number: ";
	cin >> r;
	
	cout << choose(n, r);
}