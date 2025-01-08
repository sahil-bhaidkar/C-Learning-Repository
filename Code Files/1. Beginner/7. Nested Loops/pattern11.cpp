// Pyramid Pattern
//    1
//  1 2 1
//1 2 3 2 1

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
        //spaces : n-i-1
        for (int j=0; j<n-i-1; j++){

            cout<<" ";

        }
        //num set 1 : i+1
        for(int j= 1; j<=i+1 ;j++){

            cout << j;
        }
        //num set 2   
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}