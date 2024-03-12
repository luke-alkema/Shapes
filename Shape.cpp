#include "Shape.h"


/// \brief To create a new instance of a shape object when all parameters are present
/// \details <b>Details</b>
/// 
///	 <summary>  When a Shape is being created and all data-members are present in the parameter list, this constructor will check if the name is valid otherwise it is set to "Unknown".
///				Then checks if the colour is valid otherwise the colour is set to "undefined". If their is a valid value for either of those parameters is it set to that value
///	</summary>		 
/// 
/// \param newName - <b>string</b>   : holds the value of the new name for the shape being instantiated
/// \param newColour - <b>string</b> : holds the value of the new colour for the shape being instantiated
/// 
/// \return Since this is a <i>constructor</i> of the shape class, their is no return value
Shape::Shape(string newName, string newColour)
{
	int length = newName.size();
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
	else
	{
		name = "Unknown";
	}

	if (newColour == "red" || newColour == "blue" || newColour == "yellow" || newColour == "purple" || newColour == "pink" || newColour == "orange" || newColour == "undefined")
	{
		colour = newColour;
	}
	else 
	{
		colour = "undefined";
	}
	//else (newColour.length() >= MAX_COLOUR_LENGTH || newColour.length() == 0)
	//{
	//	colour = "undefined";
	//}
}


/// \brief To create a new instance of a shape object when no parameters are present
/// \details <b>Details</b>
/// 
///	 <summary>  When a Shape is being created and no data-members are present in the parameter list, this constructor will set the value of name to "Unknown" and the value of colour to "undefined"
///	</summary>		 
/// 
/// \param none
/// 
/// \return Since this is a <i>constructor</i> of the shape class, their is no return value
Shape::Shape()
{
	name = "Unknown";
	colour = "undefined";
}


/// \brief Is used to access the colour of a shape object
/// \details <b>Details</b> 
/// 
///  <summary>  When an entity needs access to the colour of the shape this method will return a copy of the colour, ensuring the shapes data-member is unchanged
/// </summary>
/// 
/// \param none
/// 
/// \return This method returns a copy of the colour value 
string Shape::GetColour(void)
{
	return colour; //will return a copy of colour
}


/// \brief Is used to access the name of a shape object
/// \details <b>Details</b> 
/// 
///  <summary>  When an entity needs access to the name of the shape this method will return a copy of the name, ensuring the shapes data-member is unchanged
/// </summary>
/// 
/// \param none
/// 
/// \return This method returns a copy of the name value 
string Shape::GetName(void)
{
	return name;
}


/// \brief Is used to change the colour of a Shape object, safely.
/// \details <b>Details</b> 
/// 
///  <summary>  In the case that an untrusted source is changing the colour they can use this to ensure no invalid value make their way in, if it is valid it is set, else the colour is unchanged
/// </summary>
/// 
///  \param newColour - <b>string</b> : holds the value for the new name of the shape
/// 
/// \return This method returns a boolean status code that signifies if the value was changed 
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


/// \brief Is used to change the name of a Shape object, safely.
/// \details <b>Details</b> 
/// 
///  <summary>  In the case that an untrusted source is changing the name they can use this to ensure no invalid value make their way in, if it is valid it is set, else the name is unchanged
/// </summary>
/// 
///  \param newName - <b>string</b> : holds the value for the new name of the shape
/// 
/// \return This method returns a boolean status code that signifies if the value was changed 
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



