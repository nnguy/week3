#include <iostream>
#include <string>
#include "Circle.h";

using namespace std; 

const double PI = 3.14159265;

Circle::Circle(double r, string s) {
	radius = r; 
	color = s; 
}

double Circle::getRadius() const {
	return radius; 
}

string Circle::getColor() const {
	return color; 
}

double Circle::getDiameter() const {
	return 2 * radius; 
}

double Circle::getArea() const {
	return PI * radius * radius; 
}

double Circle::getCircumference() const {
	return PI * getDiameter(); 
}

void Circle::setRadius(double r) {
	radius = r; 
}

void Circle::setColor(string s) {
	color = s; 
}