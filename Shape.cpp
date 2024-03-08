#include "Shape.h"


Shape::Shape(string newName, string newColour)
{
	int length = newName.length();
	if (length >= NAME_SIZE || length == 0)
	{
		name = "Unknown";
	}
	else if (newName == "Circle")
	{
		name = "Circle";
	}
	else if (newName == "Square")
	{
		name = "Square";
	}

}


Shape::Shape()
{
	name = "Unknown";
	colour = "undefined";
}


// returns copy of the data member newColour
string Shape::GetColour(void)
{
	return colour; //will return a copy of colour
}

// returns copy of the data member name
string Shape::GetName(void)
{
	return name;
}

// validates then changes the data member newColour
bool Shape::ChangeColour(string newColour)
{
	bool retCode = false;
	int length = 0;
	if (newColour.length() >= MAX_COLOUR_LENGTH || newColour.length() == 0)
	{
		retCode = false;
	}
	else if (newColour == "red" || newColour == "blue" || newColour == "yellow" || newColour == "purple" || newColour == "pink" || newColour == "orange" || newColour == "undefined")
	{
		colour = newColour;
		retCode = true;
	}
	return retCode;
}

// validates then changes the data member name
bool Shape::ChangeName(string newName) 
{
	bool retCode = true;
	int length = newName.length();
	if (length >= NAME_SIZE || length == 0)
	{
		retCode = false;
	}
	else if (newName == "Circle")
	{
		name = "Circle";
	}
	else if (newName == "Square")
	{
		name = "Square";
	}
	return retCode;
}

