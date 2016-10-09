#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please enter number of numbers: ";
	cin >> n;
	int a[n];
	
	int b[2 * 3 + 1]; // int b[7]; // determined at compile time
	
	
	cout << "Please enter " << n << " numbers: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i =0; i < n; i++)
		cout << a[i] << '\t';
}