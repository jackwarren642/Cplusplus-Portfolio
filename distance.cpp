#include <iostream>	
using namespace std;

int main()
{
	double distance_traveled = 0.0, cost_per_mile = 0.0, total_cost = 0.0;

	cout << "Please enter the distance traveled, in miles, you would like to calculate the cost for" << endl;
	cin >> distance_traveled;

	while (distance_traveled < 0)
	{
		cout << "Negative distance doesn't make sense! Please enter a positive distance." << endl;
		cin >> distance_traveled;
	}


	if (distance_traveled >= 0 && distance_traveled <= 100)
	{
		cost_per_mile = 5.00;
		total_cost = cost_per_mile * distance_traveled;
		cout << "The total cost of your " << distance_traveled << " mile journey is $" << total_cost << ".\n";
		cout << "You paid a rate of $" << cost_per_mile << " per mile." << endl;
	}

	else if (distance_traveled > 100 && distance_traveled <= 500)
	{
		cost_per_mile = 8.00;
		total_cost = cost_per_mile * distance_traveled;
		cout << "The total cost of your " << distance_traveled << " mile journey is $" << total_cost << ".\n";
		cout << "You paid a rate of $" << cost_per_mile << " per mile." << endl;
	}

	else if (distance_traveled > 500 && distance_traveled < 1000)
	{
		cost_per_mile = 10.00;
		total_cost = cost_per_mile * distance_traveled;
		cout << "The total cost of your " << distance_traveled << " mile journey is $" << total_cost << ".\n";
		cout << "You paid a rate of $" << cost_per_mile << " per mile." << endl;
	}

	else if (distance_traveled >= 1000)
	{
		cost_per_mile = 12.00;
		total_cost = cost_per_mile * distance_traveled;
		cout << "The total cost of your " << distance_traveled << " mile journey is $" << total_cost << ".\n";
		cout << "You paid a rate of $" << cost_per_mile << " per mile." << endl;
	}
	return 0;
}