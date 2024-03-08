#pragma once
#include "Shape.h"
/*
*	Class   : Circle
*	Purpose : The purpose of this class is to further model the shape of a circle, it is a sub-class that stems from the master-class "Shape".
*			  The master-class defines the name and colour of the shape while circle has a radius, a defining factor of a circle which allows to obtain
*			  Values of the circle that might be useful to us such as the circumfrence, perimeter etc.
*/

#define PI 3.1415926
#define MIN_RADIUS 0.00

class Circle : public Shape
{
	private: 

		double radius; // Holds the radius of the circle, acceptable values are anything > 0.00

	public:

		// Constructors
		
		Circle(string colour, double radius); // Creates a circle object when the colour and radius are present, validates that radius > 0.00
		Circle(void);							  // Default constructor sets the value of radius == 0.00

		// Decontructors 

		virtual ~Circle(void); // Deletes the circle object

		// Methods

		double GetRadius(void);			  // Gets the current value of radius
		bool SetRadius(double newRadius); // Sets the current value of radius and returns true if "newRadius" is > 0.00 else it will return false

		virtual void Show(void);			   // Shows the values of a circle object, radius, circumfrence, area
		virtual double Perimeter(void);		   // Calculates a circle objects total perimeter 
		virtual double Area(void);			   // Calculates a circle objects total area
		virtual double OverallDimension(void); // Calculates the diameter of the circle


};