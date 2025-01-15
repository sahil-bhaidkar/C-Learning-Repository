#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) { // Found Target Value
            return i;
        }
    }
    return -1; // Not found the target value
}

int main() {
    int arr[] = {1, 45, 50, 8, 49};
    int sz = 5;  
    int target = 100;

    cout << linearsearch(arr, sz, target) << endl; // Should print 3, as 8 is at index 3

    return 0;
}
