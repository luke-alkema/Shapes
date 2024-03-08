#include "Square.h"

Square::Square() : Shape()
{
	sideLength = 0.00;
}

Square::Square(string newColour, double newSideLength) : Shape("Square", newColour)
{
	if (newSideLength >= 0.0)
	{
		sideLength = newSideLength;
	}
	else
	{
		sideLength = 0.00;
	}
}

Square::~Square()
{
	printf("\n\nThe square is squished ...\n");
}

double Square::GetSideLength(void)
{
	return sideLength;
}

bool Square::ChangeSideLength(double newSideLength)
{
	if (newSideLength >= 0.0)
	{
		sideLength = newSideLength;
		return true;
	}
	return false;
}

void Square::Show(void)
{
	printf("\n----------------\n");
	printf("Shape Information\n");
	printf("Name \t: %s\n", GetName().c_str());
	printf("Colour \t: %s\n", GetColour().c_str());
	printf("Side-Length \t: %f cm\n", sideLength);
	printf("Perimeter \t: %f cm\n", Perimeter());
	printf("Area \t: %f square cm\n", Area());
	printf("\n----------------\n");
}

double Square::Perimeter(void)
{
	return (4 * sideLength);
}

double Square::Area(void)
{
	return (sideLength * sideLength); 
}

double Square::OverallDimension(void)
{
	return sideLength;
}

