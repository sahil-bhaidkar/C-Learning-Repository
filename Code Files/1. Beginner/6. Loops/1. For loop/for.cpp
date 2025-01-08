#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the desired number of your choice :" << endl;
    cin >> n;
    
    for(int i=1; i<=n ; i++){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}