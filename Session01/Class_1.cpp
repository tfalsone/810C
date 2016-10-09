#include <iostream>
using namespace std;

int main()	//Paranthesis after main show that main is a function
{
	cout << "hello\n";		// --> windows \r\n ^M^J
	int a = 3;				// int >= 16 bits	int >= short	int <= long 
	short int b = 20000;	//usually 16 bits, short <= int
	short b2;				//another way to write it
	long int c = 1000000000000L;	//32 or 64 bits
	long long d = 1000000000000L;	//64 bits
	cout << a << endl;
	
	unsigned long int e = 1UL;
	/*
	signed: 15 bits 2^15 +/-		-32768 ... 32767 (0 is positive)
	0000000000000000 = 0
	0000000000000001 = 1
	0000000000000010 = 2
	...
	1000000000000000
	1000000000000001
	1000000000000010
	...
	1111111111111111
	
	signed
	000 = 0
	001 = 1
	010 = 2
	011 = 3		//overflow here!
	100 = -4
	101 = -3
	110 = -2
	111 = -1
	
	unsigned
	000 = 0
	001 = 1
	010 = 2
	011 = 3
	100 = 4
	101 = 5
	110 = 6
	111 = 7
	*/
	return 0;
}