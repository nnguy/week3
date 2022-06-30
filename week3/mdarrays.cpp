#include <iostream>
using namespace std; 

const int COLS = 4; 
const int ROWS = 3; 
const int ZED = 5; 

void print2darr(int[][COLS], int);
//void print3darr(int[][COLS][ZED], int); 

int main() {
	int arr_arr[3][4] = { {4,3,2,3},
						  {0,0,1,0},
						  {0,2,4,0}};

	//for (int i = 0; i < 3; i++)
	//	for (int j = 0; j < 4; j++)
	//		cin >> arr_arr[i][j]; 

	print2darr(arr_arr, 3); 

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr_arr[i][j] << " - "; 
		}
		cout << endl; 
	}
	return 0; 
}

void print2darr(int arr[][COLS], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << " ";
		cout << endl; 
	}
}