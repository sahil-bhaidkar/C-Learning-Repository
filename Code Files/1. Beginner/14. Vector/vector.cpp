# include <iostream>
# include <vector> // need to include this header file for implementation of Vector.
using namespace std;

int main(){
    vector<int> vec ={1,2,3}; // the size of the created vector is 0.
    //cout << vec[0]; // This will give "Segmentation Fault" error if the length of vactor is 0 and no value exists inside it.
    cout << vec[0]<< endl;
    vector<int> vec1(5,0); // This will add value 0 to all the index present in the vector.
    //Using loop to iterate each item :
    for(int i: vec1){
        cout << i << endl;
    }

    vector<char> vec2 = {'A','B','C','D'}; // This will add value 0 to all the index present in the vector.
    //Using loop to iterate each item :
    for(char val : vec2){
        cout << val << endl;
    }

    // cout << vec1[0]<< endl;
    // cout << vec1[1]<< endl;
    // cout << vec1[2]<< endl;
    // cout << vec1[3]<< endl;
    // cout << vec1[4]<< endl;

    return 0;
}