// Find Smallest and Largest number in an Array with respecting index of the number :
// We can use min() which is implicite in C++ language.
# include <iostream>
using namespace std;
int main(){
    // Initialisation of blank array:
    int nums[] ={5,15,22,1,-15,24};
    int minindex,maxindex;
    int s = sizeof(nums)/sizeof(int); // calculating length of the initialised array.
    int minimum =INT_MAX; // +∞ (+Infinity)
    int maximum = INT_MIN; // -∞ (-Infinity)

    //Loop for each item's Iteration to find minimum value:
    for(int i= 0; i<s;i++){
        //Shortest way :
        if (nums[i] < minimum) {
            minimum = nums[i];
            minindex = i;  // Store index of the minimum value
        }
        if (nums[i] > maximum) {
            maximum = nums[i];
            maxindex = i;  // Store index of the maximum value
        }
    }

    cout << "Smallest number in the array : " << minimum <<endl;
    cout << "Smallest numer location at :" << minindex << endl;
    cout << "Biggest number in the array : " << maximum <<endl;
    cout << "Biggest numer location at :" << maxindex << endl;

    return 0;
}
