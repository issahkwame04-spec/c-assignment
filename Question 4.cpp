#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Read a string from the user
    cout << "Enter a string: ";
    cin >> word;

    // Check if the string is equal to "hello"
    if (word == "hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}

