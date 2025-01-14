// Find Smallest and Largest number in an Array :
// We can use min() which is implicite in C++ language.
# include <iostream>
using namespace std;
int main(){
    // Initialisation of blank array:
    int nums[] ={5,15,22,1,-15,24};
    int s = sizeof(nums)/sizeof(int); // calculating length of the initialised array.
    int minimum =INT_MAX; // +∞ (+Infinity)
    int maximum = INT_MIN; // -∞ (-Infinity)
    
    //Loop for each item's Iteration:
    // for(int i= 0; i<s;i++){
    //     // Condition for each item with "minimum" variable value.
    //     if(nums[i]<minimum){
    //         //updating the minimum variable with newly found smallest number if the above if condition is true. 
    //         minimum = nums[i];

    //     }
    // }

    //Loop for each item's Iteration to find minimum value:
    for(int i= 0; i<s;i++){
        //Shortest way :
        minimum = min(nums[i], minimum);
    }

    //Loop for each item's Iteration to find minimum value:
    for(int i= 0; i<s;i++){
        //Shortest way :
        maximum = max(nums[i], maximum);
    }

    cout << "Smallest number in the array : " << minimum <<endl;
    cout << "Biggest number in the array : " << maximum <<endl;

    return 0;
}
