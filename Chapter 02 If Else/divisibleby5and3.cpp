// Ques : Take positive integer input and tell if it is divisible bi 5 and 3. 


// Divisible by "and"


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;
//     // if(n%5==0 && n%3==0){
//     //     cout<<"Divisible by 5 and 3";
//     // }
//     if(n%15==0){
//          cout<<"Divisible by 5 and 3";
//     }
//     else{
//         cout<<"Not Divisible by 5 and 3";
//     }
// }


// Divisible by "or"

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"Divisible by 5 and 3";
    // }
    if(n%15==0){
         cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not Divisible by 5 or 3";
    }
}