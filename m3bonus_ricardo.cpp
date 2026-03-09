// CSC 134
// M3BONUS - Simple Craps Game
// Ricardo Kelly
// March 9th

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype
int rollDice();

int main() {

    srand(time(0)); // random number seed
    int choice = 1;

    cout << "Welcome to Simple Craps!" << endl;

    while (choice == 1) {

        int dice1 = rollDice();
        int dice2 = rollDice();
        int total = dice1 + dice2;

        cout << "You rolled: " << dice1 << " + " << dice2 << " = " << total << endl;

        // win conditions
        if (total == 7 || total == 11) {
            cout << "You win!" << endl;
        }
        // lose conditions
        else if (total == 2 || total == 3 || total == 12) {
            cout << "Craps! You lose." << endl;
        }
        // anything else
        else {
            cout << "Nothing happens. Roll again next round." << endl;
        }

        cout << "Play again? (1 = yes, 0 = no): ";
        cin >> choice;

        // input check
        while (choice != 0 && choice != 1) {
            cout << "Invalid input. Enter 1 to play again or 0 to quit: ";
            cin >> choice;
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}

// Function to roll a die
int rollDice() {
    return (rand() % 6) + 1;
}
