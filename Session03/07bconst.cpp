#include<iostream>
using namespace std;


void f(double& x){
	x++;
	cout << x;
}

int main(){
	//f(2.5);
	
	double x = 2.5;
	f(x);
}