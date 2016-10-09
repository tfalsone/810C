#include<iostream>
#include<math.h>
using namespace std;

double f(int n){
	if(n <= 1)
		return 1;
	return 2*f(n-1);
}

int main()
{
	int c = int(5.0/2.0);
	cout << c;
}