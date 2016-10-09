#include <iostream>
using namespace std;


class Fraction {
private:
	int num, den; // numerator, denominator
	
	
public:
/*
	alternate way of writing constructors:
	Fraction() : num(0), den(1) {}
	Fraction(int n) : den(1), num(n) {} // even if you do this, it is num(n), den(1) DO NOT INITIALIZE OUT OF ORDER
	Fraction(int n, int d) : num(n), den(d) {}
	
	another alternative:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {} // works for all three options
	
	with conflicting variable names:
	Fraction(int num = 0, int den = 1){
		this->num = num; this->den = den // this points to private int, otherwise it would be ambiguous
	}
	
	When ambiguous but using colon:
	Fraction(int num = 0, int den = 1) : num(num), den(den) {} // pointer isnt necessary

*/
	Fraction(){		// constructor, no return type
		num = 0; den = 1;
	}
	Fraction(int a){
		num = a; den = 1;
	}
	Fraction(int a, int b){
		num = a; den = b;
	}
	void print(){
		cout << num << "/" << den;
	}
	
	
	
};

// class = type = specification of an object
// object is concrete (exists), takes memory, is an instance of a class
// the act of creating an object is called instantiation

// objects have data (typically hidden, private)
// we talk to objects using messages
// objects respond with methods
// in C++, methods = messages at compile time

int main() {
	Fraction f1(1,2); // 1/2
	Fraction f2(1,3); // 1/3
	int x; // x is random (whatever is on the stack...)
	Fraction f3; // 0/1
	Fraction f4(2); // 2/1
	f1.print();		// 1/2
	
}