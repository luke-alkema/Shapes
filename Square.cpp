#include "Square.h"


/// \brief To create a new instance of a square object when no parameters are present
/// \details <b>Details</b>
/// 
///  <summary>  When a square is being created with no preset values, this constructor chains with Shape's default constructor to set the name to "Unknown" and colour to "undefined".
///				Then this constructor sets the inital sidelength to 0.00, the minimum sideLength
///	</summary>		
/// 
/// \param none
/// 
/// \return Since this is a <i>constructor</i> of the square class, their is no return value
/// \see ~Square()
/// \see Shape()
Square::Square() : Shape()
{
	sideLength = MIN_SQUARE_SIDE_LENGTH;
}

/// \brief To create a new instance of a square object when all parameters are present(colour, sidelength)
/// \details <b>Details</b>
/// 
///	 <summary>  When a square is being created and the colour and sideLength have been passed, this constructor calls upon the Shape's constructor
///			    to create the shape inside of the square, as well as name it "Square" and initialize the colour chosen.<br> Then the Square constructor verifies
///			    that the newSideLength is within allowable values, or else sideLength is set to minimum sideLength
///	</summary>		 
/// 
/// \param newColour - <b>string</b> : holds the value of the new colour for the square being instantiated
/// \param newSideLength - <b>double</b> : holds the value of the new sideLength for the square being instantiated
/// 
/// \return Since this is a <i>constructor</i> of the square class, their is no return value
/// \see ~Square()
/// \see Shape(string, string)
Square::Square(string newColour, double newSideLength) : Shape("Square", newColour)
{
	if (newSideLength >= MIN_SQUARE_SIDE_LENGTH)
	{
		sideLength = newSideLength;
	}
	else
	{
		sideLength = MIN_SQUARE_SIDE_LENGTH;
	}
}


/// \brief Is called upon when a square object needs to be deleted, when it loses scope inside the program.
/// \details <b>Details</b> 
/// 
/// <summary>   Will output a message signifing that the Square object has been destroyed, confirming it is no longer in memory
/// </summary>
/// 
/// \param none
/// 
/// \return Since this is a <i>destructor</i> of the square class, their is no return value
/// \see Square(string, double)
/// \see Square()
Square::~Square()
{
	printf("\nThe square is squished ...\n");
}





/// \brief Is used when a part of the program needs access to this squares sideLength it will return it to them
/// \details <b>Details</b> 
/// 
///  <summary>   In the case that a entity foriegn to the circle class would like to view or use the sideLength of a square, this method gives them access
/// </summary>
/// 
/// \param none
/// 
/// \return This method returns the value of the sideLength of the square this was invoked on
double Square::GetSideLength(void)
{
	return sideLength;
}


/// \brief Is used when a overloaded operator needs access to this squares sideLength it will return it to them
/// \details <b>Details</b> 
/// 
///  <summary>   In the case that a overloaded operator in the circle class would like to view or use the sideLength of a square, this method gives them access
/// </summary>
/// 
/// \param none
/// 
/// \return This method returns the value of the sideLength of the square this was invoked on
double Square::GetSideLength(void) const
{
	return sideLength;
}

/// \brief Is used when a entity outside of this class wants to change this squares sideLength. Ensures no invalid values are allowed
/// \details <b>Details</b> 
/// 
///  <summary>  In the case that the sideLength needs to be changed by an untrusted source, this method allows them to change it without accepting invalid sideLength values
/// </summary>
/// 
///  \param newSideLength - <b>double</b> : holds the value of the new sideLength for the square being updated
/// 
/// \return This method returns a boolean status code that signifies if the value was changed 
bool Square::ChangeSideLength(double newSideLength)
{
	if (newSideLength >= MIN_SQUARE_SIDE_LENGTH)
	{
		sideLength = newSideLength;
		return true;
	}
	return false;
}


/// \brief Used to display all values related to the square object: name, colour, sideLength 
/// \details <b>Details</b> 
/// 
///  <summary>  Shows each of the data-members related to a square object, in a format that makes sense to a person
/// </summary>
/// 
///  \param none
/// 
/// \return nothing
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


/// \brief Calculates the squares permimeter 
/// \details <b>Details</b> 
/// 
///	 <summary>  Goes through the equation to obtain a squares perimeter, 4 * sideLength. 
///			    If sideLength == 5, this method would return 20
/// </summary>
/// 
///  \param none
/// 
/// \return returns the perimeter as a double
double Square::Perimeter(void)
{
	return (NUM_OF_SIDES_SQUARE * sideLength);
}


/// \brief Calcultes the squares area
/// \details <b>Details</b> 
/// 
///  <summary>  Goes through the equation to obtain a squares area, sideLength * sideLength, 
///			    if sideLength == 5, this method would return 25
/// </summary>
/// 
///  \param none
/// 
/// \return returns the area as a double
double Square::Area(void)
{
	return (sideLength * sideLength); 
}


/// \brief Returns the squares sideLength
/// \details <b>Details</b> 
/// 
///  <summary>  Returns the SideLength of the square. This overalldimension method is identical to the getSideLength method.
/// </summary>
/// 
///  \param none
/// 
/// \return returns the sideLength as a double 
double Square::OverallDimension(void)
{
	return sideLength;
}

bool Square::operator==(const Square& op2) const
{
	//  Checks if the colours are equal using == which will result in 1 or 0, then calls upon the areAlmostEqual to check if sidelengths are equal properly.
	//  Also resulting in a 1 if equal, or a 0 if not
	return (this->GetColour() == op2.GetColour()) && areAlmostEqual(this->sideLength, op2.sideLength); 
}

const Square& Square::operator=(const Square& op2)
{
	this->ChangeSideLength(op2.GetSideLength());
	this->ChangeColour(op2.GetColour());
	return *this;
}

Square Square::operator+(const Square& op2)
{
	Square temp;
	temp.ChangeColour(this->GetColour());
	temp.ChangeSideLength(this->GetSideLength() + op2.GetSideLength());
	return temp;
}

Square Square::operator*(const Square& op2)
{
	Square temp;
	temp.ChangeColour(op2.GetColour());
	temp.ChangeSideLength(this->GetSideLength() * op2.GetSideLength());
	return temp;
}



