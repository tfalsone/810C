#include <iostream>
using namespace std;

int main()
{
	int a=2, b=3, c; // c is uninitialized, whatever random junk was in memory
	
	c = a+b;
	cout << a-b << endl;
	cout << a*b << endl;
	cout << a/b << endl;	// int/int is an int, number truncates
	cout << b/a << endl;
	cout << -5/3 << endl;
	cout << b%a << endl;	// 3 MOD 2 == 1
	
	
	return 0;
}