// CS1 Section 0105 
// Week 2 Quiz
// 9/6/2019
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// Question 1: What is the magic incantation which
	//			   surrounds your code?
	////
	// Question 2: Implement the comment below
	////
	int bill_total = 100;
	int group_size = 4;
	// output a single person's total bill.
	int single_bill = bill_total / group_size;
	cout << "Each person's bill is: $" << single_bill
		 << "\n";
	// Tell the user what 10%, 15%, and 20%
	// of their bill are.
	cout << "10% of $" << single_bill << " is $"
		 << single_bill / 10.0 << endl;
	cout << "15% of $" << single_bill << " is $"
		 << single_bill / 0.15 << "\n";
	cout << "20% of $" << single_bill << " is $"
		 << single_bill * 0.20 << endl;
	////
	return 0;
}
