#include <iostream>
using namespace std; 

const int SIZE = 5; 

int main() {
	double x = 1.5;

	//declare a pointer y and point it to x 
	double* y = &x;

	//increase the value of x by 1 using the pointer 
	(*y)++;

	double arr[SIZE] = { 2,4,6,8,10 }; 
	///prints the element in index 1
	cout << *(arr + 1) << endl; 

	//also prints that is in the next memory address or the next space 
	cout << *(y++) << endl; 
	cout << *y << endl; 
	cout << *(++y) << endl; 

	//the two ways to declare a pointer to point to an array 
	double* ptr_arr = arr; 
	double* ptr = &arr[0]; 

	//print all the elements of arr using only the pointer and pointer arithmetic 
	for (int i = 0; i < SIZE; i++) {
		cout << *(arr + i) << endl; 
	}

	for (int i = 0; i < SIZE; i++) {
		cout << *ptr << endl;
		ptr++;
	}

}
