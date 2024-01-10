
#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

void fill_array(int random_array[], int number_elements);
void rotate_left(int random_array[], int number_elements);

int main(){

	int user_selection = 0; bool exit_flag = 0; int number_elements = 0; int random_array[] = {};
	int rotated_array[] = {};

	while (exit_flag == 0){
	cout << "Please enter a number to select an option." << endl;
	cout << "#1 Enter a designated length for a random array to be generated." << endl;
	cout << "#2 Shift the numbers in the array to the left with the first number coming last." << endl;
	cout << "#3 Find the sum of numbers in a certain range in the array given by two index numbers." << endl;
	cout << "#4 Replace even numbers with 0 and odd numbers with 1 in the array." << endl;
	cout << "#5 Exit the program." << endl;
	cin >> user_selection;

	switch(user_selection){

	case 1:
		cout << "Please enter the amount of elements (1-100) that you would like to generate in the array." << endl;
		cin >> number_elements;

		fill_array(random_array, number_elements);

		for (int count = 0; count < number_elements; count++){
			cout << random_array[count] << " ";
		}

		cout << "\n" << endl;

		break;

	case 2:
		rotate_left(random_array, number_elements);

		for (int count = 0; count < number_elements; count++){
			cout << random_array[count] << " ";
		}

		cout << "\n" << endl;
	case 5:
		exit_flag = 1;
		break;

	default: 
		cout << "Invalid value! Please enter an intenger between 1 and 5." << endl;
		break;
	}
	return 0;
	}
}

void fill_array(int random_array[], int number_elements){

	srand(0);
	
	for (int count = 0; count < number_elements; count++)
	{
		random_array[count] = rand() % 100;
	}

	return;
	}

void rotate_left(int random_array[], int number_elements){
	int element_to_last = 0;
	element_to_last = random_array[0];

	for (int count = 0; count < number_elements - 1; count++){
		random_array[count] = random_array[count+1];
	}

	random_array[number_elements] = element_to_last;

}