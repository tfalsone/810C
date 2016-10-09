#incldue<iostream>
using namespace std;

int main()
{
	int a = 2, b = 3;
	
	//a == b equality check: is a = b?
	//a != b not equality
	//a < b
	//a > b
	//a <= b
	//a >= b
	//ILLEGAL: a <> b;	a =< b
	
	//precedence
	if (a == 2 && b == 3){
		cout << "We good fam" << endl;
	}
	if (a+3 < b){
		cout "asdf\n";
	} // precedence is what you would expect: ((a+3) < b)
	return 0;
}