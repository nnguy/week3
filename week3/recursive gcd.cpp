#include <iostream>
using namespace std; 

int gcd(int x, int y); 

int main() {
	cout << "Input 2 integers " << endl; 
	int x, y; 
	cin >> x >> y; 
	cout << gcd(x, y) << endl; 

}

int gcd(int x, int y) {
	if (x < y) {
		cout << "x is " << x << " and y is " << y << endl; 
		swap(x, y);
		cout << "Now x is " << x << " and y is " << y << endl; 
	}

	if (y == 0) {
		cout << "y is 0 and x is returned, x is " << x << endl;
		return x;
	}
	else
		return gcd(x % y, y); 
}