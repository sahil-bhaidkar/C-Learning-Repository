# include <iostream>
using namespace std;
int main(){
    // Initialisation of blank array:
    int marks[5] ={}; // "Datatype" "Variable name" ["Length of Array"]
    
    // Initialisation with some value in the array:
    int marks1[5] = {90,78,60,86,99};
    cout << marks[2] << endl;
    cout << marks1[0] << endl;
    cout << marks1[-1] << endl;


    // Used below code for the Output of each item in the array : 
    //int is of 4 Bytes and if the Array is of length 5 then the size of that array will be 4*5= 20 so if we use the below logic we will get exacth length that is 5.
    int len = sizeof(marks1)/sizeof(int);  

    // Loop to get each item inside the array : [loop from 0 to size-1]
    for(int i=0; i<len; i++){
        cout << "item " << i << ": " << marks1[i]<< endl;
    }

    // Let's Try getting input from the user :
    // let' ask user for the input for size of the array:
    cout << "Enter the total no. of marks you want to input : [ Note : Indexing starts from 0 here]";
    cin >> len; // will be further used for lenght of array assigned by the user

    for(int i=0; i<len; i++){
        cin >> marks1[i];
    }

    // Printing loop for each item the updated array:
    for(int i=0; i<len; i++){
        cout << "item " << i << ": " << marks1[i]<< endl;
    }

    return 0;
}