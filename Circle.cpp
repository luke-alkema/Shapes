#include "Circle.h"


/// \brief To create a new instance of a circle object when all parameters are present
/// \details <b>Details</b>
/// 
///	 <summary>  When a circle is being created and the colour and radius have been passed, this constructor calls upon the Shape's constructor
///			    to create the shape inside of the circle, as well as name it "Circle" and initialize the colour chosen.<br> Then the Circle constructor verifies
///			    that the newRadius is within allowable values, or else radius is set to minimum radius
///	</summary>		 
/// 
/// \param newColour - <b>string</b> : holds the value of the new colour for the circle being instantiated
/// \param newRadius - <b>double</b> : holds the value of the new radius for the circle being instantiated
/// 
/// \return Since this is a <i>constructor</i> of the circle class, their is no return value
/// \see ~Circle()
/// \see Shape(string, string)
Circle::Circle(string newColour, double newRadius) : Shape("Circle", newColour)
{
	if (newRadius <= MIN_RADIUS) // Radius is less then 0.00, set to 0.00, else allow input value
	{
		radius = MIN_RADIUS; 
	}
	else
	{
		radius = newRadius;
	}
}


/// \brief To create a new instance of a circle object when no parameters are present
/// \details <b>Details</b>
/// 
///  <summary>  When a circle is being created with no preset values, this constructor chains with Shape's default constructor to set the name to "Unknown" and colour to "undefined".
///				Then this constructor sets the inital radius to 0.00 the minimum radius
///	</summary>		
/// 
/// \param none
/// 
/// \return Since this is a <i>constructor</i> of the circle class, their is no return value
/// \see ~Circle()
/// \see Shape()
Circle::Circle(void) : Shape("Circle", "undefined")
{
	radius = MIN_RADIUS; 
}


/// \brief Is called upon when a circle object needs to be deleted, when it loses scope inside the program.
/// \details <b>Details</b> 
/// 
/// <summary>   Will output a message singyfying that the Circle object has been destroyed, confirming it is no longer in memory
/// </summary>
/// 
/// \param none
/// 
/// \return Since this is a <i>destructor</i> of the circle class, their is no return value
/// \see Circle(string, double)
/// \see Circle()
Circle::~Circle(void)
{
	printf("\nThe circle is broken  ...\n");
}


/// \brief Is used when a part of the program needs access to this circles radius it will return it to them
/// \details <b>Details</b> 
/// 
///  <summary>   In the case that a entity foriegn to the circle class would like to view or use the radius of a circle, this method gives them access
/// </summary>
/// 
/// \param none
/// 
/// \return This method returns the value of the radius of the circle this was invoked on
double Circle::GetRadius(void)
{
	return radius;
}



double Circle::GetRadius(void) const
{
	return radius;
}


/// \brief Is used when a entity outside of this class wants to change this circles radius. Ensures no invalid values are allowed
/// \details <b>Details</b> 
/// 
///  <summary>  In the case that the radius needs to be changed by an untrusted source, this method allows them to without accepting invalid radius values
/// </summary>
/// 
///  \param newRadius - <b>double</b> : holds the value of the new radius for the circle being updated
/// 
/// \return This method returns a boolean status code that signifies if the value was changed 
bool Circle::SetRadius(double newRadius)
{
	bool retCode = true;
	if (newRadius <= MIN_RADIUS) // If new radius value is less then 0.00, set status to false, else accept new value and return status true
	{
		retCode = false;
	}
	else
	{
		radius = newRadius;
	}
	return retCode;
}


/// \brief Used to display all values related to the circle object, name, colour, radius
/// \details <b>Details</b> 
/// 
///  <summary>  Shows each of the data-members related to a circle object, in a format that makes sense to a person
/// </summary>
/// 
///  \param none
/// 
/// \return nothing
void Circle::Show(void)
{
	printf("\n------------------------------------\n");
	printf("Shape Information: \n");
	printf("Name  \t\t: %s\n", GetName().c_str());
	printf("Colour \t\t: %s\n", GetColour().c_str());
	printf("Radius \t\t: %5.2f cm\n", radius);
	printf("Circumfrence  \t: %5.2f cm\n", Perimeter());
	printf("Area  \t\t: %5.2f square cm\n", Area());
	printf("------------------------------------\n");
}


/// \brief Calculates the circles permimeter 
/// \details <b>Details</b> 
/// 
///	 <summary>  Goes through the equation to obtain a circles perimeter, 2 * PI * Radius, 
///			    if Radius == 5, this method would return about 31.4
/// </summary>
/// 
///  \param none
/// 
/// \return returns the perimeter as a double
double Circle::Perimeter(void)
{
	double perimeter = 0.0;
	perimeter = 2 * PI * radius;
	return perimeter;
}


/// \brief Calcultes the circles area
/// \details <b>Details</b> 
/// 
///  <summary>  Goes through the equation to obtain a circles area, PI * (Radius ^ 2), 
///			    if Radius == 5, this method would return about 78.5
/// </summary>
/// 
///  \param none
/// 
/// \return returns the area as a double
double Circle::Area(void)
{
	double area = 0.0;
	area = PI * (radius * radius);
	return area;
}


/// \brief Calculates the circle diameter
/// \details <b>Details</b> 
/// 
///  <summary>  Goes through the equation to obtain a circles diameter, Radius * 2, 
///			    if Radius == 5, this method would return 10.0
/// </summary>
/// 
///  \param none
/// 
/// \return returns the diameter as a double 
double Circle::OverallDimension(void)
{
	return radius * 2;
}


/// \brief Overloaded addition operator for the circle class
/// \details <b>Details</b> 
/// 
///  <summary>  Creates a new circle object to hold the resultant circle. New radius is the sum of the two circle's radii.
///				While the colour of the new circle is set to the LHS circle's colour.
/// </summary>
/// 
///  \param     rhs - <b>const Circle&</b> : The circle object that is being added to the LHS circle, also passed as a constant by reference ensuring it is not changed.
/// 
/// \return returns the new circle object that is the sum of lhs + rhs. 
Circle Circle::operator+(const Circle& rhs)
{
	Circle temp;

	temp.radius = this->radius + rhs.GetRadius();
	temp.ChangeColour(this->GetColour());

	return temp;
}


/// \brief Overloaded multiplication operator for the circle class
/// \details <b>Details</b> 
/// 
///  <summary>  Creates a new circle object to hold the resultant circle. New radius is the product of the two 'circle's radii.
///				While the colour of the new circle is set to the RHS circle's colour.
/// </summary>
/// 
///  \param     rhs - <b>const Circle&</b> : The circle object that is being multiplied with the LHS circle, also passed as a constant by reference ensuring it is not changed.
/// 
/// \return returns the new circle object that is the product of lhs * rhs. 
Circle Circle::operator*(const Circle& rhs)
{
	Circle temp;

	temp.radius = this->radius * rhs.GetRadius();
	temp.ChangeColour(rhs.GetColour());

	return temp;
}


/// \brief Overloaded assignment operator for the circle class
/// \details <b>Details</b> 
/// 
///  <summary>  The circle object that this operator was called upon (LHS) will gain the values of the RHS circle. Which is the radius and the colour
/// </summary>
/// 
///  \param     rhs - <b>const Circle&</b> : The circle object that has the values to be put inside the LHS operand, also passed as a constant by reference ensuring it is not changed.
/// 
/// \return returns the lhs circle object that has been updated with the values of the rhs circle object.
const Circle& Circle::operator=(const Circle& rhs)
{
	this->radius = rhs.GetRadius();
	this->ChangeColour(rhs.GetColour());

	return *this;
}


/// \brief Overloaded equality operator for the circle class
/// \details <b>Details</b> 
/// 
///  <summary>  This will test the values of the LHS circle object and the RHS circle object to see if they are equal. 
/// </summary>
/// 
///  \param     rhs - <b>const Circle&</b> : The circle object that has the values to be tested against the LHS values, also passed as a constant by reference ensuring it is not changed.
/// 
/// \return returns true or false depending on if the two circles are equal or not.
bool Circle::operator==(const Circle& rhs) const
{
	//  Checks if the colours are equal using == which will result in 1 or 0, then calls upon the areAlmostEqual to check if radius are equal properly.
	//  Also resulting in a 1 or 0
	return (this->GetColour() == rhs.GetColour()) && areAlmostEqual(this->radius, rhs.radius); 
}
