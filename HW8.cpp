/*
Author: Jack Warren
Class: CS142, 11A Section
Description: HW8.cpp- a parallel homework program to calculate pi by taking the sum of n terms of the inverse square root.
Date: 12/06/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
#include <cmath>
#include "mpi.h"
using namespace std;

int main (int argc, char * argv[])
{
	//declaring the variables needed for MPI functions.
	int id, np, source, dest, tag = 0, number_sums;
	double total_sum = 0.0;
	MPI_Status status;

	//starting MPI program and finding id and np
	MPI_Init(&argc, &argv);

	MPI_Comm_rank(MPI_COMM_WORLD, &id);

	MPI_Comm_size(MPI_COMM_WORLD, &np);

	//processor zero takes input
	if (id == 0){
		cout << "Please enter the number of sums to which you would like to calculate pi." << endl;
		cin >> number_sums;
	}	

	//for this HW lets assume 5 processors with 100 n
	//local_chunk = n/np = 10. ID 0- 1-20. ID 1- 11-20. 

	MPI_Bcast(&number_sums, 1, MPI_INT, 0, MPI_COMM_WORLD);

	int local_start = (id * (number_sums / np)) + 1;
	int local_chunk = (number_sums / np);
	double local_sum = 0.0;

	for (int i = local_start; i < local_start + local_chunk; i++){
		local_sum = local_sum + (1 / pow(i, 2));
	}

	MPI_Allreduce(&local_sum, &total_sum, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);

	double pi = 0.0;
	pi = sqrt(6 * total_sum);
	
	if (id == 0){
	cout << "Pi of " << number_sums << " sums is equal to: " << pi << endl;
	
	}

	MPI_Finalize();
	return 0;
}