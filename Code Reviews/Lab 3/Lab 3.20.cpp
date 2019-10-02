// Lab 3.20  Pizza Pi.cpp
// NOTE: add a comment describing program.
// 		 Add your name here as well.

#include <iostream>
#include <cmath> //Needed for pow function
#include <iomanip>
using namespace std;

int main()
{
	//Assign PI to const double
	//Assign other variables as floats
	const double PI = 3.14159;
	float area, diameter, radius, pizza_slices;
	// NOTE: Use integer for pizza_slices to indicate
	//       that they have to be whole numbers
	// E.g. `int pizza_slices;`

	//Have user enter number for diameter
	cout << "Enter the diameter of the pizza: ";
	cin >> diameter;

	//Set up calculations
	radius = diameter / 2;
	area = PI * pow(radius, 2.0);
	pizza_slices = area / 14.125;

	//Display number of slices made 
	//Use setprecision to find exact value

	// NOTE: Instead of using `setprecision` to round the number,
	//       use the round function, e.g. `round(area / 14.125)`
	cout << setprecision(0) << fixed;
	cout << "Number of slices = ";
	cout << pizza_slices << endl;


}

