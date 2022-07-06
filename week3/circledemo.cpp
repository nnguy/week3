#include <iostream>
#include <string> 
#include "Circle.h"

using namespace std; 

int main() {
	Circle* c = new Circle(10.2, "Blue"); 
	cout << c->getArea() << endl;
	cout << c->getCircumference() << endl;
	cout << (*c).getColor() << endl; 
	return 0; 
}