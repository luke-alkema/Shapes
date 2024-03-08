#include "Circle.h"


/*
*	Description :	Creates a Circle object when the colour and radius are predetermined. It calls on the Shape constructor to instantiate the "name" and "colour" data-members.
*					Then the circle constructor validates that the radius is in acceptable values
* 
*	Parameters  :	string newColour - A string of max size 10 that holds the english word for the shape's colour
*					double newRadius - A floating point variable that holds the value of radius			  
*	Returns     :	VOID
*/
Circle::Circle(string newName, string newColour, double newRadius) : Shape(newName, newColour)
{

}


/*
*	Description :	Creates a Circle object when no parameters are present. It calls on the Shape constructor to instantiate the "name" and "colour" data-members to default values.
*					Then the circle constructor sets radius to 0.00
*	Parameters  :   VOID
*	Returns     :	VOID
*/
Circle::Circle() : Shape()
{

}


/*
*	Description : Frees up and destroys Circle objects
*	Parameters  : VOID
*	Outputs     : message
*	Returns     : VOID
*/
Circle::~Circle()
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
	return 0.0;
}


/*
*	Description : Will set this circles raidus to be the value of newRadius, if newRadius is >= 0.00 else 
*	Parameters  :
*	Returns     :
*/
bool Circle::SetRadius(double newRadius)
{
	return false;
}

/*
*	Description :
*	Parameters  :
*	Returns     :
*/
void Circle::Show(void)
{
}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::Perimeter(void)
{
	return 0.0;
}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::Area(void)
{
	return 0.0;
}


/*
*	Description :
*	Parameters  :
*	Returns     :
*/
double Circle::OverallDimension(void)
{
	return 0.0;
}

