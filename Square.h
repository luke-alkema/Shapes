#pragma once
#include "Shape.h"

//const definitions
#define MIN_SQUARE_SIDE_LENGTH 0.00
#define NUM_OF_SIDES_SQUARE 4



/// \class Square
// This below puts in a picture a square. The '\n' stops the text wrapping 
/// <img src="square.jpeg" align="left"/>\n\n\n\n\n\n\n\n\n\n\n\n
/// \brief The purpose of the Square class is to extend from the Shape class and further model a Square
/// 
/// <summary> This class adds onto the Shape class by adding the data-member sideLength. 
///			  The square class adds multiple functions that make use of the side length and number of sides a square has to perform
///			  calculations such as area, perimeter, and the overalldimension, which in a squares case is the sidelength. There are 
///			  also getters and setters for the sidelength data member. 
/// </summary>
/// 
/// \author <i>Luke Alkema</i>
class Square : public Shape
{
private:

	double sideLength; ///< Holds the sidelength of the square, acceptable values are anything greater than 0.00

public:
	/*----------Constructors-------------*/
	Square(); // default square constructor 
	Square(string newColour, double newSideLength);  // constructor that fills the shape data member colour, and square data member sideLength
	/*----------Destructor---------------*/
	virtual ~Square();  //Destructor of the square

	/*--------------Methods--------------*/
	double GetSideLength(void); //accessor for side length attribute
	bool ChangeSideLength(double newSideLength); // mutator for side length attribute

	double GetSideLength(void) const; // const accessor for side length attribute for overloaded operator

	void Show(void); // prints out the shape's name, colour, sidelength, perimeter
	virtual double Perimeter(void);  //returns the perimeter of the square  (cm)
	virtual double Area(void);   //returns area of the square (cm)
	virtual double OverallDimension(void);   // returns the sidelength of the square


	bool operator==(const Square& op2) const;
	const Square& operator=(const Square& op2);

};