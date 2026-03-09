// CSC 134
// M3LAB2 - Number Grade to Letter Grade Conversion
// Ricardo
// March 3

#include <iostream>
using namespace std;

int main() {

    // Variable to store the numerical grade
    int grade;

    // Ask the user for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine the letter grade using if-else
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    }
    else {
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}
