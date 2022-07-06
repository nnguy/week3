
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
using namespace std; 

class Circle{
private:
	double radius; 
	string color; 

public:
	Circle(double, string);
	double getRadius() const; 
	string getColor() const; 
	double getDiameter() const; 
	double getArea() const; 
	double getCircumference() const; 
	void setRadius(double ); 
	void setColor(string ); 
};
#endif // !CIRCLE_H

