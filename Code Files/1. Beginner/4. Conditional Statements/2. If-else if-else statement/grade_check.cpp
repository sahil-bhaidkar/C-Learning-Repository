#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int n;
    cout << "Enter your marks : ";
    cin >>n;
    if(n>=90){
        cout << "Your Grade is 'A'." <<endl;
    }
    else if(n>=80 && n <90 ){
        cout << "Your Grade is 'B'." <<endl;
    }
    else {
        cout << "Your Grade is 'C'." <<endl;
    }
}

// Boilerplate code -comment