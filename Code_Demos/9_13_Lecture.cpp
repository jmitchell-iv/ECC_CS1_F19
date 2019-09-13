/* Week 3 Lecture and Demo.
 */

#include <iostream>

using namespace std;

int main() {
    double n = 2.14;
    char answer = 'n';
    // examples of initializng boolean values
    bool b = true;
    bool c = true;

    cout << "Would you like the value as a whole number? ";
    cin >> answer;

    if('y' == answer) {
        cout << static_cast<int>(n) << endl;
    } else if('n' == answer) {
        cout << n << endl;
    } else {
        cout << "please enter either a 'y' or 'n'." << endl;
    }
    return 0;
}