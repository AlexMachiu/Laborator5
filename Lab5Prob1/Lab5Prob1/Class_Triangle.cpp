#include <stdio.h>
#include "Shape.h"

class Triangle : public Shape
{
private:	double pt1X, pt2X, minY, maxY;
public:
	void InitializeTriangle(double pt1X, double pt2X, double minY, double maxY)
	{
		this->maxY = maxY;
		this->minY = minY;
		this->pt1X = pt1X;
		this->pt2X = pt2X;
	}

	double GetArea()
	{
		//Aria sa este(pt2X - pt1X)*(maxY - minY) / 2
		return  (this->pt2X - this->pt1X) * (this->maxY - this->minY) / 2;
	}

	void GetBoundingBox(double *bbox)
	{
		//Bounding box este de la pt1X la pt2X pe Ox și de la minY la maxY pe Oy.
		bbox[0] = this->pt1X;
		bbox[1] = this->pt2X;
		bbox[2] = this->minY;
		bbox[3] = this->maxY;
	}

	void PrintTriangle()
	{
		double bbox[4];
		double area;
		area = GetArea();
		GetBoundingBox(bbox);
		printf("Triangle has area %f and bounding box [%f->%f], [%f->%f]\n",
			area, bbox[0], bbox[1], bbox[2], bbox[3]);
	}


};