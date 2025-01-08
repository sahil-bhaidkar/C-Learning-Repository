#include <iostream>
using namespace std;

int main() {
    int n, evensum = 0;

    cout << "Enter the desired number of your choice :" << endl;
    cin >> n;
    
    for(int i=1; i<=n ; i++){
        if(i%2 == 0){ // Checking the even number.
            evensum += i; // Sum of the even number here.
        }
    }

    cout << "Your Sum of odd number till "<< n <<" is : " << evensum << endl;
    return 0;
}