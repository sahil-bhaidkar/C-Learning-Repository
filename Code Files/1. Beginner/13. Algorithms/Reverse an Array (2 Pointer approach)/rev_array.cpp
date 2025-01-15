#include <iostream>
using namespace std;

void revesearray(int arr[], int sz) {
    int start = 0;
    int end = sz - 1; 

    while (start < end) {  // Loop stops when start meets end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    revesearray(arr, sz);

    cout << "Reversed Array :" << endl;
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
