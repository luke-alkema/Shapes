#pragma once
#include <stdio.h>
#include <string>
#define MAX_COLOUR_LENGTH 10
#define NAME_SIZE 51

using namespace std;


/*
	Name	:	Shape
	PURPOSE	:	The shape class holds the general properties of any shape. The purpose of this shape class is to allow child classes to inherit from it, 
				of which are acual specific shapes. The shape class can change the colour and name of the shape (red, square), and allow users to change
				and/or access the data members name and colour. The class also has 3 pure virtual functions so that child classes can use the concept of them. 
				They must be overridden of course since the methods will change given different shapes. 				
*/
class Shape
{
private:
	/* -------------- ATTRIBUTES ------------ */
	string name;
	string colour;
	
public:

	/* ---------- METHOD PROTOTYPES --------- */

	Shape(string name, string colour);  // Constructor: The given name must be circle, square, or unknown and less than 50 characters, or else name set to unknown.
	Shape(void);		// The default constructor will make the name Unknown, and the colour undefined. 

	string GetColour(void); // returns copy of the data member colour
	
	string GetName(void); // returns copy of the data member name

	bool ChangeColour(string newColour);  // validates then changes the data member colour

	bool ChangeName(string newName); // validates then changes the data member name

	/* ---------- PURE VIRTUAL FUNCTION PROTOTYPES --------- */

	virtual double Perimeter(void) = 0;   //calculates perimeter
	virtual double Area(void) = 0;		//calculates area
	virtual double OverallDimension(void) = 0;    //calculates overalldimension

	/*-------------Function Prototype----------*/
	

};



