#include <iostream>
using namespace std;

int main() {
    int n;
    
    // User input: number of rows
    cout << "Enter the desired number of rows: ";
    cin >> n;

    // Top half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print the first group of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces between the stars
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Print the second group of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    // Bottom half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print the first group of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces between the stars
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Print the second group of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
