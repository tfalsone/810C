#include <iostream>
#include <fstream>
using namespace std;

class Matrix {
	private:
		int x[5][4];
		ofstream f;
	public:
		Matrix(int val, const char s[]) : f(s) {
			
			for(int i = 0; i < 5; i++)
				for(int j = 0; j < 4; j++)
					x[i][j] = val;
		}
		// this destructor is optional. Program defaults to this regardless
		~Matrix() : ~f() {
			cout << "the file is about to be closed";
		} // destructor automatically closes the file
};