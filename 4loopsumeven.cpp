// Counting the sum of first 10 even numbers

#include <iostream>
using namespace std;

int main() {
	int i = 0, j = 0, k = 0, sum = 0;

	cout << "How many of the first even numbers would you like to add?" << endl;
	cin >> k;
	// using for loop
	// 2, 4, 6, 8 and so on
	// j = 2, 4, 6, 8, 10 ...
	
	for (i = 1, j = 2; i <= k; i++, j = j + 2) {
		sum = sum + j;
	}

	cout << "The sum of first k positive number is " << sum << endl;

	sum = 0;
	for (i = 2; i <= 2*k; i = i + 2) {
		sum = sum + i;
	}

	cout << "The sum of the first k positive, even number is " << sum << endl;

	i = 1;
	j = 2;
	sum = 0;
	while (i <= k) {
		sum = sum + j; // j is the next even number
		i++; // i is being used as the determinant of HOW many even numbers. 
		j = j + 2;
	}

	cout << "The sum of the first k positive, even numbers is " << sum << endl;

	i = 1;
	j = 2;
	sum = 0;

	do {
		sum = sum + j;
		i++;
		j = j + 2;
	} while (i <= k);

	cout << "The sum of first k positive number is " << sum << endl;

	return 0;
}