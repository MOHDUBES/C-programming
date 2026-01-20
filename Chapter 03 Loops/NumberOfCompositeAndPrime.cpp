// Ques: WAP to check if a number is composite or not.

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n; 
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0) {
//             cout<<"Composite";
//            break; // to get out of the loop
//         }
//     }
// }

//using boolan

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    bool flag = true; // true mean prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0) {
            flag = false; // false means composite
           break; // to get out of the loop
        }
    }
    if(n==1) cout<<"Neither Prime Nor Composite";
    else if(flag==true) cout<<"prime";
    else cout<<"composite";
}

