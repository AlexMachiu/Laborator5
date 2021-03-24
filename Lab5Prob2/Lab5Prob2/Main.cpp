#include "Class_Rectangle.cpp"
#include "Class_Triangle.cpp"
#include "Class_Circle.cpp"
#include <stdio.h>
#include "Shape.h"


int main()
{
	Rectangle r(1, 2, 3, 4);
	r.PrintRectangle();

	Triangle t(1, 2, 3, 4);
	t.PrintTriangle();

	Circle c(2, 3, 4);
	c.PrintCircle();

	return 0;

}
