//Pattern : 
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n, num = 1;

    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    //Outer loop :
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++ ;
        }
        cout << endl;
    }

    return 0;
}