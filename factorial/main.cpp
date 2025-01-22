#include <iostream>
using namespace std;

int main() {
//initialization
    int number, factorial = 1;

//input
    cout << "Enter a number for factorial: ";
    cin >> number;

// condition
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

//output
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
