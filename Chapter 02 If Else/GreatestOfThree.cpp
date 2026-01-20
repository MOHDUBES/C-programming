// Ques: take 3 positive integers input and print the greatest of them. 

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    if(a>b and a>c){
        cout<<a<<" is greatest";
    }
    else if(b>a and b>c){
        cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
}

// How
//  Ques: Take 3 positive integers input and print the least of them. 
//  Ques: Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

