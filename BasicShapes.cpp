#include <iostream>
#include "Circle.h";
#include "Rectangle.h";
#include "Square.h"

int main()
{
    BasicShape* testArray[5];
    testArray[0] = new Rectangle(25, 10, "Rectangle #1");
    testArray[1] = new Rectangle(75, 50, "Rectangle #2");
    testArray[2] = new Circle(10, 20, 5, "Circle #1");
    testArray[3] = new Circle(5, 5, 10, "Circle #2");
    testArray[4] = new Square(10, "Square");

    for (int i = 0; i < 5; i++) {
        cout << testArray[i]->getName() << endl;
        cout << testArray[i]->getArea() << endl << endl;
    }
}
