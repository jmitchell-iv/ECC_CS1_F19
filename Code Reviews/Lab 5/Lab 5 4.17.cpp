//Chapter 5 Problem 17
//This problems asks the user to enter the sales of 5 different stores
//then create a bar graph via aestericks to show a visual. The aestericks will 
//go by 100.
/*

#include <iostream>
using namespace std;

int main() {
	//5 stores
	//Aestericks for every $100
	//Create 5 variables for all 5 stores
	int store1, store2, store3, store4, store5;
	//Create another set of variables to hold the aestericks
	int store_1, store_2, store_3, store_4, store_5;

	//Prompt the user to enter amount of sales for Store 1
	cout << "Enter sales for store 1: ";
	cin >> store1;
	//To initiate the aestericks variables, divide the sales from each store by 100
	//do the same for the rest of the stores
	store_1 = store1 / 100;

	//Prompt the user to enter amount of sales for Store 2
	cout << "Enter sales for store 2: ";
	cin >> store2;
	store_2 = store2 / 100;

	//Prompt the user to enter amount of sales for Store 3
	cout << "Enter sales for store 3: ";
	cin >> store3;
	store_3 = store3 / 100;

	//Prompt the user to enter amount of sales for Store 4
	cout << "Enter sales for store 4: ";
	cin >> store4;
	store_4 = store4 / 100;

	//Prompt the user to enter amount of sales for Store 5
	cout << "Enter sales for store 5: ";
	cin >> store5;
	store_5 = store5 / 100;

	//Now display the bar graph
	cout << "Here is a bar graph of the 5 stores" << endl;
	cout << "-----------------------------------" << endl;
	//Display aestericks for store 1
	cout << "Store 1: ";
	//By using this for function and setting i = 0, it will display an aestericks each time the function
	//is being executed
	//Now do the same for the remaining stores using the same functions
	for (int i = 0; store_1 >= i; i = i + 1) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 2: ";
	for (int i = 0; store_2 >= i; i = i + 1) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 3: ";
	for (int i = 0; store_3 >= i; i = i + 1) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 4: ";
	for (int i = 0; store_4 >= i; i = i + 1) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 5: ";
	for (int i = 0; store_5 >= i; i = i + 1) {
		cout << "*";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/
