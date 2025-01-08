// Pyramid Pattern
//    *
//  *   *
//*       *
//  *   *
//    *

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // User input:
    cout << "Enter the desired number: ";
    cin >> n;

    // Top part of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces for the current row
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the first star
        cout << "*";

        // Print spaces between the stars for rows > 0
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }

        // Move to the next line after the row is complete
        cout << endl;
    }

    // Bottom part of the diamond (inverted pyramid)
    for (int i = n - 2; i >= 0; i--) { // Start from n-2 to avoid repeating the middle row
        // Print leading spaces for the current row
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the first star
        cout << "*";

        // Print spaces between the stars for rows > 0
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }

        // Move to the next line after the row is complete
        cout << endl;
    }

    return 0;
}