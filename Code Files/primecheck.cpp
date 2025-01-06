#include <iostream>
using namespace std;

int main() {
    int n, i = 0, sum = 0; 
    bool isPrime = true;

    cout << "Enter the desired number of your choice: ";
    cin >> n;
    
    for(int i=2; i<=n-1; i++){
        if(n% i ==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
    cout << "\nEntered number is prime number"<< endl;
    }
    else
    cout << "\nEntered number is composite number "<< endl;

    return 0;
}
