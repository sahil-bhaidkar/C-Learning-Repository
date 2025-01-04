#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n;
    cout << "Enter your number : ";
    cin >>n;
    if(n>=0){
        cout << "Entered number " << n << " is positive." <<endl;
    }
    else {
        cout << "Entered number " << n << " is negative." <<endl;
    }
}

// Boilerplate code -comment