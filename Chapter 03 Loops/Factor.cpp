// Ques: WAP to find the higest factor of a number 'n' (other than n itself).

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int f = 1;  // store karaunga highest factor 
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0) f = i;
//     }
//      cout<<f;
// }


// used of braek

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    for(int i=n/2;i>=1;i--){
        if(n%i==0) {
            cout<<i<<" ";
           break; // to get out of the loop
        }
    }
}

