#include "Circle.h"


/*
*	Description :	Creates a Circle object when the colour and radius are predetermined. It calls on the Shape constructor to instantiate the "name" and "colour" data-members.
*					Then the circle constructor validates that the radius is in acceptable values
* 
*	Parameters  :	string newColour - A string of max size 10 that holds the english word for the shape's colour
*					double newRadius - A floating point variable that holds the value of radius			  
*	Returns     :	VOID
*/
Circle::Circle(string newColour, double newRadius) : Shape("Circle", newColour)
{
	if (newRadius >= MIN_RADIUS)
	{
		radius = MIN_RADIUS;
	}
	else
	{
		radius = newRadius;
	}
}


/*
*	Description :	Creates a Circle object when no parameters are present. It calls on the Shape constructor to instantiate the "name" and "colour" data-members to default values.
*					Then the circle constructor sets radius to 0.00
*	Parameters  :   VOID
*	Returns     :	VOID
*/
Circle::Circle(void) : Shape()
{
	radius = MIN_RADIUS;
}


/*
*	Description : Frees up and destroys Circle objects
*	Parameters  : VOID
*	Outputs     : message
*	Returns     : VOID
*/
Circle::~Circle(void)
{
	printf("The circle is broken  ...\n");
}


/*
*	Description : Will get the value of the radius that this circle has
*	Parameters  : VOID
*	Returns     : the value of the cirles radius
*/
double Circle::GetRadius(void)
{
	return radius;
}


/*
*	Description : Will set this circles raidus to be the value of newRadius, if newRadius is >= 0.00 else 
*	Parameters  :
*	Returns     :
*/
bool Circle::SetRadius(double newRadius)
{
	bool retCode = true;
	if (newRadius >= MIN_RADIUS)
	{
		retCode = false;
	}
	else
	{
		radius = newRadius;
	}
	return retCode;
}

/*
*	Description :
*	Parameters  :
*	Returns     :
*/
void Circle::Show(void)
{
	printf("\n----------------\n");
	printf("Name \t: %s\n", this->GetName());
	printf("Colour \t: %s\n", this->GetColour());
	printf("Colour \t: %d\n", GetRadius());
	printf("Colour \t: %d\n", GetRadius());

}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::Perimeter(void)
{
	double perimeter = 0.0;
	perimeter = 2 * PI * radius;
	return perimeter;
}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::Area(void)
{
	double area = 0.0;
	area = PI * (radius * radius);
	return area;
}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::OverallDimension(void)
{
	return radius * 2;
}

