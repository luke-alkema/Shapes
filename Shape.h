#pragma once
#include <stdio.h>
#include <string>


using namespace std;



class Shape
{
private:

	string name;
	string colour;
	


public:

	Shape(string name, string colour);
	Shape();

	string GetColour(void);
	
	string GetName(void);

	bool ChangeColour(string colour);

	bool ChangeName(string name);

	

};