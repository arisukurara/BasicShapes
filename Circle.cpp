#include "Circle.h"

Circle::Circle(int x, int y, double r, string n) {
	xCenter = x;
	yCenter = y;
	radius = r;
	setName(n);
	calcArea();
}

int Circle::getX() const {
	return xCenter;
}

int Circle::getY() const {
	return yCenter;
}
double Circle::getRadius() const {
	return radius;
}

void Circle::calcArea() {
	double a = M_PI * (radius * radius);
	setArea(a);
}