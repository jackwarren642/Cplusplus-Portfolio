/*
Author: Jack Warren
Class: CS142, 11A Section
Description: shapes2d.cpp- calculating and printing area of 2D shapes based on user input
email: jewarren@butler.edu
Date: 09/07/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <cmath>
#include <iostream>
using namespace std;

int main(){
	//setting up the variables needed for area equations
	float hexagon_side_length = 0.0, trapezoid_base1 = 0.0, trapezoid_base2 = 0.0;
	float trapezoid_height = 0.0, hexagon_area = 0.0, trapezoid_area = 0.0;

	//user input commands
	cout << "Let's find the area of a hexagon and a trapezoid!" << endl;
	cout << "Please enter the length of the side of the hexagon-\n";
	cin >> hexagon_side_length;
	cout << "Now, please enter the length of trapezoid's 2 bases and its height." << endl;
	cout << "(Please enter in the format B1 B2 H)\n";
	cin >> trapezoid_base1 >> trapezoid_base2 >> trapezoid_height;

	//area formulas
	hexagon_area = (((3*sqrt(3))/2)*pow((hexagon_side_length), 2));
	trapezoid_area = (((trapezoid_base1 + trapezoid_base2)/2)* trapezoid_height);
	
	//final calculated outputs
	cout << "Hexagon with side length " << hexagon_side_length << ", area = " << hexagon_area << endl;
	cout << "Trapezoid with base lengths of " << trapezoid_base1 << " and " << trapezoid_base2 << endl;
	cout << "Height = " << trapezoid_height << endl;
	cout << "Trapezoid Area = " << trapezoid_area << endl;
	return (0);}