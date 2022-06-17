#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime> //for using the time function
using namespace std; 

int main() {
	unsigned seed = time(0); 
	cout << time(0) << endl; 

	srand(seed); 
	for (int i = 0; i < 52; i++) {
		cout << rand() % 13 + 1 << endl; 
	}
	return 0;
}