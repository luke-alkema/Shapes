#pragma once
#include "Shape.h"

// Const Definitions

#define PI 3.1415926
#define MIN_RADIUS 0.00

/// \class Circle
// This below puts in a picture a square. The '\n' stops the text wrapping 
/// <img src="circle.jpeg" align="left"/>\n\n\n\n\n\n\n\n\n\n\n\n
/// \brief The purpose of the Circle class is to extend from the Shape class and further model a Circle
/// 
/// <summary> This class adds onto the Shape class by adding the data-member radius as well as the PI constant allowing an actual shape to be made from the inheritance relatioship between these 2 classes. 
///			  Circle class adds multiple functions that make use of Pi and the circles radius to perform calculations which can be displayed to the user.
/// </summary>
/// 
/// \see Shape
/// 
/// \author <i>Dylan Shouldice-Jacobs</i>

class Circle : public Shape
{
	private: 
		
		double radius; ///< Holds the radius of the circle, acceptable values are anything greater than 0.00

	public:

		// Constructors
		
		Circle(string colour, double radius); // Instantiates a circle object when parameters are present
		Circle(void);						  // Default circle constructor

		// Decontructors 

		virtual ~Circle(void);  // Deletes an instance of a circle object

		// Methods

		double GetRadius(void);			  // Gets the radius of a circle
		double GetRadius(void) const;     // Gets the radius of a circle
		bool SetRadius(double newRadius); // Sets the radius of a circle, if it is an allowable value

		virtual void Show(void);	      // Shows the current data-members and values of the circle
		virtual double Perimeter(void);	  // Returns the circumfrence of the circle
		virtual double Area(void);		  // Returns the area of the circle
		virtual double OverallDimension(void); // Returns the diameter of the circle

		const Circle& operator=(const Circle& rhs); // Overloaded assignment operator
		bool operator==(const Circle& rhs) const;// Overloaded equality operator


};