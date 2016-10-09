#include <iostream>
using namespace std;

print(int a[10][8]){
	for (int i = 0; i < 10; i++){
		for(int j = 0; j < 8; j++)
			cout << a[i][j];
		cout << '\n';
	}
}

void setAll(int x[10][8], int val){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 8; j++)
			x[i][j] = val;
	}
}

void setCol(int x[10][8], int col, int val){
	for(int i = 0; i < 10; i++)
		x[i][col] = val;
}

void setRow(int x[10][8], int row, int val){
	for(int i = 0; i < 8; i++)
		x[row][i] = val;
}

void rect(int x[10][8], int row, int col, int h, int w, int val){
	for(int i = row; i < row+h; i++){
		for(int j = col; j < col + w; j++)
			x[i][j] = val;
	}
}

int count2(int x[10][8], bool visited[10][8], int target, int row, int col){
	if (row < 0 || row >= 10 || col < 0 || col >= 8)
		return 0;
	if(visited[row][col])
		return 0;
	visited[row][col] = true;
	if(x[row][col] != target)
		return 0;
	return 1 + 
		count2(x, visited, target, row, col+1) + 
		count2(x, visited, target, row, col-1) + 
		count2(x, visited, target, row+1, col) + 
		count2(x, visited, target, row-1, col);
	
}

int count(int x[10][8], int target, int row, int col){
	bool visited[10][8] = {false};
	count2(x, visited, target, row, col);
}





int main()
{
	int b[10][8] = {	//10 down, 8 across
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0}
	};
	
	// in b[10][8] = [0]; // Same!
	
	setAll(b, 1); // set all elements to 1
	setRow(b,3,5); // set all elements in row 3 to 5
	setCol(b,4,2); // set all elements in col 4 to 2
	print(b);
	cout << count(b, 1, 9, 7) << '\n'; // count how many adjacent 'pixels' are the same color
	cout << count(b, 2, 3, 4);
	//fill(b, 3, 3, 9); // starting at location (3,3) change all pixels to 9
	
}