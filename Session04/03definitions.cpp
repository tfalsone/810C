#include <iostream>
using namespace std;

int f(); // function prototype (declaration), can be declared more than once


// definitions can only be defined once
int f(){
	return 2 + 2;
}


int main() {
	int x;
	int x; // cant define the same symbol twice
}