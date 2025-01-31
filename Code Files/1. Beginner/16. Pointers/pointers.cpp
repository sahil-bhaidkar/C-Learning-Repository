#include <iostream>
using namespace std;

// Function to create a new array
int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }
    return arr;
}

// Function to print the array elements
void printArray(int* arr, int size) {
    cout << "Array Elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to calculate and print the sum of array elements
void sumOfArray(int* arr, int size) {
    long long sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Sum of Array Elements: " << sum << endl;
}

// Function to calculate and print the product of array elements
void productOfArray(int* arr, int size) {
    long long product = 1;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    cout << "Product of Array Elements: " << product << endl;
}

// Function to perform pointer arithmetic
void pointerArithmetic(int* arr, int size, int step) {
    if (step > size - 1 || step < 0) {
        cerr << "Error: Invalid step." << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        cout << *(arr + i * step) << " ";
    }
}

// Function to dereference a pointer
void dereference(int* ptr) {
    cout << "*ptr = " << *(ptr) << endl;
}

// Function to assign a value to an array
void assignToArray(int* arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
}

int main() {
    int size = 10;

    // Create a new array and print its elements
    int* arr1 = createArray(size);
    cout << "Array 1:" << endl;
    printArray(arr1, size);

    // Sum of array elements
    sumOfArray(arr1, size);

    // Product of array elements
    productOfArray(arr1, size);

    // Perform pointer arithmetic
    cout << "\nPointer Arithmetic:" << endl;
    pointerArithmetic(arr1, size, 2);
    pointerArithmetic(arr1, size - 3, -1);

    // Dereference a pointer
    cout << "\nDereferencing:*ptr = " << *(arr1 + size) << endl;

    // Assign a value to an array
    assignToArray(arr1, size, 5);

    return 0;
}

// This script demonstrates the following basic concepts of pointers:

// - Creating an array using `createArray`
// - Printing the elements of an array using `printArray`
// - Calculating and printing the sum or product of an array's elements using `sumOfArray` and `productOfArray`
// - Performing pointer arithmetic to access elements of an array
// - Dereferencing a pointer to get its value at a specific memory location using `dereference`
// - Assigning values to an array using `assignToArray`