#include <iostream>
using namespace std;

int main() {
    int n, i = 0, sum = 0;

    cout << "Enter the desired number of your choice: ";
    cin >> n;
    
    // Loop to print values from 0 to n
    do {
        cout << i << " "; 
        sum += i;  // Accumulate the sum of i
        i++;
    } while (i <= n);

    // After the loop, print the sum
    cout << "\nSum of numbers from 0 to " << n << " is: " << sum << endl;

    return 0;
}
