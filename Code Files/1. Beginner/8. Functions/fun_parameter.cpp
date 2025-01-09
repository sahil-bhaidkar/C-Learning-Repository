// function with parameter :
#include <iostream>
using namespace std;

//function definition :
// sum of 2 number :
double sum(double a, double b){ 
    double s = a+b;
    return s;
}

double min(double a, double b){ //parameters
    if(a > b){
       return b;
    }
    else {
    return a;
    }
}



int main()
{
    cout << "Sum :" << sum(10.80,3.14) <<endl;
    cout << "min number is : " << min(13,80) << endl; // arguments
    return 0;
}
