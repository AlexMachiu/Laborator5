#include "Class_Rectangle.cpp"
#include "Class_Triangle.cpp"
#include "Class_Circle.cpp"
#include <stdio.h>
#include "Shape.h"

int main()
{
	Rectangle r;
	r.InitializeRectangle(1, 2, 3, 4);
	r.PrintRectangle();

	Triangle t;
	t.InitializeTriangle(1, 2, 3, 4);
	t.PrintTriangle();

	Circle c;
	c.InitializeCircle(2, 3, 4);
	c.PrintCircle();
	   	
	return 0;

}
