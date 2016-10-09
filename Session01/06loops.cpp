#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	while (count < 10){ // count = 0 1 2 3 4 5 6 7 8 9 10
		cout << count << endl;
		count ++;
	}
	
	for (int i = 0; i < 10; i++)
		cout << i;
	
	cout << endl;
	
	for (int i = 1; i < 1024; i = i*2) // 1 2 4 8 ... 512
		cout << i << endl;;
	for (int i = 0; i < 16; i = i*2) // 0000000000000
		cout << i << endl;
	
	//+ - * / %
	//x += 2 ==> x = x + 2
	//x += 3-15 ==> 3-15 first, then add to x
	//x -=2; x *= 2; x /= 2' x %= 2;
	
	for (int i = 100; i>0; i *= 2) // 100 200 400 ... OVERFLOW (becomes negative, quits)
		cout << i;
	for (int i = 100; i > 0; i++) // 100 101 102 103 104 ....
		cout << i;
	for (int i = 100; i>0; i /= 3) // 100 33 11 3 1
		cout << i;
	for (int i = 100; i>0; i /= 3+1) // 100 25 6 1
		cout << i;
	for (int i = 100; i<0; i--) // nothing
		cout << i;
}