#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	void print() const {
		cout << num << '/' << den;
	}
	friend Fraction add(Fraction, Fraction); // gives function permission to use private data outside the class
	
	// friend Fraction add(Fraction a, Fraction b){
	//		Fraction ans((a.num * b.den) + (b.num * a.den), a.den * b.den);
	//		return ans;
	
	// friend Fraction operator +(Fraction a, Fraction b){
	//		Fraction ans((a.num * b.den) + (b.num * a.den), a.den * b.den);
	//		return ans;
	
	friend ostream& operator <<(ostream& s, Fraction f){
		return s << f.num << '/' << f.den;
	}
	
};

// definition
Fraction add(Fraction a, Fraction b){
	Fraction ans((a.num * b.den) + (b.num * a.den) , a.den * b.den);
	return ans;
}

int main(){
	Fraction a(1,2);
	a.print();
	cout << " + ";
	Fraction b(1,3);
	b.print();
	cout << " = ";
	Fraction c = add(a, b);
	// Fraction c = a + b;
	c.print();
	
}