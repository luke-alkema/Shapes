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
	printf("\nThe square is squished ...\n");
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
	printf("\n-----------------------------------\n");
	printf("Shape Information:\n");
	printf("Name \t\t: %s\n", GetName().c_str());
	printf("Colour \t\t: %s\n", GetColour().c_str());
	printf("Side-Length \t: %5.2f cm\n", sideLength);
	printf("Perimeter \t: %5.2f cm\n", Perimeter());
	printf("Area \t\t: %5.2f square cm\n", Area());
	printf("------------------------------------\n");
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

