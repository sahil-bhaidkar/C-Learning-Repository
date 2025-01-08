#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the desired number of your choice :" << endl;
    cin >> n;
    
    for(int i=1; i<=n ; i++){
        sum += i;
    }

    cout << "Your Sum is : "<< sum << endl;
    return 0;
}