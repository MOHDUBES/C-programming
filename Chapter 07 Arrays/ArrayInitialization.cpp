#include <iostream> 
using namespace std;
int main(){
    int arr[5] = {4,1,3,7,3};
    arr[0] = 0; //updating value at index 0
    // output
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
        // cout<<arr[i]*2<<" ";   multiplying each element 
    }
}


// Reverse

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,1,3,7,3};
//     // output
//     for(int i=4; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }