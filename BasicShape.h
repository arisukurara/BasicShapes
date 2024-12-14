#pragma once
#include <iostream>
using namespace std;

class BasicShape
{
private:
	double area;
	string name;
	virtual void calcArea() = 0;
public:
	double getArea() const;
	string getName() const;

	void setArea(double a);
	void setName(string n);

	
};

