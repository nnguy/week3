#include <iostream>
#include <iomanip>
using namespace std; 

void printGreeting() {
	cout << "Hello World" << endl; 
}

void printSquare(int n); 
void printSquare(int); //this is legal too!!!!!!!!! 
void printHourglass(int n); 
double inches_to_feet(int n);
void draw_rectangle(int, int, char); 


int main() {
	int height, width, inches; 
	cout << "Input inches "; 
	cin >> inches;
	cout << inches_to_feet(inches = 6) << endl; 

	return 0;
}

void printSquare(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << left << setw(3) << '*' ;
		}
		cout << endl;
	}
}

double inches_to_feet(int n) {
	double result = 0; 
	return result = n / static_cast<double>(12); 

}

void draw_rectangle(int length, int width, char symb) {
	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= length; j++) {
			cout << symb; 
		}
		cout << endl; 
	}
}