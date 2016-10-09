#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(unsigned long long p){
	if(p < 2)
		return false;
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

int countPrimes(unsigned long long a, unsigned long long b){
	int count = 0;
	for(unsigned long long i = a; i <= b; i++){
		if(isPrime(i)){
			count ++;
			// cout << i << "  ";
		}
	}
	return count;
}

int main()
{
	unsigned long long p, q;
	cout << "Enter the first number: ";
	cin >> p;
	cout << "Enter the second number: ";
	cin >> q;
	
	int c = countPrimes(p,q);
	cout << "There are " << c << " primes between " << p << " and " << q << '\n';
	
	system("pause");
	return(0);
}