/*
Author: Jack Warren
Class: CS142, 11A Section
Description: coordinate.cpp- a midterm code, determing which quadrant a coordinate point is in
email: jewarren@butler.edu
Date: 10/05/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;
int main()
{
	float x_coordinate = 0.0, y_coordinate = 0.0;

	// user inputting coords
	cout << "Welcome to the quadrant determination program!" << endl;
	cout << "Please enter a coordinate point in format \"X Y\"." << endl;
	cin >> x_coordinate >> y_coordinate;

	//these three if statements allow the program to determine if it is on an axis before the quadrants
	if (x_coordinate == 0 && y_coordinate == 0)
	{
		cout << "This point lies on the origin!" << endl;
	}

	else if (x_coordinate == 0)
	{
		cout << "This point lies on the y-axis!" << endl;
	}

	else if (y_coordinate == 0)
	{
		cout << "This point lies on the y-axis!" << endl;
	}

	//by flow, this point is not on an axis, so it must be in a quadrant

	else if (x_coordinate > 0 && y_coordinate > 0)
	{
		cout << "The point (" << x_coordinate << ", " << y_coordinate << ") lies within the first quadrant!" << endl;
	}

	else if (x_coordinate < 0 && y_coordinate > 0)
	{
		cout << "The point (" << x_coordinate << ", " << y_coordinate << ") lies within the second quadrant!" << endl;
	}

	else if (x_coordinate < 0 && y_coordinate < 0)
	{
		cout << "The point (" << x_coordinate << ", " << y_coordinate << ") lies within the third quadrant!" << endl;
	}

	else if (x_coordinate > 0 && y_coordinate < 0)
	{
		cout << "The point (" << x_coordinate << ", " << y_coordinate << ") lies within the fourth quadrant!" << endl;
	}

	return 0;
}