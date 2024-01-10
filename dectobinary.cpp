/*
Author: Jack Warren
Class: CS142, 11A Section
Description: dectobinary.cpp- a homework code that converts an integer into its binary correspondent
Date: 11/10/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int integers_to_reverse_binary(int user_input, int binary_string[], int index);
void string_reverse(int binary_string[], int index);

int main(){

	int user_number = 0;
	int binary_string[20];
	int index;

	cout << "Please enter a number to be converted to binary." << endl;
	cin >> user_number;

	integers_to_reverse_binary(user_number, binary_string, index);
	index = integers_to_reverse_binary(user_number, binary_string, index);

	/*for (int print = 0; print < index; print++){ checked to ensure that the proper unreversed string was output
		cout << binary_string[print];
	}
	cout << "\n";
 	cout << index << endl;*/

	string_reverse(binary_string, index);

	return 0;
}

int integers_to_reverse_binary(int user_input, int binary_string[], int index){

	while (user_input > 0){
		binary_string[index] = user_input % 2;
		index++;
		user_input = user_input / 2;
	}

return index;
}

void string_reverse(int binary_string[],int index){
	int reverse_string[100] = {};
	int reverse_index1 = 0; int reverse_index2 = 0;

	index--;
	// cout << index << endl; // verified conversion of index into this function

	for (reverse_index1 = 0, reverse_index2 = index; reverse_index1 <= index; reverse_index1++, reverse_index2--){
		reverse_string[reverse_index1] = binary_string[reverse_index2];
	}

	for (int print = 0; print <= index; print++){
		cout << reverse_string[print];
	}
	cout << "\n";
	return;
}