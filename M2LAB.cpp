// CSC 134
// M2LAB1 - General Crates Case Study
// Ricardo Kelly
// March 3rd, 2026

#include <iostream>
using namespace std;

int main() {

    // Named constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;

    // Variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    // Step 1: Get crate dimensions
    cout << "Enter the length of the crate: ";
    cin >> length;

    cout << "Enter the width of the crate: ";
    cin >> width;

    cout << "Enter the height of the crate: ";
    cin >> height;

    // Step 2: Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Step 3: Display results
    cout << endl;
    cout << "Crate Volume: " << volume << " cubic feet" << endl;
    cout << "Cost to Build: $" << cost << endl;
    cout << "Customer Charge: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
