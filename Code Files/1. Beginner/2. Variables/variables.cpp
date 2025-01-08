#include <iostream>
using namespace std;

// This is the starting point of the code.
int main(){
    int age = 25; // Integer
    char grade = 'A'; // Character
    float PI = 3.14f; // need to type f at the end of the float values else it will be implicitly converted to double
    bool t = true; // Boolean
    cout << age << endl;
    cout << grade << endl;
    cout << sizeof(age) << endl;
    cout << sizeof(grade) << endl;
    return 0;
}

// Boilerplate code -comment