#ifndef RECTANGLE_H

#define RECTANGLE_H
#include <string>

class Rectangle {
private:
	double length;
	double width;
public:
	//getters 
	Rectangle();
	Rectangle(double a, double b);
	double getLength() const;
	double getWidth() const;
	void setLength(double l);
	void setWidth(double w);
	double getArea() const;
}; 

#endif