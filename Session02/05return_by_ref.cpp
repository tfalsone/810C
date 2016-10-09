#include<iostream>
#include<math.h>
using namespace std;


double f(double x){
	return x*2;
}

void rect2polar(double x, double y, double& r, double& theta){
	r = sqrt(x*x + y*y);
	theta = atan2(y/x);
}

int main(){
	double x,y;
	cin >> x >> y;
	
	double r, theta;
	rect2polar(x, y, r, theta);
	
	cout << r << "," << theta << '\n';
}