#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
	
public:
	Fraction(int n, int d) : num(n), den(d) {}
	void print() const { // removes error message, 	THIS METHOD IS READ ONLY. 
		// This method promises that it will not change the object
		// num = 19; cannot be done in a constant method
		cout << num << '/' << den;
		// thingy(); could potentially change the object
	}
	
	void thingy() {
		
	}

}; // all declarations end in a semicolon

int main(){
	const Fraction a(4,2); // this is a pointer to a constant
	a.print(); // print is capable of changing the object, so error is created
	Fraction b(2, 9);
	b.print(); // constant function can be called on a non constant object
}