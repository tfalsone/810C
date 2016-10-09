#include<iostream>
using namespace std;

int main(){
	float f = 1.0f;
	while (1.0f + f > f){
		cout << f << '\n';
		f /= 10;
	}
	
	
}