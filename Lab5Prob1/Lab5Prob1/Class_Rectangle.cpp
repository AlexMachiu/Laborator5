#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape
{
private: double minX, maxX, minY, maxY;
public:
	void InitializeRectangle(double minX, double maxX, double minY, double maxY)
	{
		this->minX = minX;
		this->maxX = maxX;
		this->maxY = maxY;
		this->minY = minY;
	}

	double GetArea()
	{
		//(maxX-minX)*(maxY-minY).
		return (this->maxX - this->minX) * (this->maxY - this->minY);

		/*
			am folosit this in loc de parametru pentru ca este o scriere mai simpla decat  daca scriu
			cu r. in metoda si cand o apelez in main. Si asa am putut sa fac si cu Shape sa fie comune,
			deoarece interfata trebuie sa fie o clasa de baza pentru TOATE formele geometrice si nu
			puteam sa ii pasez un anumit obiect de tip Circle, Triangle sau Rectangle. Trebuie sa fie
			ceva general. Altfel nu mai avea niciun sens practic interfata.

		*/

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