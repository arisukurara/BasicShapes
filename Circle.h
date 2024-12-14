#pragma once
#include "BasicShape.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Circle : public BasicShape {
private:
	int xCenter;
	int yCenter;
	double radius;
	void calcArea() override;
public:
	Circle(int x, int y, double r, string n = "Circle");
	int getX() const;
	int getY() const;
	double getRadius() const;
	
};

