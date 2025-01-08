//Pattern : 
// A B C D
// A B C D
// A B C D
// A B C D

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n;
    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    // Outer loop for rows :
    for(int i = 0; i<n; i++){
        char ch = 'A'; // To reset the character to "A" before printing each line for the pattern.

        // Inner loop for columns :
        for(int j = 1; j<=n; j++){
            cout << ch << " "; // Printing the outcome of each row. 
            ch = ch+1;
        }
        cout << endl;
    }

    return 0;
}