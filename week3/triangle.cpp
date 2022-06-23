#include <iostream>
using namespace std; 

double triangle_perimeter(double, double, double); 
double average(int, int, int); 
bool isEven(int); 


int main() {
	double x, y, z; 
	cout << triangle_perimeter(1.0, 2.0, 3.0) << endl; 
	cin >> x >> y >> z; 
	cout << triangle_perimeter(x, y, z) << endl;
	double avg = average(x, y, z);
	cout << avg << endl; 
	return 0;
}

double triangle_perimeter(double a, double b, double c) {
	return a + b + c; 
}

double average(int a, int b, int c) {
	return (a + b + c) / static_cast<double>(3); 
}

bool isEven(int x) {
	return x % 2 == 0;
}

