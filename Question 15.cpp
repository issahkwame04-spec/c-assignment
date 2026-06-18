#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Input two floating-point numbers
    cout << "Enter the first floating-point number: ";
    cin >> num1;

    cout << "Enter the second floating-point number: ";
    cin >> num2;

    // Use the conditional (ternary) operator to find the larger number
    float larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}
