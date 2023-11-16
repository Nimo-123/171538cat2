#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    double num1, num2, num3;

    // get the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // find the smallest number
    double smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }

    // show the result
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}