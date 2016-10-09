#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	for(int j=0; j<2; j++){
		for(int i=0; i<3; i++)
			cout << i << ' ' << j << '\t';
		cout << '\n';
	}
	
	const int n = 12;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j <= n; j++)
			cout << j*i << '\t';
		cout << '\n';
	}
	
	
	cout << setprecision(3)
}