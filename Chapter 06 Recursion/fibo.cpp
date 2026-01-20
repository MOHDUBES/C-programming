// *Multiple calls
// Ques : write a function to calculate the nth fibonacci number using recursion.

#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1; // base case
    return fibo(n-1) + fibo(n-2); // multiple recursive calls
}
int main(){
    int n;
    cout<<"Entern n : ";
    cin>>n;
    cout<<fibo(n);
}

// How 
// Ques : power function (logarithmic)

// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     if(b==0) return 1; // base case
//     if(b%2==0){
//         int halfPower = power(a,b/2);
//         return halfPower * halfPower; // work + recursive call
//     } else {
//         return a * power(a,b-1); // work + recursive call
//     }
// }
// int main(){
//     int a;
//     cout<<"Enter base : ";
//     cin>>a;
//     int b;
//     cout<<"Enter power : ";
//     cin>>b;
//     cout<<power(a,b);
// }