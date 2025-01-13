#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b; // Input for a and b

    cout << "Bitwise AND (&) : " << (a & b) << endl; 
    cout << "Bitwise OR (|) : " << (a | b) << endl;
    cout << "Bitwise XOR (^) : " << (a ^ b) << endl;
    cout << "Bitwise << : " << (a & b) << endl;
    cout << "Bitwise >> : " << (a & b) << endl;
    return 0;
}