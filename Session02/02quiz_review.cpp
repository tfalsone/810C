#include<iostream>
#include<cstdint>
using namespace std;

/* review for quiz 1
C++11
*/

int main(){
	int a; //size??
	a = -5; // default is different on different compilers
	uint32_t x; // unsigned 32 bit int
	int64_t y; // signed 64 bit int
	
	enum Color {BLACK = 0, WHITE = 1};
	Color x;
	x = BLACK;
	
	enum class Color2 {RED, BLUE};
	Color2 y;
	y = Color2::RED;
}