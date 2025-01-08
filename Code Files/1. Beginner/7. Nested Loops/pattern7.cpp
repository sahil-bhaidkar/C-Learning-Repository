//Pattern : 
// 1 
// 1 2
// 1 2 3

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n, num = 1;

    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    for(int i = 0 ; i < n; i++){
        for(int j = 1;j < i+1; j++){
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}