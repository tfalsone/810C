/*
	Name: Thomas Falsone
	Date: 9/23/16
	EE 810C
*/

#include <iostream>
#include <math.h>
using namespace std;

float max(float a[], int length){
	int max = 0;
	for(int i = 0; i < length; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

float min(float a[], int length){
	int min = a[0];
	for(int i = 1; i < length; i++){
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

double mean(float a[], int length){
	double mean = 0;
	for(int i = 0; i < length; i++)
		mean += a[i];
	mean /= length;
	return mean;
}

double variance(float a[], int length){
	double var = 0;
	double sum = 0;
	double m = mean(a, length);
	for(int i = 0; i < length; i++)
		sum += pow((a[i] - m), 2);
	var = sum / (length - 1);
	return var;
}


int main()
{
	cout << "Enter the number of values in array: ";
	int n;
	cin >> n;
	
	float a[n];
	for(int i = 0; i < n; i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> a[i];
	}
	
	cout << "Max: " << max(a, n) << '\n' << "Min: " << min(a, n) << '\n' << "Mean: " << mean(a, n) << '\n' << "Variance: " << variance(a, n) << '\n';
}