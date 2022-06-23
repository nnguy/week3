#include <iostream>
#include <cmath>
using namespace std; 

void func(int, char); 
int func(char, double);
int mini(int, int);
void max_min(float &, float &); 

int main() {
	int x = 2; 
	char y = '3';
	double z = 4.0; 
	int a, b, c; 
	float i, j; 
	//cout << "Type in values for a, b, c" << endl; 
	//cin >> a >> b >> c;
	//cout << "The minimum is " << mini(mini(a, b), c) << endl;

	cout << "Input 2 floats " << endl; 
	cin >> i >> j; 
	max_min(i, j); 
	cout << "The max is " << i << " and the min is " << j << endl; 

}

void func(int x, char y) {
	cout << x << y << endl; 
}

int func(char x, double y) {
	cout << x << y << endl; 
	return 0;
}

int mini(int x, int y) {
	if (x > y)
		return y;
	else
		return x; 
}

void max_min(float& max, float& min) {
	float temp = 0; 
	if (max < min) {
		temp = max; 
		max = min; 
		min = temp; 
	}

}