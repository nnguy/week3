#include <iostream>
using namespace std; 

void swap(int& a, int& b); 
void bubblesort(int arr[], int size);
void selectionsort(int arr[], int size);


int main() {
	int arr[6] = { 7,2,3,8,9,1 };
	int arrSize = 6; 
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << '-'; 
	}
	cout << endl; 
	bubblesort(arr, arrSize); 
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << '-';
	}
	cout << endl; 
	return 0; 

}

void swap(int& a, int& b) {
	int temp = a; 
	a = b; 
	b = temp; 
}
void bubblesort(int arr[], int size) {
	bool swap_flag;
	do {
		swap_flag = false; 
		for (int count = 0; count < size; count++) { //had to add count < size - 1 
			if (arr[count] > arr[count + 1]) {
				swap(arr[count], arr[count + 1]);
				swap_flag = true; 
			}
		}
	} while (swap_flag); 
}

void selectionsort(int arr[], int size) {
	int startScan; 
	for (startScan = 0; startScan < size - 1; startScan++) {
		int index = startScan; 
		int minIndex = startScan; 
		int minValue = arr[startScan]; 
		for (index = startScan + 1; index < size; index++) {
			if (arr[index] < minValue) {
				minValue = arr[index]; 
				minIndex = index; 
			}
		}
		arr[minIndex] = arr[startScan]; 
		arr[startScan] = minValue; 
	}
}