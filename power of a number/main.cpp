#include <iostream>
using namespace std;

int main() {
//initialization
    int base, exponent, result = 1;

//input
    cout << "Enter base: ";
    cin >> base;
   cout << "Enter exponent: ";
    cin >> exponent;

//condition
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
//output
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
