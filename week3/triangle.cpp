#include <iostream>
using namespace std; 

double triangle_perimeter(double, double, double); 

int main() {
	double x, y, z; 
	cout << triangle_perimeter(1.0, 2.0, 3.0) << endl; 
	cin >> x >> y >> z; 
	cout << triangle_perimeter(x, y, z); 
	return 0; 
}

double triangle_perimeter(double a, double b, double c) {
	return a + b + c; 
}