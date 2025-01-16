# include <iostream>
# include <vector> // need to include this header file for implementation of Vector.
using namespace std;

int main(){
    vector<int> vec ={4,1,2,1,4};
    int ans = 0;
    for(int val : vec){
        ans = ans ^ val;
    }
    cout << "Unique Value : " << ans << endl;
    return 0;
}