//prints a multiplication table 

#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
	int row = 0, column = 0;
	int i, j; 
	do {
		cout << "Enter a positive integer for the row" << endl;
		cin >> row;
	} while (row < 0);
	cout << "Enter an integer for the column" << endl; 
	cin >> column;

	//call setw to push the first character, X
	cout << setw(5) << 'X' << setw(5); 

	//the first loop to print out the first row of the table, which is the multiplier
	for (i = 0; i <= column; i++) {
		cout << i << setw(5);
	}
	cout << endl;
	for (i = 0; i <= row; i++) {
		//this line prints out the first column of the table, which shows the multiplier
		cout << i << setw(5);
		
		//this is the loop that prints out the products
		for (j = 0; j <= column; j++) {
			cout << i * j << setw(5);
		}
		cout << endl;
	}

	return 0;
}