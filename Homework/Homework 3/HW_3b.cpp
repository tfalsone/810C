/*
	Name: Thomas Falsone
	Date: 9/23/16
	EE 810C
*/

#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;
	
	// Initialize original and final matrices
	double matrix[row][col] = { {0.0},{0.0} };
	double matrix2[row+1][col+1] = {{0},{0}};
	
	// Read in user input
	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
			matrix2[i][j] = matrix[i][j];
		}
		cout << '\n';
	}
	
	// Print original matrix
	cout << "Initial matrix" << '\n';
	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++)
			cout << matrix[i][j] << '\t';
		cout << '\n';
	}
	
	double sum_col[row] = {0};
	double sum_row[col+1] = {0};
	
	// Input numbers into sum_col matrix
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			sum_col[i] += matrix[i][j];
		}
	}
	
	// Add sum_col into matrix2
	for(int i = 0; i < row; i++){
		matrix2[i][col] = sum_col[i];
	}
	
	// Input numbers into sum_row matrix
	for(int i = 0; i < col + 1; i++){
		for(int j = 0; j < row; j++)
			sum_row[i] += matrix2[j][i];
	}
	
	// Add sum_row into matrix2
	for(int i = 0; i < col+1; i++){
		matrix2[row][i] = sum_row[i];
	}
	
	// Print final matrix
	cout << '\n' << "Final matrix" << '\n';
	for (int i = 0; i < row+1; i++){
		for(int j = 0; j < col+1; j++)
			cout << matrix2[i][j] << '\t';
		cout << '\n';
	}
	
}