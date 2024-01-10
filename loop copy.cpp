/*
Author: Jack Warren
Class: CS142, 11A Section
Description: loop.cpp- offer the user an array of math operations, then taking input and calculating.
email: jewarren@butler.edu
Date: 09/26/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;

int main ()
{
	int user_choice = 0, line_width = 0, counter = 0, sos_count = 0, range_num1 = 0, range_num2 =0;

	cout << "Please choose one of the following options for the program-" << endl;
	cout << "1. Horizontal Line\n2. SOS Code\n3. Range Calculator" << endl;
	cin >> user_choice;	

	switch (user_choice)
	{
	case 1: //horizontal line program
		//output + user input
		cout << "You selected the horizontal line program!" << endl;
		cout << "Please enter the width (in characters) of your line as an integer." << endl;
		cin >> line_width;

		counter = 0; //while loop to prevent negative width
		while (line_width < 0)
		{
			cout << "Your line cannot have a negative width; please enter a positive number." << endl;
			cin >> line_width; // attempting to obtain proper width
		}
		while (counter < line_width) //while loop to print correct width line
		{
			cout << "*"; // \n and endl excluded to ensure same-line printing
			counter++;
		}
		cout << "\n"; //ensures new line after final asterisk
		break;

	case 2: // SOS code
		//output + user input
		cout << "You selected the SOS code program!" << endl;
		cout << "How many codes would you like to print?" << endl;
		cin >> sos_count;

		while (sos_count < 0) //ensuring negative count isn't entered
		{
			cout << "A negative amount doesn't work! Please enter a positive number." << endl;
			cin >> sos_count; // attempting to obtain proper count
		}
		for (counter = 0; counter < sos_count; counter++)
		{
			cout << "...---... "; //once again, no \n or endl to keep all the codes on same line
		}
		cout << "\n"; //ensures new line after final code
		break;

	case 3: //range calculator
		//output + user input
		cout << "You selected the range calculation program!" << endl;
		cout << "Please enter the two integers you would like the range of in format N1 N2" << endl;
		cin >> range_num1 >> range_num2; // i.e 1 -1

		if (range_num1 >= range_num2) // part 1 of 2, insuring the lowest number comes first when print
		{
			for (counter = range_num2; counter <= range_num1; counter++) 
		//generated errors using solely range_nums; mixed with counter to ensure proper function
			{
				cout << counter << " ";
			}
		}
		else // range_num2 > range_num1- part 2, if 2nd number is larger than the first. smallest # first
		{
			for (counter = range_num1; counter <= range_num2; counter++)
			// counter is set to the lower number and prints the lower number plus one until greater than bigger.
			{
				cout << counter << " ";
			}
		} //furthermore, this if-else structure allows it to print the same whether enter 0 10 or 10 0
		cout << "\n";
		break;
	}

	return 0;
}