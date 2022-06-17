#include <iostream>
using namespace std; 

int main() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++)
			cout << "*";
		cout << endl;
	}

	int row, column; 
	cout << "Input your row" << endl; 
	cin >> row; 
	cout << "Input your column" << endl; 
	cin >> column; 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << "*";
		}
		cout << endl;
	}

	
}	