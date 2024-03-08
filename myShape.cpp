//test harness
#include "Circle.h"
#include "Square.h"

#define ERROR -1
#define MAX_USER_INPUT 100


int main(void)
{
	printf("\n----Creating a Square----\n");

	char colourBuffer[MAX_USER_INPUT] = "";
	printf("Enter Squares Colour >> ");
	fgets(colourBuffer, MAX_USER_INPUT, stdin);
	colourBuffer[strcspn(colourBuffer, "\n")] = 0;

	char sideLengthBuffer[MAX_USER_INPUT] = "";
	printf("Enter Squares Side Length >>");
	fgets(sideLengthBuffer, MAX_USER_INPUT, stdin);
	double sideLength = atof(sideLengthBuffer);

	Square* mySquare = new Square(colourBuffer, sideLength);
	if (mySquare == NULL)
	{
		printf("Not enought memory\n");
		return ERROR;
	}
	mySquare->Show();

	delete mySquare;

	return 0;
}

