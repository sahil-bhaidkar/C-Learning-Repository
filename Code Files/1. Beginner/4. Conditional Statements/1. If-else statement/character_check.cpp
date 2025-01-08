#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    char ch;
    cout << "Please Enter any single character from either a-z or A-Z : " << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Given Character is in lowercase." <<endl;
    }
    else {
        cout << "Given character is in uppercase." <<endl;
    }


}

// Boilerplate code -comment