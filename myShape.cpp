/* 
	NAME	:	myShape.cpp
	PURPOSE :	This program runs through the uses of the Shapes class, 
				as well as the Shape's children Circle and Square. We dynamiclly instantiate a square and a circle,
				the values for the Shape's come from the user, colour, radius, side length. We then display the Shape's 
				area, perimeter, radius / side length in centimeters. Then we delete the objects so that the memory man can enjoy his lonesome days.

*/

#include "Circle.h"
#include "Square.h"

#define ERROR -1
#define MAX_USER_INPUT 100


int main(void)
{
	char colourBuffer[MAX_USER_INPUT] = "";
	char dimensionBuffer[MAX_USER_INPUT] = "";

	printf("\n----Creating a Square----\n");

	printf("Enter Squares Colour >> ");
	fgets(colourBuffer, MAX_USER_INPUT, stdin);
	colourBuffer[strcspn(colourBuffer, "\n")] = 0;

	char sideLengthBuffer[MAX_USER_INPUT] = "";
	printf("Enter Squares Side Length >> ");
	fgets(dimensionBuffer, MAX_USER_INPUT, stdin);
	double sideLength = atof(dimensionBuffer);

	Square* mySquare = new Square(colourBuffer, sideLength);
	if (mySquare == NULL)
	{
		printf("Not enought memory\n");
		return ERROR;
	}
	mySquare->Show();

	
	printf("\n----Creating a Circle----\n");

	printf("Input Circle's colour >> ");
	fgets(colourBuffer, MAX_USER_INPUT, stdin);
	colourBuffer[strcspn(colourBuffer, "\n")] = 0;

	printf("Input Circle's radius >> ");
	fgets(dimensionBuffer, MAX_USER_INPUT, stdin);
	dimensionBuffer[strcspn(dimensionBuffer, "\n")] = 0;
	double radius = atof(dimensionBuffer);

	Circle* myCircle = new Circle(colourBuffer, radius);
  if (myCircle == NULL)
	{
		printf("Not enough memory\n");
		return ERROR;
	}
  
  myCircle->Show();
  
	delete myCircle;
	delete mySquare;

	return 0;
}

