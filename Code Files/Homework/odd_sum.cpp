#include <iostream>
using namespace std;

int main() {
    int n, oddsum = 0;

    cout << "Enter the desired number of your choice :" << endl;
    cin >> n;
    
    for(int i=1; i<=n ; i++){
        if(i%2!=0){ // Checking the odd number.
            oddsum += i; // Sum of the odd number here.
        }
    }

    cout << "Your Sum of odd number till "<< n <<" is : " << oddsum << endl;
    return 0;
}