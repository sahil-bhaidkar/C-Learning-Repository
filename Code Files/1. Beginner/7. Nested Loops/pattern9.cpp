// Floyed Pattern
//1
//2 3
//4 5 6
//7 8 9 10

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
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}