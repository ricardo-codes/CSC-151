// CSC 134
// M3HW1 - Gold
// Ricardo
// March 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // -------------------------
    // Question 1 - Chat Bot
    // -------------------------
    cout << "Question 1" << endl;

    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;


    // -------------------------
    // Question 2 - Receipt Calculator
    // -------------------------
    cout << "Question 2" << endl;

    double mealPrice;
    double taxRate = 0.08;
    double tipRate = 0.15;
    double tax;
    double tip = 0;
    double total;
    int orderType;

    cout << "Enter the price of the meal: ";
    cin >> mealPrice;

    cout << "Enter 1 for dine in, 2 for takeaway: ";
    cin >> orderType;

    tax = mealPrice * taxRate;

    if (orderType == 1) {
        tip = mealPrice * tipRate;
    }

    total = mealPrice + tax + tip;

    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    cout << endl;


    // -------------------------
    // Question 3 - Choose Your Own Adventure
    // -------------------------
    cout << "Question 3" << endl;

    int choice1;
    int choice2;

    cout << "You are in a dark forest." << endl;
    cout << "Do you go left (1) or right (2)? ";
    cin >> choice1;

    if (choice1 == 1) {
        cout << "You fell into a trap. Game Over!" << endl;
    }
    else if (choice1 == 2) {
        cout << "You find a castle." << endl;
        cout << "Do you enter the castle (1) or run away (2)? ";
        cin >> choice2;

        if (choice2 == 1) {
            cout << "You found treasure! Victory!" << endl;
        }
        else {
            cout << "A dragon catches you. Defeat!" << endl;
        }
    }
    else {
        cout << "Invalid choice." << endl;
    }

    cout << endl;


    // -------------------------
    // Question 4 - Math Practice
    // -------------------------
    cout << "Question 4" << endl;

    srand(time(0));

    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int userAnswer;
    int correctAnswer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
    }

    return 0;
}
