/*
	Name: Thomas Falsone
	Date: 10/6/16

*/
#include<iostream>
#include<math.h>
using namespace std;

class Complex {
	private:
		double re, im;
		
	public:
		Complex(double r = 0, double i = 0) : re(r), im(i) {}
		
		friend ostream& operator <<(ostream& s, Complex a){
			return s << a.re << " + " << a.im << "i";
		}
		friend Complex operator +(Complex a, Complex b){
			Complex ans((a.re + b.re), (a.im + b.im));
			return ans;
		}
		friend Complex operator *(Complex a, Complex b){
			Complex ans(((a.re * b.re) - (a.im * b.im)), (a.re * b.im) + (a.im * b.re));
			return ans;
		}
		friend Complex operator -(Complex a){
			Complex ans(-a.re, -a.im);
			return ans;
		}
		
		void abs(Complex a, double& ans){
			ans = sqrt((a.re*a.re) - (a.im*a.im));
		}
};

double abs(Complex a){
	double ans;
	a.abs(a, ans);
	return ans;
}

int main() {
	const Complex c1; // (0,0)	(0 + 0i)
	const Complex c2(2.5); // 2.5 + 0i
	const Complex c3(2.5, 1.8); //2.5 + 1.8i
	Complex c4 = c2 + c3; // 5.0 + 1.8i
	Complex c5 = c2 * c3; // https://en.wikipedia.org/wiki/Complex_number
	Complex c6 = -c5; // negation
	double m = abs(c6); // magnitude of c6	sqrt of real^2 - imag^2
	

	cout << c3 << '\n'; // (2.5, 1.8)
    cout << c4 << '\n';
	cout << c5 << '\n';
	cout << c6 << '\n';
	cout << m << '\n';
}