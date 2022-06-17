#include <iostream>
using namespace std; 

int main() {
	int integer; 

	cout << "Input an integer " << endl;
	cin >> integer; 
	while (!(integer <= 100 && integer >= 0)) {
		cout << "Invalid input try again \n";
		cin >> integer;
	}

	do {
		cout << "Invalid input try again \n" << endl; 
		cin >> integer; 
	} while (!(integer <= 100 && integer >= 0));
	return 0; 
}