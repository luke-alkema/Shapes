/* 
	NAME	:	myShape.cpp

	PURPOSE :	This program runs through the uses of the Shapes class, 
				as well as the Shape's children Circle and Square. We dynamiclly instantiate a square and a circle,
				the values for the Shape's come from the pre-defined set of values given in the requirements, colour, radius, side length. We then display the Shape's 
				area, perimeter, radius / side length in centimeters. We then test the overloaded operators +, *, =, ==. Printing the values that are returned after each operation.

*/

#include "Circle.h"
#include "Square.h"

#define ERROR -1
#define MAX_USER_INPUT 100


int main(void)
{
	char colourBuffer[MAX_USER_INPUT] = "";
	char dimensionBuffer[MAX_USER_INPUT] = "";

	Square square1("orange", 5);
	Square square2("purple", 12);
	Square playASquare;
	
	// Show intial values

	round1.Show();
	round2.Show();
	playARound.Show();
	square1.Show();
	square2.Show();
	playASquare.Show();

	// Test addition operator

	playARound = round1 + round2;
	playASquare = square2 + square1;
	playARound.Show();
	playASquare.Show();

	// Test multiplication operator

	playARound = round1 * round2;
	playASquare = square2 * square1;
	playARound.Show();
	playASquare.Show();

	// Test assignment operator
	playARound = round1;


	// Test equality operator
	if (playARound == round1)
	{
		printf("Hurray !!\n");
	}
	else
	{
		printf("Not enough memory\n");
		return ERROR;
	}
  
  myCircle->Show();
  
	delete myCircle;
	delete mySquare;

	return 0;
}

