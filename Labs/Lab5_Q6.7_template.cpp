/**
 * Instructions:
 * Implement the code, and write comments described in the
 * //TODO:
 * formatted comments.
 *
 * //NOTE:
 * comments clarify parts of the given code.
 *
 * //IGNORE:
 * comments mark code which can be safely ignored.
 **/

//TODO: Insert your header
//NOTE: Your header no longer needs to include inputs and outputs

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

/**
 * Function Declarations
 **/

//IGNORE: You can ignore these functions
void test();
void run_loop();
void run();
void test_pow();
void  test_unit_to_s();
void  test_to_c();
void  test_from_c();
void  test_convert();

// Example:
// Purpose Statement
// Calculates the value of b to the power e
// Inputs:
// b - The base value
// e - The exponent value
// return - returns the value of b to the e
double pow(double b, double e);

//TODO: Write header comments for each of the following function declarations.
string unit_to_s(char unit);
double to_c(char units, double temp);
double from_c(char units, double temp);
double convert(char in, char out, double temp);

/**
 * Main Function
 **/

//IGNORE: You may safely ignore the main function.
int main() {
  char t;

  cout << "Enter [t] to test, or any other character to run." << endl;
  cin >> t;
  if(t == 't') {
    test();
  } else {
    run_loop();
  }
}

/**
 * Function Definitions
 **/
//IGNORE: You may ignore this function.
void test() {
  test_pow();
  test_unit_to_s();
  test_to_c();
  test_from_c();
  test_convert();
}

//IGNORE: You may ignore this function.
void run_loop() {
  char again = 'y';

  while(again == 'y' || again == 'Y') {
    run();
    cout << "Calculate again?" << endl;
    cin >> again;
  }
}
//NOTE: You do not have to edit this function, but you should use it as a guide
//      to understand how to implement the functions.
void run() {
  // Variable Declarations
  char units_in, units_out;
  double temp;

  // Input
  cout << "Enter the units you'd like to convert from:" << endl;
  cin >> units_in;
  cout << "Enter the units you'd like to convert to:" << endl;
  cin >> units_out;
  cout << "Enter the temperature in " << unit_to_s(units_in) << ":" << endl;
  cin >> temp;

  // Output
  cout << temp << " "
       << unit_to_s(units_in) << " is "
       << unit_to_s(units_out) << " "
       << convert(units_in, units_out, temp) << "." << endl;
}

// EXAMPLE
void test_pow() {
  assert(pow(2.0,3.0) == 8.0);
  assert(pow(2.0,0.0) == 1.0);
}
double pow(double b, double e) {
  double answer = 1;
  int i = 0;
  // Because answer is initialized with b already, we need to count one less
  while(i < e){
    i = i + 1;
    answer = answer * b;
  }
  return answer;
}
// END EXAMPLE

//TODO: Implement each of the functions below
//NOTE: You should be able to copy and modify some of your code
//      from the previous homework.
//TODO: Test each of the functions below
//NOTE: make sure you test each possible case
void  test_unit_to_s() {
  assert(unit_to_s('c') == "celcius");
}
string unit_to_s(char unit) {
  return "celcius";
}

void  test_to_c() {
  assert(to_c('f',32) == 0);
}
double to_c(char units, double temp) {
  return 0;
}

void  test_from_c() {
  assert(from_c('f',0) == 32);
}
double from_c(char units, double temp){
  return 32;
}

void  test_convert() {
  assert(convert('f','c',32) == 0);
}
double convert(char in, char out, double temp) {
  return 0;
}
