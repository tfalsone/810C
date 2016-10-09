#include <iostream>
using namespace std;

void f(double r, double i){
	cin >> r >> i;
	cout << "r=" << r << " i=" << i << '\n';
}

void g(double& r, double& i){
	cin >> r >> i;
	cout << "r=" << r << " i=" << i << '\n';
}

void rect2polar(double x, double y, double& r, double& theta){	// for homework, the reference variables are returned into the main function despite being a void becuase of the reference
	
}

int main()
{
	cout << "hello" << '\n';
	int a, b, c;
	cin >> a >> b >> c; // any amount of whitespace will seperate variable inputs
	cout << a << ','  << b << ',' << c << '\n';
	
	
	double r,i;
	f(r,i);
	cout << "r=" << r << " i=" << i << '\n';
	g(r,i);
	cout << "r=" << r << " i=" << i << '\n';
	

}