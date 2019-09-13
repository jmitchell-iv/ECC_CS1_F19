// CSCI -1 0105
// <Name>
// PC Chapter 3 ( 3.1; 3.12; 3.17; 3.20; 3.25 )			9/10/2019



#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	// NOTE: On the following line stick to the 80 column limit
	// 3.1 MILES PER GALLONS	This program will calculate how many miles a car can be driven with 1 gallon of gas.	
	// Make three variables gallons 
	double gallons, miles;
	// Display a sentence that ask the user to input the number of gallons.
	cout << "Number of gallons of gas the car can hold: gallons" << "\n";
	// Input number of gallons.
	cin >> gallons;
	// Display a sentence that ask the unser to input the number of miles.
	cout << "Number of miles the car can be driven with full gas tank" << "\n";
	// Input number of gallons.
	cin >> miles;
	// Make a variable and calculate number of miles per gallons.
	// NOTE: declare variables at the top
	double miles_per_gallons = miles / gallons;
	// Display mile per gallons
	cout << "Number of miles may be driven per gallon: mi/gal" << miles_per_gallons << "\n";



	// 3.12 CELSIUS TO FAHRENHEIT	This program will convert Celsius temperature to Fahrenheit temperature
	// Make a variable for Celsius temperature.
	// NOTE: Make variable names lowercase.
	double C;
	// Display a sentence that aske the user to input the temperature.
	cout << "Enter the Celsius temperature:" << "\n";
	// Input the temperature.
	cin >> C;
	// Make a variable for Fahrenheit temperarute and get set to formula F=(9/5)*C +32.
	double F = (9 / 5) * C + 32;
	// Display Fahrenheit temperature
	cout << " Fahrenheit temperature is:" << F << "\n";


	// 3.17 MATH TUTOR		Students enter 2 random numbers then they will have time to work on them. Then they can press a key to show the answer
	// Add  library cstdlib for random numbers.
	// Make two variables that represent for 2 random numbers.
	double x, y;
	// Get set x to a random number.
	x = rand();
	// Ask user to input a number.
	cout << "Enter the first number:" << "\n";
	// Input a number.
	cin >> x;
	// Do the same thing with x for y.
	y = rand();
	cout << "Enter the second number:" << "\n";
	cin >> y;
	// Make a variable for sum of x,y
	double sum = x + y;
	string user_response;
	// Tell the user that they have time to work, then press enter to show answer.
	cout << "The program will give you time to calculate, press Enter to show the answer:" << "\n";
	// Use cin.get() to pause the program.
	// NOTE: this is the solution to have the user simply press ender to
	//       continue, but cin >> response, asking the user to enter a
	//       character would be ok
	cin.ignore();	// When I input only cin.get() code, the program doesn't stop. Then I searched online they said that cin.ignore() code is needed because it prevents the program trigger immidiately.
	cin.get();
	// Display the sum
	cout << "Sum of 2 numbers is: " << sum << "\n";
	

	//3.20 PIZZA PI		This progarm will calculate number of slices a pizza of any size can be divided into.
	// Make three variables diameter, area, slices.
	double diameter, area, slices;
	// Named constant for pi.
	const double pi = 3.14159;
	// Ask customer to enter the size of the pizza.
	cout << "Enter the size of pizza: inches" << "\n";
	cin >> diameter;
	// Calculate the area of the pizza.
	area = pi * pow(diameter/2,2);
	// Calculate number of slices.
	slices = area / 14.125;
	// Display number of slices. Add iomanip library to set precision decimal place.
	cout << "Number of slices: " << slices << setprecision(1) << fixed << "\n";
	



	// 3.25 WORD GAME		The program will play game with the user.
	// Add string lirbrary <string>. Make 7 variables in a string.
	string age, name, city, college, profession, animal, petname;
	
	// Ask user to enter all the information.
	// Use getline code to read the entire line and store it in string object.
	cout << " Enter your name ";
	// NOTE: this is a problem with input streams, there was a new like char
	//       in the stream and so it was reading a blank.
	getline(cin,name);
	getline(cin,name);
	cout << " Enter your age ";
	getline(cin,age);
	cout << " Enter your city ";
	getline(cin,city);
	cout << " Enter your college ";
	getline(cin,college);
	cout << " Enter your profession ";
	getline(cin,profession);
	cout << " Enter your animal";
	getline(cin,animal);
	cout << " Enter your pet name ";
	getline(cin,petname);
	cout << " There once was a person " << name << " who lived in " << city << ". At age of " << age << name << " went to college at " << college
		<< ". " << name << " graduated and went to work as a " << profession << " Then, " << name << " adopted a(n) " << animal << " named " << petname
		<< ". They both lived happily ever after!" << "\n";

	// NOTE: Commenting on what you had issues with is a great habit!
	// I have problem on two code lines and I don't know how to fix it. 
	//cout << " Enter your name ";
	//getline(cin, name);
	//cout << " Enter your age ";
	//getline(cin, age);

	return 0;
}

