#include <iostream>
using namespace std;

int f(int n){
	return n*n;
}

void hello(){
	cout << "yo";
}

int fact(int n){
	int prod = 1;
	for(int i = 1; i<=n; i++)
		prod *= i;
	return prod;
}

double fact2(int n){
	double prod = 1;
	for(int i = 1; i<=n; i++)
		prod *= i;
	return prod;
}




int main()
{
	cout << f(3) << '\n';
	void *p = (void*)f;	//gives location of pointer
	cout << p << '\n';
	//cout << hello() << '\n';
	cout << hello << '\n'; //address of hello will always evaluate as true
	
	cout << fact(5) << '\n';
	cout << fact(5.1) << '\n';  //bad idea
	
	for(int i = -2; i < 30; i++)
		cout << i << '\t' << fact(i) << '\t' << fact2(i) << '\n';   //blows out at 14 with int,
}