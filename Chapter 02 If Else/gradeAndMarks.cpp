//                 Else If 
//  Ques: Take input percentage of a student and print the grade according to marks: 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Marks : ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    if(n>=61 and n<=80){
        cout<<"Good";
    }
    if(n>=41 and n<=60){
        cout<<"Average";
    }
    if(n<=40){
        cout<<"Fail";
    }

// How 
// Ques: Given a point (x,y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0,0).