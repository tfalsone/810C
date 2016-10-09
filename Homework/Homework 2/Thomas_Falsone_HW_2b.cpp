#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(unsigned long long p){
	if(p == 2)
		return true;
	if(p % 2 == 0)
		return false;
	for(int i = 3; i <= sqrt(p); i+= 2){
		if(p % i == 0)
			return false;
	}
	return true;
}

int main()
{
	unsigned long long p;
	cout << "Enter a number: ";
	cin >> p;
	if(isPrime(p))
		cout << p << " is prime" << '\n';
	else
		cout << p << " is not prime" << '\n';
	
	system("pause");
	return(0);
}