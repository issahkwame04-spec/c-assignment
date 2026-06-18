#include <iostream>
using namespace std;

int main() {
    int firstValue, secondValue;

    // Read two integer values from the user
    cout << "Enter the first integer: ";
    cin >> firstValue;

    cout << "Enter the second integer: ";
    cin >> secondValue;

    // Check if the first value is greater than the second
    if (firstValue > secondValue) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}

