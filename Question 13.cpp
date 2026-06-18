#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is odd and divisible by 3
    if ((number % 2 != 0) && (number % 3 == 0)) {
        cout << "The number is both odd and divisible by 3." << endl;
    } else {
        cout << "The number is not both odd and divisible by 3." << endl;
    }

    return 0;
}
