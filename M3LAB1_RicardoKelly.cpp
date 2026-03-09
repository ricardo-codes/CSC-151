// CSC 134
// M3LAB1 - If Statement Game
// Ricardo Kelly
// March 3, 2026

#include <iostream>
using namespace std;

int main() {

    string choice;

    cout << "A wild monster appears!" << endl;
    cout << "Do you want to FIGHT or RUN?" << endl;
    cout << "Type fight or run: ";
    cin >> choice;

    if (choice == "fight") {
        cout << "You fought bravely and defeated the monster!" << endl;
    }
    else if (choice == "run") {
        cout << "You ran away safely!" << endl;
    }
    else {
        cout << "That is not a valid choice." << endl;
    }

    cout << "Game Over!" << endl;

    return 0;
}
