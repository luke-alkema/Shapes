#pragma once
#include "Shape.h"

class Square : public Shape
{
private:

	double sideLength;

public:
	/*----------Constructors-------------*/
	Square(); 
	Square(string newColour, double newSideLength);
	/*----------Destructor---------------*/
	~Square();

	/*--------------Methods--------------*/
	double GetSideLength(void); //accessor for side length attribute
	bool ChangeSideLength(double newSideLength); // mutator for side length attribute

	void Show(void); // prints out the shape's name, colour, sidelength, perimeter
	virtual double Perimeter(void);
	virtual double Area(void);
	virtual double OverallDimension(void);

	
};