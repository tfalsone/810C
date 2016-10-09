#include<iostream>
using namespace std;

class A {
public:
	void f() {}
	
	static void g() {}
	
private:
	int m; // data members, attributes only you are allowed to look at
	static int count; // shared by everyone in this class
	
	
protected:
	int z; // usually data and functions, only for you and your childrem (inheritance)
	
};

A a1, a2, a3; // create 3 objects of type A

int main(){
	
}