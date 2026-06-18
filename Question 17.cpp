#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is a power of 2
    if (number > 0 && (number & (number - 1)) == 0) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}
