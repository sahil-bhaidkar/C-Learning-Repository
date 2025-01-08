//Pattern : 
// 1 
// 2 1
// 3 2 1

#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n, num = 1;

    // User input : 
    cout << "Enter the desired number : " ;
    cin >>  n;

    for(int i =0 ; i < n; i++){
        for(int j = i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}