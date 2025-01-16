# include <iostream>
# include <vector> // need to include this header file for implementation of Vector.
using namespace std;

int main(){
    vector<int> vec ={1,2,3}; // the size of the created vector is 0.
    cout << "Size : " << vec.size()<< endl; //size() returns size of the vector
    vec.push_back(70); // Adds given value to the end of the vector.
    vec.pop_back(); // Removes last value from the vector. 
    cout << "First Value : " << vec.front() << endl; //Returns first value inside the vector.
    cout << "Last Value : "<< vec.back() << endl; //Returns last value inside the vector.
    cout << "Value at given index : "<< vec.at(1) << endl; //Returns particular value at given index.
    cout << "Capacity of the created vector : "<< vec.capacity() << endl; //Returns particular value at given index.

    return 0;
}