//Pattern : 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n;
    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    // Outer loop for rows :
    for(int i = 1; i<=n; i++){
        // Inner loop for columns :
        for(int j = 1; j<=n; j++){
            cout << j << " "; // Printing the outcome of each row. 
        }
        cout << endl;
    }

    return 0;
}