#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Use the ternary operator to find the larger number
    int larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}
