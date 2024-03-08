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



// returns copy of the data member colour
string Shape::GetColour(void)
{

}

// returns copy of the data member name
string Shape::GetName(void)
{
	return name;
}

// validates then changes the data member colour
bool Shape::ChangeColour(string colour)
{

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

