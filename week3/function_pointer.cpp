#include <iostream> 
using namespace std; 

int* create_Arr_5(int); 

void printfunc(int[], int); 
int main() {
	int numvalues; 
	int* ptr = nullptr; 
	cout << "Input a value" << endl; 
	cin >> numvalues;
	ptr = create_Arr_5(numvalues); 
	printfunc(ptr, numvalues); 
	return 0; 

}
int* create_Arr_5(int size) {
	int* arr = new int[size]; 
	for (int i = 0; i < size; i++)
		arr[i] = 5; 
	return arr; 
}

void printfunc(int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++)
		cout << arr[i] << endl; 
}