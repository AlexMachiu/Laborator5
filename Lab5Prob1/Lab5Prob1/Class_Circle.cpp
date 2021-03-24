#include <stdio.h>
#include "Shape.h"
class Circle : public Shape
{
private:	double radius, originX, originY;
public:
	void InitializeCircle(double radius, double originX, double originY)
	{

		this->originX = originX;
		this->originY = originX;
		this->radius = radius;
	}

	double GetArea()
	{
		//3.14159*radius*radius.
		return 3.14159*this->radius*this->radius;
	}

	void GetBoundingBox(double *bbox)
	{
		//Bounding box este de la (x-radius) la (x+radius) 
		//pe Ox și de la (y-radius) la (y+radius) pe Oy.
		bbox[0] = this->originX - this->radius;
		bbox[1] = this->originX + this->radius;
		bbox[2] = this->originY - this->radius;
		bbox[3] = this->originY + this->radius;
	}


	void PrintCircle()
	{
		double bbox[4];
		double area;
		area = GetArea();
		GetBoundingBox(bbox);
		printf("Circle has area %f and bounding box [%f->%f], [%f->%f]\n",
			area, bbox[0], bbox[1], bbox[2], bbox[3]);
	}
};