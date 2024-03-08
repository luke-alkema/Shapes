//test harness
#include "Shape.h"
#include "Circle.h"

#define MAX_USER_INPUT 100

int main(void)
{
	char radiusBuffer[MAX_USER_INPUT] = "";
	printf("\n --- Creating Circle Shape --- \n");
	printf("Input Circle's radius: ");
	fgets(radiusBuffer, MAX_USER_INPUT, stdin);
	radiusBuffer[strcspn(radiusBuffer, "\n")] = 0;


	char colourBuffer[MAX_USER_INPUT] = "";
	printf("Input Circle's colour: ");
	fgets(colourBuffer, MAX_USER_INPUT, stdin);
	colourBuffer[strcspn(colourBuffer, "\n")] = 0;
	printf("\n");

	Circle* newCircle = new Circle(colourBuffer, atof(radiusBuffer));

	newCircle->Show();

	

	

	
	
	delete newCircle;


	return 0;
}