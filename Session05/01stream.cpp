#include<iostream>
#include<fstream>
using namespace std;

int main(){
	cout << "Hello";
	int n;
	cin >> n;
	
	ofstream f("test.ps");
	f << "0 0 moveto\n";
	
}