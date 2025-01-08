// Inverted Pattern
//1111
//222
//33
//4

// i spaces to print

#include <iostream>
using namespace std;

int main() {
    int n; // User input for number of rows
    cout << "Enter the desired number: ";
    cin >> n;

    // Outer loop to handle the rows
    for (int i = 0; i < n; i++) {
        // Inner loop to print spaces before the characters
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Inner loop to print the characters
        char ch = 'A' + i; // Start printing characters from 'A', then 'B', and so on
        for (int j = 0; j < n - i; j++) {
            cout << ch; // Print the current character
        }

        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}