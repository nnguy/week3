#include <iostream>
#include <string>
using namespace std; 

int main() {
	const int NUMCLASSES = 5; 
	string lettergrades[NUMCLASSES]; 
	string input; 

	for (int i = 0; i <= 4; i++) {
		cout << "Please input the grade" << endl; 
		getline(cin, lettergrades[i]); 
	}

	for (int i = 0; i <= 4; i++) {
		cout << lettergrades[i] << endl;
	}

	for (int i = NUMCLASSES - 1; i >= 0; i--) {
		cout << lettergrades[i] << endl;
	}

	string newlettergrades[NUMCLASSES]; 
	for (int i = 0; i < NUMCLASSES; i++) {
		newlettergrades[i] = lettergrades[i]; 
	}
	return 0;
}