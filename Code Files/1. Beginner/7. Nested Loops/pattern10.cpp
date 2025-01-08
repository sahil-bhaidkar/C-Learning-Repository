// Inverted Pattern
//1111
//222
//33
//4

// i spaces to print

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n, num = 1;

    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    for(int i =0 ; i < n; i++){ //outer loop for iterations.
        for(int j = 0; j<i; j++){ //inner loop for printing spaces.
            cout << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << (i+1);
        }
        
        cout << endl;
    }

    return 0;
}