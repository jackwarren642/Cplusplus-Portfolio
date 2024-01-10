/*
Author: Jack Warren
Class: CS142, 11A Section
Description: password.cpp- a homework code to critique a user-inputted password based on its strength of five preset factors.
Date: 10/23/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;

int main()
{
	string user_password;
	int digit_flag = 0, lowercase_flag = 0, uppercase_flag = 0, special_flag = 0;
	int digit_counter = 0, lowercase_counter = 0, uppercase_counter = 0, special_counter = 0;
	int password_short = 0;
//	int PASSWORD_LIMIT = 30;  if required, i could set a constant here that limits length of password 

// user inputs password they want checked
	cout << "A strong password will have-" << endl;
	cout << "at least 10 characters, 1 digit, 1 lowercase, 2 uppercase, 3 special (!@#$%^&)" << endl;
	cin >> user_password;
	cout << user_password << endl;

// a series of extra while loops here forces user to make a strong pass w/o program breaking
// by looping cin statements
	while (digit_flag < 1 || lowercase_flag < 1 || uppercase_flag < 2 || special_flag < 3)
	{

	//this loop checks the password length, prompting a cin for a longer password
	//consider this phase 1 of pass check; separate from the character checks
	//the loop structure means computer detects if user pass is short in phase 2
	//and sends user back to "phase 1"
		while (user_password.length() < 10)
		{
			password_short = 10 - user_password.length();
			cout << "Password too short! Please add " << password_short << " more char!" << endl;
			cin >> user_password;
		}

	//while loop counts digits. this begins "phase 2" of condition checks
		while (digit_counter < user_password.length())
		{
			if (user_password[digit_counter] >= '0' && user_password[digit_counter] <= '9')
			{
				digit_flag++;
			}
			digit_counter++;
		}

	// while loop counts lowercase characters
		while (lowercase_counter < user_password.length())
		{
			if (user_password[lowercase_counter] >= 'a' && user_password[lowercase_counter] <= 'z')
			{
				lowercase_flag++;
			}
			lowercase_counter++;
		}

	// while loop counts uppercase characters
		while (uppercase_counter < user_password.length())
		{
			if (user_password[uppercase_counter] >= 'A' && user_password[uppercase_counter] <= 'Z')
			{
				uppercase_flag++;
			}
			uppercase_counter++;
		} 

	// while loop counts special characters
		while (special_counter < user_password.length())
		{
		//bit unorthodox condition here- these characters aren't sequential in ASCII
			if (user_password[special_counter] == '!' || user_password[special_counter] == '@' 
				|| user_password[special_counter] == '#'|| user_password[special_counter] == '$'
				|| user_password[special_counter] == '%'|| user_password[special_counter] == '^'
				|| user_password[special_counter] == '&' )
			{ 
				special_flag++;
			}
			special_counter++;
		} 

	//conditional checks if this attempt at the password is strong, and breaks the loop if so
		if (digit_flag >= 1 && lowercase_flag >= 1 && uppercase_flag >= 2 && special_flag >= 3)
		{
			cout << "Strong password!" << endl;
			break;
		} 

	//if NOT strong- this else statement provides the user with the corrections they need to make
	//and then prompts a new password attempt, resetting the flags and counters to ensure
	//it works properly at the beginning of the loop.
		else 
		{
			cout << "WEAK PASSWORD! Please try again with following corrections- " << endl;
			if (digit_flag < 1)
			{
				cout << "Add at least 1 digit." << endl;
			}
			if (lowercase_flag < 1)
			{
				cout << "Add at least 1 lowercase." << endl;
			}
			if (uppercase_flag < 2)
			{
				cout << "Add at least " << 2 - uppercase_flag << " more uppercase." << endl;
			}
			if (special_flag < 3)
			{
				cout << "Add at least " << 3 - special_flag << " more specials." << endl;
			}

			cin >> user_password;
			digit_flag = 0, lowercase_flag = 0, uppercase_flag = 0, special_flag = 0;
			digit_counter = 0, lowercase_counter = 0, uppercase_counter = 0, special_counter = 0;
		}
		
		}

	
	return 0;

	}