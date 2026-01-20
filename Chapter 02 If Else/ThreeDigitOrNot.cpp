// Multiple conditions using && and ||

// Ques : Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // if(n>99 and n<1000){
    if(n>99 && n<1000){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"NOt a Three Digit nnumber";
    }
}