#include <iostream>
using namespace std;


int main() {
	int num1, num2;
	
	//input two integers
	cout << "enter first integer: ";
	cin >> num1;
	
	cout << "enter second integer: ";
	cin >> num2;
	
	//calculations
	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int qoutient = num1 / num2;
	
	//output results
	cout << "\nResults:" << endl;
	cout << "sum = " << sum << endl;
	cout <<"Difference = " <<difference << endl;
	cout <<"Product = " << product << endl;   
	
	 if (num2 != 0) {
        double quotient = (double)num1 / num2;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Quotient = Undefined (division by zero is not allowed)" << endl;
    }
	
	
	return 0;
}
