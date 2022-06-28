#include <iostream>
using namespace std; 

int summ(int); 
int sum(int); 

int main() {
	cout << "Enter a positive integer" << endl; 
	int x; 
	cin >> x; 
	cout << summ(x) << endl; 
	return 0;
}

int summ(int n) {
	if (n == 1)
		return 1;
	else
		return n + summ(n - 1); 
}

int sum(int x) {
	static int y = 0; 
	y++
}