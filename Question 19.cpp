#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, i = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    long long temp = binary;

    // Convert binary to decimal
    while (temp != 0) {
        int digit = temp % 10;

        if (digit != 0 && digit != 1) {
            cout << "Invalid binary number!";
            return 0;
        }

        decimal += digit * pow(2, i);
        temp /= 10;
        i++;
    }

    cout << "Decimal: " << decimal << endl;

    cout << "Octal: " << oct << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;

    return 0;
}
