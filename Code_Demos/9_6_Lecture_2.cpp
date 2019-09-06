// CS1 Section 0105 
// Week 2 Lecture demo
// 9/6/2019
#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int a = 10;
	int b = 3;

	// How to turn an int into a double
    cout << static_cast<double>(a) / b << endl;

	// Casting happens on assignment
	int c = 10.0;
	int d = 3;
	cout << c / d << endl;

	// Some types will not cast
	// Uncomment the following lines to see the error
	//int s = "aoeu";
	//cout << s;

	// 3.1
	int e = 10;
	cout << "please input an integer: ";
	cin >> e;
	cout << e << endl;

	// 3.2
	// Precedence
	cout << 10 / 5 * 2 << endl;
	// Functions
	cout << pow(2,3) << endl;

	cout << 10 << setw(5) << 1 << endl;
}
