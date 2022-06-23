#include <iostream>
using namespace std; 

float abso(float); 
bool isEven(int); 
void quadratic(double, double, double); 
float signof(float); 
void showMenu(void);

int main() {
	showMenu();
	
	return 0;
}

void showMenu(void) {
	char input;
	int a, b, c;
	float d;
	double e, f, g;
	do {
		cout << "Math function options \n"
			<< "\t A - absolute value \n"
			<< "\t E - checks if your number is even \n"
			<< "\t S - sign of a number \n"
			<< "\t Q - solution for quadratic equation \n"
			<< "\t X - exit \n"
			<< "Type your choice \n";

		cin >> input;

		switch (input) {
		case 'a':
		case 'A':
			cout << "Input a float " << endl;
			cin >> d;
			cout << abso(d) << endl;
			break;
		case 'e':
		case 'E':
			cout << "Input an integer " << endl;
			cin >> a;
			cout << isEven(a) << endl;
			break;
		case 's':
		case 'S':
			cout << "Input a float " << endl;
			cin >> d;
			cout << signof(d) << endl;
			break;
		case 'q':
		case 'Q':
			cout << "Input 3 doubles " << endl;
			cin >> e >> f >> g;
			quadratic(e, f, g);
			cout << endl;
			break;
		case 'x':
		case 'X':
			break;
		default:
			cout << "Not valid input" << endl;
		}
	} while (input != 'X' && input != 'x');


}

float abso(float x) {
	if (x <= 0)
		return x * -1;
	else
		return x;
}

bool isEven(int x) {
	return x % 2 == 0; 
}

void quadratic(double a, double b, double c) {
	double sol1, sol2;
	if (a == 0) {
		cout << "no solution for a=0";
		return;
	}
	else if (b*b - (4 * a * c) < 0) {
		cout << "no real solutions";
		return;
	}
	else {
		sol1 = (-b + sqrt(b*b - (4 * a * c))) / (2 * a);
		sol2 = (-b - sqrt(b*b - (4 * a * c))) / (2 * a);
		if (sol2 >= sol1)
			cout << sol2 << endl;
		else
			cout << sol1 << endl;
	}
}

float signof(float x) {
	if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
	else
		return 1;
}

