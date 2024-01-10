/*
Author: Jack Warren
Class: CS142, 11A Section
Description: shapes3d.cpp - calculating and printing SA and volume of some 3D shapes
email: jewarren@butler.edu
Date: 09/05/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <cmath>
#include <iostream>
using namespace std;
int main(){
	//setting up variables needed for formulas- "RSP" will stand for right square pyramid
	//as well, "SA" will stand for surface area
	float RSP_base = 0.0, RSP_height = 0.0, torus_major_radius = 0.0, torus_minor_radius = 0.0;
	float RSP_volume = 0.0, RSP_SA = 0.0, torus_volume = 0.0, torus_SA = 0.0;
	const float PI = 3.14159;

	//user inputting necessary variables
	cout << "Let's calculate the volumes and surface areas of a right square pyramid and a torus.\n";
	cout << "First, enter the length of the pyramid's base edge and its height (format B H)" << endl;
	cin >> RSP_base >> RSP_height;
	cout << "Now, enter the major and minor radii of the torus (format R r)" << endl;
	cin >> torus_major_radius >> torus_minor_radius;

	//formulas
	RSP_volume = (pow(RSP_base, 2)*(RSP_height / 3));
	RSP_SA = (pow(RSP_base, 2) + ((2 * RSP_base) * sqrt(((pow(RSP_base, 2))/4)+pow(RSP_height, 2))));
	torus_volume = (PI * (pow(torus_minor_radius, 2))) * (2 * PI * torus_major_radius);
	torus_SA = (2 * PI * torus_major_radius) * (2 * PI * torus_minor_radius);
	
	//outputting final calculations
	cout << "For the pyramid with base length " << RSP_base << " and height " << RSP_height << endl;
	cout << "The volume is " << RSP_volume << " and the surface area is " << RSP_SA << endl;
	cout << "For torus, major of " << torus_major_radius << ", minor of " << torus_minor_radius << endl;
	cout << "The volume is " << torus_volume << " and the surface area is " << torus_SA << endl;
	return 0;}