#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

// Read input string

    cout << "Enter a string: ";
    cin.getline(str, 100);

//condition
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
//output
    cout << "Length of the string is: " << length << endl;

    return 0;
}
