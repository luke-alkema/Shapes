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


int main(void)
{
	Circle round1("red", 5.5);
	Circle round2("blue", 10.5);
	Circle playARound;

	Square square1("orange", 5);
	Square square2("purple", 12);
	Square playASquare;

	round1.Show();
	round2.Show();
	playARound.Show();
	square1.Show();
	square2.Show();
	playASquare.Show();

	playARound = round1 + round2;
	playASquare = square2 + square1;
	playARound.Show();
	playASquare.Show();

	playARound = round1 * round2;
	playASquare = square2 * square1;
	playARound.Show();
	playASquare.Show();

	playARound = round1;

	if (playARound == round1)
	{
		printf("Hurray !!\n");
	}
	else
	{
		printf("Awww !!\n");
	}
	return 0;
}

