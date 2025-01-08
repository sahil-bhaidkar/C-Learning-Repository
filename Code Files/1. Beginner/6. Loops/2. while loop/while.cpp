#include <iostream>
using namespace std;

int main() {
    int n, count = 1;

    cout << "Enter the desired number of your choice :" << endl;
    cin >> n;
    // While loop start : while (Condition to check){ work to do }
    while (count <= n){

        cout << count << " ";
        count++;

    }
    cout <<endl;
    return 0;
}