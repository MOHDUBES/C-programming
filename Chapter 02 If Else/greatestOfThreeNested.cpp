            // Nested if-else 

// Ques: take 3 positive integers input and print the greatest of them. without using multiple conditions

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
    // a>b and b>c -> a>c -> a greatest
    if(a>b){ //b can never be the greatest
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{ // c>a , a>b -> c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{ // b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{ // c > b, c > b > a
            cout<<c<<" is greatest";
        }
    }
}


//         How
//  Ques: If the ages of ram, shyam and ajay are input through the keyboard, write a program to determine the youngest of the three.