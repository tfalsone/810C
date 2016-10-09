#include <iostream>
#include <math.h>
using namespace std;

print(int a[13][19]){
	for (int i = 0; i < 13; i++){
		for(int j = 0; j < 19; j++)
			cout << a[i][j] << '\t';
		cout << '\n';
	}
}

int main()
{
	// Initialize chart
	int chill[13][19] = { 0 };
	
	// Set up temp/wind axes
	double wind = 5;
	double temp = 40;
	for(int i = 1; i < 19; i++){
		chill[0][i] = temp;
		temp -= 5;
	}
	for(int i = 1; i < 13; i++){
		chill[i][0] = wind;
		wind += 5;
	}
	
	wind = 5;
	temp = 40;
	// Fill in remaining figures with equation
	for(int i = 1; i < 13; i++){
		for(int j = 1; j < 20; j++){
			chill[i][j] = (35.74 + (0.6215 * temp) - (35.75 * pow(wind,0.16)) + (0.4275 * temp * pow(wind, 0.16)));
			temp -= 5;
		}
		wind += 5;
		temp = 40;
	}
	// Print final chart
	print(chill);
	
	system("pause");
	return(0);
}