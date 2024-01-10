
/*
Author: Jack Warren
Class: CS142, 11A Section
Description: mathoperations.cpp- offer the user an array of math operations, then taking input and calculating.
email: jewarren@butler.edu
Date: 09/25/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;

int main ()
{ //declaring + initializing variables
	int operation_choice = 0;
	float operand1 = 0.0, operand2 = 0.0, modulus_result = 0.0;

	cout << "Please enter a number 1 through 5, corresponding to the following operations-" << endl;
	cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulus" << endl;
	cin >> operation_choice;

// if-else-if structure-
// takes user choice input, followed by user operand input and calculation and output of result
	if (operation_choice == 1)
	{
		cout << "You selected addition! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " + " << operand2 << " is equal to " << operand1 + operand2 << endl;
	}
	else if (operation_choice == 2)
	{
		cout << "You selected subtraction! Please enter your two operands in format \"O1 O2 \"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " - " << operand2 << " is equal to " << operand1 - operand2 << endl;
	}
	else if (operation_choice == 3)
	{
		cout << "You selected multiplication! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " * " << operand2 << " is equal to " << operand1 * operand2 << endl;
	}
	else if (operation_choice == 4)
	{
		cout << "You selected division! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		if (operand2 == 0)
		{
			cout << "ERROR- Zero can not be the denominator. Please try again." << endl;
		}
		else
		{
			cout << operand1 << " / " << operand2 << " is equal to " << operand1 / operand2 << endl;
		}
	}
	else if (operation_choice == 5)
	{
		cout << "You selected modulus (remainder)! Please enter your two operands in format \"O1 O2\"\n";
		cout << "(Disclaimer; please enter integers. Decimal points will be rounded down.)" << endl;
		cin >> operand1 >> operand2;
		modulus_result = int(operand1) % int(operand2);
		cout << "The remainder of " << operand1 << " / " << operand2 << " is " << modulus_result << endl;
	}
	else
	{
		cout << "I'm sorry; your operation choice was invalid. Please try again." << endl;
	}

//switch structure
	/*
	switch (operation_choice)
	{
	case 1: 
		cout << "You selected addition! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " + " << operand2 << " is equal to " << operand1 + operand2 << endl;
		break;
	case 2:
		cout << "You selected subtraction! Please enter your two operands in format \"O1 O2 \"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " - " << operand2 << " is equal to " << operand1 - operand2 << endl;
		break;
	case 3:
		cout << "You selected multiplication! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		cout << operand1 << " * " << operand2 << " is equal to " << operand1 * operand2 << endl;
		break;
	case 4:
		cout << "You selected division! Please enter your two operands in format \"O1 O2\"" << endl;
		cin >> operand1 >> operand2;
		if (operand2 == 0){
			cout << "ERROR- Zero can not be the denominator. Please try again." << endl;	}
		else{
			cout << operand1 << " / " << operand2 << " is equal to " << operand1 / operand2 << endl;}
		break;
	case 5:
		cout << "You selected modulus (remainder)! Please enter your two operands in format \"O1 O2\"\n";
		cout << "(Disclaimer; please enter integers. Decimal points will be rounded down.)" << endl;
		cin >> operand1 >> operand2;
		modulus_result = int(operand1) % int(operand2);
		cout << "The remainder of " << operand1 << " / " << operand2 << " is " << modulus_result << endl;
		break;
	default:
		cout << "I'm sorry; your operation choice was invalid. Please try again." << endl;

	}
	*/
	return 0;
}