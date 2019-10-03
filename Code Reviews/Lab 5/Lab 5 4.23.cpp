//4 Programming Challenge 23
//Write a program that uses a loop to display Pattern A below
//followed by another loop that displays Pattern B.
#include <iostream>
using namespace std;

int main()
{
    //Make three variables and stored them with a value.
	const int columns = 9;
	const int rows = 10;
	const int height = 10;
	
	//Display a heading for paterns A
	cout << endl << "============" << endl;
	cout << endl << " Pattern A:" << endl;
	cout << endl << "============" << endl;

	//Create a loop and input the information.
	for (int rows = 0; rows < height; rows++)
	{
		for (int x = 0; x < 1 * rows + 1;x++)
			cout << "+";
		cout << endl;
	}

	//Display a heading for paterns B
	cout << endl << "==============" << endl;
	cout << endl << " Pattern B:" << endl;
	cout << endl << "==============" << endl;

	// Create a loop and input the information.
	for (int rows = 0; height > rows; rows++)
	{
		for (int y = 0; y < 1 * rows + 1;y++)
			cout << "+";
			cout << endl;
	}
	
	return 0;

}


