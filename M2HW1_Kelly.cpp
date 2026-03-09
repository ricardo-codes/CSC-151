/*
CSC 134
M2HW1 - Gold
Ricardo Kelly
March 3rd
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    cout << "----- Question 1: Banking Program -----" << endl;

    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = 123456;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter starting balance: $";
    cin >> startingBalance;

    cout << "Enter deposit amount: $";
    cin >> deposit;

    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;

    finalBalance = startingBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);

    cout << "\nAccount Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Balance: $" << finalBalance << endl;


    cout << "\n----- Question 2: General Crates -----" << endl;

    double length, width, height;
    double volume;
    double costPerCubicFoot = 0.30;
    double chargePerCubicFoot = 0.52;
    double cost, charge, profit;

    cout << "Enter crate length: ";
    cin >> length;

    cout << "Enter crate width: ";
    cin >> width;

    cout << "Enter crate height: ";
    cin >> height;

    volume = length * width * height;

    cost = volume * costPerCubicFoot;
    charge = volume * chargePerCubicFoot;
    profit = charge - cost;

    cout << "\nVolume: " << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Customer price: $" << charge << endl;
    cout << "Profit: $" << profit << endl;


    cout << "\n----- Question 3: Pizza Party -----" << endl;

    int pizzas, slicesPerPizza, visitors;
    int totalSlices, slicesNeeded, leftovers;

    cout << "How many pizzas ordered? ";
    cin >> pizzas;

    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;

    cout << "How many visitors? ";
    cin >> visitors;

    totalSlices = pizzas * slicesPerPizza;
    slicesNeeded = visitors * 3;
    leftovers = totalSlices - slicesNeeded;

    cout << "Slices left over: " << leftovers << endl;


    cout << "\n----- Question 4: Cheering Program -----" << endl;

    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}
