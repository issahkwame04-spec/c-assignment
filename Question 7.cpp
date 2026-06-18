#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    // Read a string from the user
    cout << "Enter a string: ";
    cin >> text;

    // Check if the string contains 'a'
    if (text.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }

    return 0;
}
