/*
Author: Jack Warren
Class: CS142, 11A Section
Description: esp.cpp- a homework program to input grades from a text file and then compute statistics and letter grades.
email: jewarren@butler.edu
Date: 11/18/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
#include <fstream>
using namespace std;

int grade_maximum(double grades[], int number_grades);
int grade_minimum(double grades[], int number_grades);
double grade_average(double grades[], int number_grades);
void letter_grades(double grades[], int letters[], int number_grades);


int main(){
	int number_grades = 0;
	double grades[100];
	int letters[5];
	string user_file_name;
	ifstream input;
	ofstream output;

	cout << "Please enter the name of the data file with the grades for computation." << endl;
	cout << "The first number of your file should be the total # grades you are computing." << endl;

	cin >> user_file_name;

	input.open(user_file_name);
 
	input >> number_grades;

	for(int count = 0; count < number_grades; count++){
		input >> grades[count];
	}

	input.close();

	output.open("result.txt");

	output << "The " << number_grades << " grades you entered were:" << endl;

	for(int count = 0; count < number_grades; count++){
		output << grades[count] << endl;
	}

	output << "\n";

	output << "The maximum score on this test was a " << grade_maximum(grades, number_grades) << endl;
	output << "The minimum score on this test was a " << grade_minimum(grades, number_grades) << endl;
	output << "The average score on this test was a " << grade_average(grades, number_grades) << endl;
	letter_grades(grades, letters, number_grades);
	output << "\nA's: " << letters[0] << "\nB's: " << letters[1] << endl;
	output << "C's: " << letters[2] << "\nD's: " << letters[3] << "\nF's: " << letters[4] << endl; 

	output.close(); 

	return 0;
}

int grade_maximum(double grades[], int number_grades){
	int max_grade = grades[0];

	for(int count = 1; count < number_grades; count++){
		if(grades[count] > max_grade){
			max_grade = grades[count];
		}
	}
	return max_grade;
}

int grade_minimum(double grades[], int number_grades){
	int min_grade = grades[0];

	for(int count = 1; count < number_grades; count++){
		if(grades[count] < min_grade){
			min_grade = grades[count];
		}
	}
	return min_grade;
}

double grade_average(double grades[], int number_grades){
	double grade_sum = 0;
	double grade_average = 0;
	grade_sum = grades[0];

	for (int count = 1; count < number_grades; count++){
		grade_sum = grade_sum + grades[count];
	}

	grade_average = grade_sum / number_grades;

	return grade_average;
}

//where l_g[0] = As, l_g[1] = Bs, l_g[2] = Cs, l_g[3] = Ds, l_g[4] = Fs
void letter_grades(double grades[], int letters[], int number_grades){
letters[0] = 0; letters[1] = 0; letters[2] = 0; letters[3] = 0; letters[4] = 0;
	for(int count = 0; count < number_grades; count++){
		if(grades[count] >= 90){
			letters[0] = letters[0] + 1;
		}
		if(grades[count] < 90 && grades[count] >= 80){
			letters[1] = letters[1] + 1;
		}
		if(grades[count] < 80 && grades[count] >= 70){
			letters[2] = letters[2] + 1;
		}
		if(grades[count] < 70 && grades[count] >= 60){
			letters[3] = letters[3] + 1;
		}
		if(grades[count] < 60){
			letters[4] = letters[4] + 1;;
		}
	}
	
	return;
}