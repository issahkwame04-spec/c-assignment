#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three integers
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    // Check if all three values are equal
    if (num1 == num2 && num2 == num3) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}
