/*
	Name: Thomas Falsone
	Date: 9/27/16
	EE 810C
*/

#include<iostream>
#include<math.h>
using namespace std;

double get_rads(double theta){
	double rad;
	rad = 2.0 * 3.14159265 * (theta/360.0);
	return rad;
}

double calcX(double theta, double dist){
	double rads = get_rads(theta);
	double x = dist * sin(rads);
	return x;
}

double calcY(double theta, double dist){
	double rads = get_rads(theta);
	double y = dist * cos(rads);
	return y;
}

int main()
{
	double theta; double dist;
	double x = 0; double y = 0;
	while(1){
		cout << "Enter an angle between 0 and 359, or negative to terminate: ";
		cin >> theta;
		cout << "Enter a distance, or negative to terminate: ";
		cin >> dist;
		
		if((theta < 0) || (dist < 0))
			break;
		
		x += calcX(theta, dist);
		y += calcY(theta, dist);
		
		cout << "Location: x = " << x << ", y = " << y << '\n';
	}
}