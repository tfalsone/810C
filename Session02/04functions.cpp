#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

// f(x) = x^2
int f(int x){
	return x*x;
}

void hello(){
	cout << "hello\n";
}

// function to compute hypotenuse
// sqrt(a^2 + b^2)
double hypot(double a, double b){
	double result;
	result = sqrt(f(a) + f(b));
	return result;
}

//angle formed by two vecors making a right angle
//given distance of vector x, y
//arctan(y/x)
//DO NOT USE atan(y/x) ==> atan2(y,x)
double angle(double x, double y){
	double result;
	result = atan2(y,x);
	return result;
}

int sum(int a, int b){
	int result;
	for (int i = a; i <= b; i++)
		result += i;
	return result;
}

double fact(double n){
	double result = 1.0;
	for (double i = n; i > 0; i--)
		result *= i;
	return result;
}


int main(){
	hello();
	cout << f(9) << '\n';
	cout << hypot(3,4) << '\n';
	cout << hypot(4,5) << '\n';
	cout << angle(50,50) << '\n';
	cout << angle(0,50) << '\n';
	cout << angle(50,0) << '\n';
	cout << sum(5, 9) << '\n'; // 5+6+7+8+9
	cout << fact(5) << '\n';
	cout << fact(20) << '\n';
	cout << fact(50) << '\n';
	cout << sum(1, 10) << '\n'; //55
	cout << sum(1, 1000) << '\n'; //500500
	cout << sum(1, 1000000) << '\n';
	
	system("pause");
}