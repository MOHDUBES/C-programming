// Ques : print the given pattern
//      *
//     ***
//    *****
//   *******

// Star Pyramid

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows :";
 cin>>n;
 for(int i=1; i<=n; i++){
     for(int j=1; j<=n-i; j++){
         cout<<"  ";
     }
     for(int j=1; j<=2*i-1; j++){
         cout<<"* ";
     }
     cout<<endl;
 }  
}


// How
// Ques : print the given pattern
//      1
//     123
//    12345
//   1234567
// Number Pyramid

// Ques : print the given pattern
//      A
//     ABC
//    ABCDE
//   ABCDEFG
// Alphabet Pyramid

// Ques : print the given pattern
//      *
//     * *
//    * * *
//   * * * *
//    * * *
//     * *
//      *

// Star Diamond Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter number of rows : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
