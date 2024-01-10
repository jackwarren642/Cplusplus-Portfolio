/*
Author: Jack Warren
Class: CS142, 11A Section
Description: perfect_number.cpp- a midterm program to determine whether a number is a perfect number,
a positive number that is equal to the sum of its posiitve divisors EXCLUDING itself
email: jewarren@butler.edu
Date: 10/05/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;
int main()
{
	int user_input = 0, counter = 0, summation = 0;
// user input
	cout << "Welcome to the perfect number validation program!" << endl;
	cout << "Please enter a positive integer to be checked-" << endl;
	cin >> user_input;

// making sure user can only input a positive number
	while (user_input < 0)
	{
		cout << "This is not a positive integer! Please enter a positive number." << endl;
		cin >> user_input;
	}
// using a for loop to check divisiblity by all numbers > 0 and < user_input
	for (counter = 1; counter < user_input; counter++)
	{
		if ((user_input % counter) == 0)
		{
			summation = summation + counter;
			//cout << "DIVISIBLE BY" << counter << endl; just verified that the program is properly calculating
		}
	}

	// cout << summation << endl; also verifies that the program is calculating the correct sum
	if (summation == user_input)
	{
		cout << "Congratulations! The number " << user_input << " is a perfect number!" << endl;
	}
	else
	{
		cout << "No luck! The number " << user_input << " is not a perfect number." << endl;
	}

	return 0;
}