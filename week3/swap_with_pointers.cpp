#include <iostream>
using namespace std; 

//

void swap(int*, int*); 

int main() {
	int* a = new int(5); 
	int* b = new int(10); 
	int c = 6; 
	int d = 11; 
	cout << *a << endl << *b << endl;
	swap(a, b); 
	cout << *a << endl << *b << endl; 
	swap(&c, &d); 
	return 0; 
}

//can swap pointers OR pass-by-reference 
void swap(int* x, int* y) {
	int temp = *x; 
	*x = *y; 
	*y = temp; 
}