#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape
{
private: double minX, maxX, minY, maxY;
public:
	Rectangle(double stg_jos, double stg_sus, double dr_jos, double dr_sus)
	{
		minX = stg_jos;
		maxX = stg_sus;
		minY = dr_jos;
		maxY = dr_sus;
	}

	double GetArea()
	{
		//(maxX-minX)*(maxY-minY).
		return (this->maxX - this->minX) * (this->maxY - this->minY);

	}


	void GetBoundingBox(double *bbox)
	{
		//Bounding box este de la minX la maxX pe Ox și de la minY la maxY pe Oy.
		bbox[0] = this->minX;
		bbox[1] = this->maxX;
		bbox[2] = this->minY;
		bbox[3] = this->maxY;
	}

	void PrintRectangle()
	{
		double bbox[4];
		double area;
		area = GetArea();
		GetBoundingBox(bbox);
		printf("Rectangle has area %f and bounding box [%f->%f], [%f->%f]\n",
			area, bbox[0], bbox[1], bbox[2], bbox[3]);
	}
};