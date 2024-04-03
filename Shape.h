#pragma once
#include <stdio.h>
#include <string>
#define MAX_COLOUR_LENGTH 10
#define NAME_SIZE 51

#define EQUAL 1
#define NOT_EQUAL 0


using namespace std;


/// \class Shape
 // This below puts in a picture a square. The '\n' stops the text wrapping 
/// <img src="shapesclass.jpeg" align="left"/>\n\n\n\n\n\n\n\n\n\n\n\n
/// 
/// \brief The purpose of the Shape class is to model a shape to its most abstract level, its name and its colour. So specialized child classes to inherit from here 
/// 
/// <summary> The shape class holds the general properties of any shape. The purpose of this shape class is to allow child classes to inherit from it, 
///           of which are acual specific shapes.<br> The shape class is in charge of initialising the colour and name of the shape, and allow users to change
///           and /or access the data members name and colour.<br> The class also has 3 pure virtual functions so that child classes can use the concept of them.
///           They must be overridden of course since the methods will change given different shapes.
/// </summary>
/// 
/// \author <i>Luke Akema & Dylan Shouldice-Jacobs</i>
class Shape
{
private:
	/* -------------- ATTRIBUTES ------------ */
	string name;	///< The name of the shape 
	string colour;  ///< The colour of the shape
	
public:

	/* ---------- METHOD PROTOTYPES --------- */

	Shape(string name, string colour);    // Constructor: The given name must be circle, square, or unknown and less than 50 characters, or else name set to unknown.
	Shape(void);						  // The default constructor will make the name Unknown, and the colour undefined. 

	string GetColour(void);				  // returns copy of the data member colour
	
	string GetName(void);				  // returns copy of the data member name

	bool ChangeColour(string newColour);  // validates then changes the data member colour

	bool ChangeName(string newName);      // validates then changes the data member name

	// "const" accessors for the colour attribute of the shape
	string GetColour(void) const;

	int areAlmostEqual(double thisValue, double otherValue); // checks if two doubles are almost equal

	/* ---------- PURE VIRTUAL FUNCTION PROTOTYPES --------- */

/// \brief pure virutal method to be implemented in child-classes, to calculate the respective shapes permimeter
	virtual double Perimeter(void) = 0;			 //calculates perimeter
/// \brief pure virutal method to be implemented in child-classes, to calculate the respective shapes area
	virtual double Area(void) = 0;				 //calculates area
/// \brief pure virutal method to be implemented in child-classes, to calculate the respective shapes trait dimension
	virtual double OverallDimension(void) = 0;   //calculates overalldimension

	/*-------------Function Prototype----------*/
	

};