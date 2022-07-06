#include <iostream>
#include "Rectangle.h" //use quotes 
using namespace std;

int main() {
	Rectangle myRectangle, largeRectangle;
	myRectangle.setLength(20);
	myRectangle.setWidth(10);
	largeRectangle.setLength(90);
	largeRectangle.setWidth(110);

	Rectangle* r_ptr = new Rectangle(10, 20);
	cout << r_ptr->getArea() << endl;

}


