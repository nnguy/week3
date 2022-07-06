#include "Rectangle.h"
#include <string>

Rectangle::Rectangle() {} //:: is the scope resolution operator
Rectangle::Rectangle(double a, double b) {
	length = a;
	width = b;
}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setLength(double l) {
	length = l;
}

void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::getArea() const {
	return length * width;
}
