#include <iostream>
using namespace std; 

int main() {
	int* x = new int(5); //new returns the address space of the newly allocated space on the heap reserved for this int, which has 5 in it. 
	cout << *x << endl;
	*x = 6; //
	cout << *x << endl;

	int* arr = new int[25];

	for (int i = 0; i < 25; i++)
		arr[i] = i; 
	for (int i = 0; i < 25; i++)
		cout << arr[i] << endl;
}
