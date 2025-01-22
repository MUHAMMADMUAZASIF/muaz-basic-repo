#include <iostream>
using namespace std;

int main() {
//initialization
    int number;

    cout << "Enter a number for its table: ";
    cin >> number;
//condition
    for (int i = 1; i <= 10; i++)
    {
//output
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
