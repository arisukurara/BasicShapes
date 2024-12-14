#pragma once
#include "BasicShape.h"
class Rectangle : public BasicShape {
private:
	double length;
	double width;
	void calcArea() override;

public:
	Rectangle(double l, double w, string n = "Rectangle");
	double getLength() const;
	double getWidth() const;
	
};

