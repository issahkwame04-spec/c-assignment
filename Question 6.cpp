#include <iostream>
#include <cctype>   // For isupper()
using namespace std;

int main() {
    char ch;

    // Read a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an uppercase letter
    if (isupper(ch) && ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }

    return 0;
}
